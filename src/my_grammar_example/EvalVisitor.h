#pragma once
#include "PascalLiteBaseVisitor.h"
#include <iostream>
#include <map>
#include <string>
#include <stdexcept>

class EvalVisitor : public PascalLiteBaseVisitor {
private:
    std::map<std::string, double> memory;

public:
    virtual antlrcpp::Any visitAssignment(PascalLiteParser::AssignmentContext* ctx) override {
        std::string id = ctx->ID()->getText();
        double value = std::any_cast<double>(visit(ctx->expr()));
        memory[id] = value;
        return value;
    }

    virtual antlrcpp::Any visitNumber(PascalLiteParser::NumberContext* ctx) override {
        return std::stod(ctx->INT()->getText());
    }

    virtual antlrcpp::Any visitVariable(PascalLiteParser::VariableContext* ctx) override {
        std::string id = ctx->ID()->getText();
        if (memory.find(id) != memory.end()) {
            return memory[id];
        }
        return 0.0;  
    }

    virtual antlrcpp::Any visitAddSub(PascalLiteParser::AddSubContext* ctx) override {
        double left = std::any_cast<double>(visit(ctx->expr(0)));
        double right = std::any_cast<double>(visit(ctx->expr(1)));
        if (ctx->op->getText() == "+") return left + right;
        return left - right;
    }

    virtual antlrcpp::Any visitMulDiv(PascalLiteParser::MulDivContext* ctx) override {
        double left = std::any_cast<double>(visit(ctx->expr(0)));
        double right = std::any_cast<double>(visit(ctx->expr(1)));
        if (ctx->op->getText() == "*") return left * right;
        if (right == 0.0) throw std::runtime_error("Error: Division by zero!");
        return left / right;
    }

    virtual antlrcpp::Any visitCompare(PascalLiteParser::CompareContext* ctx) override {
        double left = std::any_cast<double>(visit(ctx->expr(0)));
        double right = std::any_cast<double>(visit(ctx->expr(1)));
        std::string op = ctx->op->getText();

        if (op == "<")  return left < right ? 1.0 : 0.0;
        if (op == ">")  return left > right ? 1.0 : 0.0;
        if (op == "==") return left == right ? 1.0 : 0.0;
        return 0.0;
    }

    virtual antlrcpp::Any visitIfStat(PascalLiteParser::IfStatContext* ctx) override {
        double condition = std::any_cast<double>(visit(ctx->expr()));

        if (condition != 0.0) { 
            visit(ctx->stat(0));  
        }
        else if (ctx->stat(1)) {
            visit(ctx->stat(1));  
        }
        return 0.0;
    }

    virtual antlrcpp::Any visitWhileStat(PascalLiteParser::WhileStatContext* ctx) override {
        while (std::any_cast<double>(visit(ctx->expr())) != 0.0) {
            visit(ctx->stat());  
        }
        return 0.0;
    }

    virtual antlrcpp::Any visitWriteStat(PascalLiteParser::WriteStatContext* ctx) override {
        double value = std::any_cast<double>(visit(ctx->expr()));
        std::cout << value << std::endl;
        return 0.0;
    }
};