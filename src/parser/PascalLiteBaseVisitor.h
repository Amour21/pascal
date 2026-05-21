
// Generated from PascalLite.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalLiteVisitor.h"


/**
 * This class provides an empty implementation of PascalLiteVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PascalLiteBaseVisitor : public PascalLiteVisitor {
public:

  virtual std::any visitProgram(PascalLiteParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStat(PascalLiteParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(PascalLiteParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStat(PascalLiteParser::IfStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStat(PascalLiteParser::WhileStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(PascalLiteParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWriteStat(PascalLiteParser::WriteStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(PascalLiteParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(PascalLiteParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(PascalLiteParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSub(PascalLiteParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(PascalLiteParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompare(PascalLiteParser::CompareContext *ctx) override {
    return visitChildren(ctx);
  }


};

