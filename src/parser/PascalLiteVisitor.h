
// Generated from PascalLite.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalLiteParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PascalLiteParser.
 */
class  PascalLiteVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PascalLiteParser.
   */
    virtual std::any visitProgram(PascalLiteParser::ProgramContext *context) = 0;

    virtual std::any visitStat(PascalLiteParser::StatContext *context) = 0;

    virtual std::any visitAssignment(PascalLiteParser::AssignmentContext *context) = 0;

    virtual std::any visitIfStat(PascalLiteParser::IfStatContext *context) = 0;

    virtual std::any visitWhileStat(PascalLiteParser::WhileStatContext *context) = 0;

    virtual std::any visitBlock(PascalLiteParser::BlockContext *context) = 0;

    virtual std::any visitWriteStat(PascalLiteParser::WriteStatContext *context) = 0;

    virtual std::any visitVariable(PascalLiteParser::VariableContext *context) = 0;

    virtual std::any visitNumber(PascalLiteParser::NumberContext *context) = 0;

    virtual std::any visitMulDiv(PascalLiteParser::MulDivContext *context) = 0;

    virtual std::any visitAddSub(PascalLiteParser::AddSubContext *context) = 0;

    virtual std::any visitParens(PascalLiteParser::ParensContext *context) = 0;

    virtual std::any visitCompare(PascalLiteParser::CompareContext *context) = 0;


};

