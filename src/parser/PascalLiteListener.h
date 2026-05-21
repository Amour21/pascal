
// Generated from PascalLite.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalLiteParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PascalLiteParser.
 */
class  PascalLiteListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(PascalLiteParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(PascalLiteParser::ProgramContext *ctx) = 0;

  virtual void enterStat(PascalLiteParser::StatContext *ctx) = 0;
  virtual void exitStat(PascalLiteParser::StatContext *ctx) = 0;

  virtual void enterAssignment(PascalLiteParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(PascalLiteParser::AssignmentContext *ctx) = 0;

  virtual void enterIfStat(PascalLiteParser::IfStatContext *ctx) = 0;
  virtual void exitIfStat(PascalLiteParser::IfStatContext *ctx) = 0;

  virtual void enterWhileStat(PascalLiteParser::WhileStatContext *ctx) = 0;
  virtual void exitWhileStat(PascalLiteParser::WhileStatContext *ctx) = 0;

  virtual void enterBlock(PascalLiteParser::BlockContext *ctx) = 0;
  virtual void exitBlock(PascalLiteParser::BlockContext *ctx) = 0;

  virtual void enterWriteStat(PascalLiteParser::WriteStatContext *ctx) = 0;
  virtual void exitWriteStat(PascalLiteParser::WriteStatContext *ctx) = 0;

  virtual void enterVariable(PascalLiteParser::VariableContext *ctx) = 0;
  virtual void exitVariable(PascalLiteParser::VariableContext *ctx) = 0;

  virtual void enterNumber(PascalLiteParser::NumberContext *ctx) = 0;
  virtual void exitNumber(PascalLiteParser::NumberContext *ctx) = 0;

  virtual void enterMulDiv(PascalLiteParser::MulDivContext *ctx) = 0;
  virtual void exitMulDiv(PascalLiteParser::MulDivContext *ctx) = 0;

  virtual void enterAddSub(PascalLiteParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(PascalLiteParser::AddSubContext *ctx) = 0;

  virtual void enterParens(PascalLiteParser::ParensContext *ctx) = 0;
  virtual void exitParens(PascalLiteParser::ParensContext *ctx) = 0;

  virtual void enterCompare(PascalLiteParser::CompareContext *ctx) = 0;
  virtual void exitCompare(PascalLiteParser::CompareContext *ctx) = 0;


};

