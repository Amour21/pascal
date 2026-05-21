
// Generated from PascalLite.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalLiteListener.h"


/**
 * This class provides an empty implementation of PascalLiteListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PascalLiteBaseListener : public PascalLiteListener {
public:

  virtual void enterProgram(PascalLiteParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(PascalLiteParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStat(PascalLiteParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(PascalLiteParser::StatContext * /*ctx*/) override { }

  virtual void enterAssignment(PascalLiteParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(PascalLiteParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterIfStat(PascalLiteParser::IfStatContext * /*ctx*/) override { }
  virtual void exitIfStat(PascalLiteParser::IfStatContext * /*ctx*/) override { }

  virtual void enterWhileStat(PascalLiteParser::WhileStatContext * /*ctx*/) override { }
  virtual void exitWhileStat(PascalLiteParser::WhileStatContext * /*ctx*/) override { }

  virtual void enterBlock(PascalLiteParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(PascalLiteParser::BlockContext * /*ctx*/) override { }

  virtual void enterWriteStat(PascalLiteParser::WriteStatContext * /*ctx*/) override { }
  virtual void exitWriteStat(PascalLiteParser::WriteStatContext * /*ctx*/) override { }

  virtual void enterVariable(PascalLiteParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(PascalLiteParser::VariableContext * /*ctx*/) override { }

  virtual void enterNumber(PascalLiteParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(PascalLiteParser::NumberContext * /*ctx*/) override { }

  virtual void enterMulDiv(PascalLiteParser::MulDivContext * /*ctx*/) override { }
  virtual void exitMulDiv(PascalLiteParser::MulDivContext * /*ctx*/) override { }

  virtual void enterAddSub(PascalLiteParser::AddSubContext * /*ctx*/) override { }
  virtual void exitAddSub(PascalLiteParser::AddSubContext * /*ctx*/) override { }

  virtual void enterParens(PascalLiteParser::ParensContext * /*ctx*/) override { }
  virtual void exitParens(PascalLiteParser::ParensContext * /*ctx*/) override { }

  virtual void enterCompare(PascalLiteParser::CompareContext * /*ctx*/) override { }
  virtual void exitCompare(PascalLiteParser::CompareContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

