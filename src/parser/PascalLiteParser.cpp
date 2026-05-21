
// Generated from PascalLite.g4 by ANTLR 4.13.2


#include "PascalLiteListener.h"
#include "PascalLiteVisitor.h"

#include "PascalLiteParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct PascalLiteParserStaticData final {
  PascalLiteParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PascalLiteParserStaticData(const PascalLiteParserStaticData&) = delete;
  PascalLiteParserStaticData(PascalLiteParserStaticData&&) = delete;
  PascalLiteParserStaticData& operator=(const PascalLiteParserStaticData&) = delete;
  PascalLiteParserStaticData& operator=(PascalLiteParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pascalliteParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<PascalLiteParserStaticData> pascalliteParserStaticData = nullptr;

void pascalliteParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pascalliteParserStaticData != nullptr) {
    return;
  }
#else
  assert(pascalliteParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PascalLiteParserStaticData>(
    std::vector<std::string>{
      "program", "stat", "assignment", "ifStat", "whileStat", "block", "writeStat", 
      "expr"
    },
    std::vector<std::string>{
      "", "';'", "':='", "'if'", "'('", "')'", "'then'", "'else'", "'while'", 
      "'do'", "'begin'", "'end'", "'write'", "'*'", "'/'", "'+'", "'-'", 
      "'<'", "'>'", "'=='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "INT", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,22,90,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,1,0,4,0,18,8,0,11,0,12,0,19,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,
  	1,31,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,45,8,3,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,4,5,56,8,5,11,5,12,5,57,1,5,1,5,1,6,
  	1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,74,8,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,5,7,85,8,7,10,7,12,7,88,9,7,1,7,0,1,14,8,0,2,4,
  	6,8,10,12,14,0,3,1,0,13,14,1,0,15,16,1,0,17,19,93,0,17,1,0,0,0,2,30,1,
  	0,0,0,4,32,1,0,0,0,6,36,1,0,0,0,8,46,1,0,0,0,10,53,1,0,0,0,12,61,1,0,
  	0,0,14,73,1,0,0,0,16,18,3,2,1,0,17,16,1,0,0,0,18,19,1,0,0,0,19,17,1,0,
  	0,0,19,20,1,0,0,0,20,1,1,0,0,0,21,22,3,4,2,0,22,23,5,1,0,0,23,31,1,0,
  	0,0,24,31,3,6,3,0,25,31,3,8,4,0,26,31,3,10,5,0,27,28,3,12,6,0,28,29,5,
  	1,0,0,29,31,1,0,0,0,30,21,1,0,0,0,30,24,1,0,0,0,30,25,1,0,0,0,30,26,1,
  	0,0,0,30,27,1,0,0,0,31,3,1,0,0,0,32,33,5,21,0,0,33,34,5,2,0,0,34,35,3,
  	14,7,0,35,5,1,0,0,0,36,37,5,3,0,0,37,38,5,4,0,0,38,39,3,14,7,0,39,40,
  	5,5,0,0,40,41,5,6,0,0,41,44,3,2,1,0,42,43,5,7,0,0,43,45,3,2,1,0,44,42,
  	1,0,0,0,44,45,1,0,0,0,45,7,1,0,0,0,46,47,5,8,0,0,47,48,5,4,0,0,48,49,
  	3,14,7,0,49,50,5,5,0,0,50,51,5,9,0,0,51,52,3,2,1,0,52,9,1,0,0,0,53,55,
  	5,10,0,0,54,56,3,2,1,0,55,54,1,0,0,0,56,57,1,0,0,0,57,55,1,0,0,0,57,58,
  	1,0,0,0,58,59,1,0,0,0,59,60,5,11,0,0,60,11,1,0,0,0,61,62,5,12,0,0,62,
  	63,5,4,0,0,63,64,3,14,7,0,64,65,5,5,0,0,65,13,1,0,0,0,66,67,6,7,-1,0,
  	67,74,5,20,0,0,68,74,5,21,0,0,69,70,5,4,0,0,70,71,3,14,7,0,71,72,5,5,
  	0,0,72,74,1,0,0,0,73,66,1,0,0,0,73,68,1,0,0,0,73,69,1,0,0,0,74,86,1,0,
  	0,0,75,76,10,6,0,0,76,77,7,0,0,0,77,85,3,14,7,7,78,79,10,5,0,0,79,80,
  	7,1,0,0,80,85,3,14,7,6,81,82,10,4,0,0,82,83,7,2,0,0,83,85,3,14,7,5,84,
  	75,1,0,0,0,84,78,1,0,0,0,84,81,1,0,0,0,85,88,1,0,0,0,86,84,1,0,0,0,86,
  	87,1,0,0,0,87,15,1,0,0,0,88,86,1,0,0,0,7,19,30,44,57,73,84,86
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pascalliteParserStaticData = std::move(staticData);
}

}

PascalLiteParser::PascalLiteParser(TokenStream *input) : PascalLiteParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

PascalLiteParser::PascalLiteParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  PascalLiteParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *pascalliteParserStaticData->atn, pascalliteParserStaticData->decisionToDFA, pascalliteParserStaticData->sharedContextCache, options);
}

PascalLiteParser::~PascalLiteParser() {
  delete _interpreter;
}

const atn::ATN& PascalLiteParser::getATN() const {
  return *pascalliteParserStaticData->atn;
}

std::string PascalLiteParser::getGrammarFileName() const {
  return "PascalLite.g4";
}

const std::vector<std::string>& PascalLiteParser::getRuleNames() const {
  return pascalliteParserStaticData->ruleNames;
}

const dfa::Vocabulary& PascalLiteParser::getVocabulary() const {
  return pascalliteParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PascalLiteParser::getSerializedATN() const {
  return pascalliteParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

PascalLiteParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalLiteParser::StatContext *> PascalLiteParser::ProgramContext::stat() {
  return getRuleContexts<PascalLiteParser::StatContext>();
}

PascalLiteParser::StatContext* PascalLiteParser::ProgramContext::stat(size_t i) {
  return getRuleContext<PascalLiteParser::StatContext>(i);
}


size_t PascalLiteParser::ProgramContext::getRuleIndex() const {
  return PascalLiteParser::RuleProgram;
}

void PascalLiteParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void PascalLiteParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any PascalLiteParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

PascalLiteParser::ProgramContext* PascalLiteParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, PascalLiteParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(17); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(16);
      stat();
      setState(19); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2102536) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

PascalLiteParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalLiteParser::AssignmentContext* PascalLiteParser::StatContext::assignment() {
  return getRuleContext<PascalLiteParser::AssignmentContext>(0);
}

PascalLiteParser::IfStatContext* PascalLiteParser::StatContext::ifStat() {
  return getRuleContext<PascalLiteParser::IfStatContext>(0);
}

PascalLiteParser::WhileStatContext* PascalLiteParser::StatContext::whileStat() {
  return getRuleContext<PascalLiteParser::WhileStatContext>(0);
}

PascalLiteParser::BlockContext* PascalLiteParser::StatContext::block() {
  return getRuleContext<PascalLiteParser::BlockContext>(0);
}

PascalLiteParser::WriteStatContext* PascalLiteParser::StatContext::writeStat() {
  return getRuleContext<PascalLiteParser::WriteStatContext>(0);
}


size_t PascalLiteParser::StatContext::getRuleIndex() const {
  return PascalLiteParser::RuleStat;
}

void PascalLiteParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void PascalLiteParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}


std::any PascalLiteParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

PascalLiteParser::StatContext* PascalLiteParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, PascalLiteParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(30);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalLiteParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(21);
        assignment();
        setState(22);
        match(PascalLiteParser::T__0);
        break;
      }

      case PascalLiteParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(24);
        ifStat();
        break;
      }

      case PascalLiteParser::T__7: {
        enterOuterAlt(_localctx, 3);
        setState(25);
        whileStat();
        break;
      }

      case PascalLiteParser::T__9: {
        enterOuterAlt(_localctx, 4);
        setState(26);
        block();
        break;
      }

      case PascalLiteParser::T__11: {
        enterOuterAlt(_localctx, 5);
        setState(27);
        writeStat();
        setState(28);
        match(PascalLiteParser::T__0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

PascalLiteParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalLiteParser::AssignmentContext::ID() {
  return getToken(PascalLiteParser::ID, 0);
}

PascalLiteParser::ExprContext* PascalLiteParser::AssignmentContext::expr() {
  return getRuleContext<PascalLiteParser::ExprContext>(0);
}


size_t PascalLiteParser::AssignmentContext::getRuleIndex() const {
  return PascalLiteParser::RuleAssignment;
}

void PascalLiteParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void PascalLiteParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any PascalLiteParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

PascalLiteParser::AssignmentContext* PascalLiteParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, PascalLiteParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    match(PascalLiteParser::ID);
    setState(33);
    match(PascalLiteParser::T__1);
    setState(34);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatContext ------------------------------------------------------------------

PascalLiteParser::IfStatContext::IfStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalLiteParser::ExprContext* PascalLiteParser::IfStatContext::expr() {
  return getRuleContext<PascalLiteParser::ExprContext>(0);
}

std::vector<PascalLiteParser::StatContext *> PascalLiteParser::IfStatContext::stat() {
  return getRuleContexts<PascalLiteParser::StatContext>();
}

PascalLiteParser::StatContext* PascalLiteParser::IfStatContext::stat(size_t i) {
  return getRuleContext<PascalLiteParser::StatContext>(i);
}


size_t PascalLiteParser::IfStatContext::getRuleIndex() const {
  return PascalLiteParser::RuleIfStat;
}

void PascalLiteParser::IfStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStat(this);
}

void PascalLiteParser::IfStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStat(this);
}


std::any PascalLiteParser::IfStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitIfStat(this);
  else
    return visitor->visitChildren(this);
}

PascalLiteParser::IfStatContext* PascalLiteParser::ifStat() {
  IfStatContext *_localctx = _tracker.createInstance<IfStatContext>(_ctx, getState());
  enterRule(_localctx, 6, PascalLiteParser::RuleIfStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(PascalLiteParser::T__2);
    setState(37);
    match(PascalLiteParser::T__3);
    setState(38);
    expr(0);
    setState(39);
    match(PascalLiteParser::T__4);
    setState(40);
    match(PascalLiteParser::T__5);
    setState(41);
    stat();
    setState(44);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(42);
      match(PascalLiteParser::T__6);
      setState(43);
      stat();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatContext ------------------------------------------------------------------

PascalLiteParser::WhileStatContext::WhileStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalLiteParser::ExprContext* PascalLiteParser::WhileStatContext::expr() {
  return getRuleContext<PascalLiteParser::ExprContext>(0);
}

PascalLiteParser::StatContext* PascalLiteParser::WhileStatContext::stat() {
  return getRuleContext<PascalLiteParser::StatContext>(0);
}


size_t PascalLiteParser::WhileStatContext::getRuleIndex() const {
  return PascalLiteParser::RuleWhileStat;
}

void PascalLiteParser::WhileStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStat(this);
}

void PascalLiteParser::WhileStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStat(this);
}


std::any PascalLiteParser::WhileStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitWhileStat(this);
  else
    return visitor->visitChildren(this);
}

PascalLiteParser::WhileStatContext* PascalLiteParser::whileStat() {
  WhileStatContext *_localctx = _tracker.createInstance<WhileStatContext>(_ctx, getState());
  enterRule(_localctx, 8, PascalLiteParser::RuleWhileStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(PascalLiteParser::T__7);
    setState(47);
    match(PascalLiteParser::T__3);
    setState(48);
    expr(0);
    setState(49);
    match(PascalLiteParser::T__4);
    setState(50);
    match(PascalLiteParser::T__8);
    setState(51);
    stat();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

PascalLiteParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalLiteParser::StatContext *> PascalLiteParser::BlockContext::stat() {
  return getRuleContexts<PascalLiteParser::StatContext>();
}

PascalLiteParser::StatContext* PascalLiteParser::BlockContext::stat(size_t i) {
  return getRuleContext<PascalLiteParser::StatContext>(i);
}


size_t PascalLiteParser::BlockContext::getRuleIndex() const {
  return PascalLiteParser::RuleBlock;
}

void PascalLiteParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void PascalLiteParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any PascalLiteParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

PascalLiteParser::BlockContext* PascalLiteParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 10, PascalLiteParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    match(PascalLiteParser::T__9);
    setState(55); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(54);
      stat();
      setState(57); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2102536) != 0));
    setState(59);
    match(PascalLiteParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WriteStatContext ------------------------------------------------------------------

PascalLiteParser::WriteStatContext::WriteStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalLiteParser::ExprContext* PascalLiteParser::WriteStatContext::expr() {
  return getRuleContext<PascalLiteParser::ExprContext>(0);
}


size_t PascalLiteParser::WriteStatContext::getRuleIndex() const {
  return PascalLiteParser::RuleWriteStat;
}

void PascalLiteParser::WriteStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWriteStat(this);
}

void PascalLiteParser::WriteStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWriteStat(this);
}


std::any PascalLiteParser::WriteStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitWriteStat(this);
  else
    return visitor->visitChildren(this);
}

PascalLiteParser::WriteStatContext* PascalLiteParser::writeStat() {
  WriteStatContext *_localctx = _tracker.createInstance<WriteStatContext>(_ctx, getState());
  enterRule(_localctx, 12, PascalLiteParser::RuleWriteStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    match(PascalLiteParser::T__11);
    setState(62);
    match(PascalLiteParser::T__3);
    setState(63);
    expr(0);
    setState(64);
    match(PascalLiteParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

PascalLiteParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalLiteParser::ExprContext::getRuleIndex() const {
  return PascalLiteParser::RuleExpr;
}

void PascalLiteParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* PascalLiteParser::VariableContext::ID() {
  return getToken(PascalLiteParser::ID, 0);
}

PascalLiteParser::VariableContext::VariableContext(ExprContext *ctx) { copyFrom(ctx); }

void PascalLiteParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}
void PascalLiteParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

std::any PascalLiteParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* PascalLiteParser::NumberContext::INT() {
  return getToken(PascalLiteParser::INT, 0);
}

PascalLiteParser::NumberContext::NumberContext(ExprContext *ctx) { copyFrom(ctx); }

void PascalLiteParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}
void PascalLiteParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

std::any PascalLiteParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<PascalLiteParser::ExprContext *> PascalLiteParser::MulDivContext::expr() {
  return getRuleContexts<PascalLiteParser::ExprContext>();
}

PascalLiteParser::ExprContext* PascalLiteParser::MulDivContext::expr(size_t i) {
  return getRuleContext<PascalLiteParser::ExprContext>(i);
}

PascalLiteParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }

void PascalLiteParser::MulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDiv(this);
}
void PascalLiteParser::MulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDiv(this);
}

std::any PascalLiteParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<PascalLiteParser::ExprContext *> PascalLiteParser::AddSubContext::expr() {
  return getRuleContexts<PascalLiteParser::ExprContext>();
}

PascalLiteParser::ExprContext* PascalLiteParser::AddSubContext::expr(size_t i) {
  return getRuleContext<PascalLiteParser::ExprContext>(i);
}

PascalLiteParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }

void PascalLiteParser::AddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSub(this);
}
void PascalLiteParser::AddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSub(this);
}

std::any PascalLiteParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensContext ------------------------------------------------------------------

PascalLiteParser::ExprContext* PascalLiteParser::ParensContext::expr() {
  return getRuleContext<PascalLiteParser::ExprContext>(0);
}

PascalLiteParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }

void PascalLiteParser::ParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParens(this);
}
void PascalLiteParser::ParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParens(this);
}

std::any PascalLiteParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareContext ------------------------------------------------------------------

std::vector<PascalLiteParser::ExprContext *> PascalLiteParser::CompareContext::expr() {
  return getRuleContexts<PascalLiteParser::ExprContext>();
}

PascalLiteParser::ExprContext* PascalLiteParser::CompareContext::expr(size_t i) {
  return getRuleContext<PascalLiteParser::ExprContext>(i);
}

PascalLiteParser::CompareContext::CompareContext(ExprContext *ctx) { copyFrom(ctx); }

void PascalLiteParser::CompareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompare(this);
}
void PascalLiteParser::CompareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalLiteListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompare(this);
}

std::any PascalLiteParser::CompareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalLiteVisitor*>(visitor))
    return parserVisitor->visitCompare(this);
  else
    return visitor->visitChildren(this);
}

PascalLiteParser::ExprContext* PascalLiteParser::expr() {
   return expr(0);
}

PascalLiteParser::ExprContext* PascalLiteParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalLiteParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  PascalLiteParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, PascalLiteParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalLiteParser::INT: {
        _localctx = _tracker.createInstance<NumberContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(67);
        match(PascalLiteParser::INT);
        break;
      }

      case PascalLiteParser::ID: {
        _localctx = _tracker.createInstance<VariableContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(68);
        match(PascalLiteParser::ID);
        break;
      }

      case PascalLiteParser::T__3: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(69);
        match(PascalLiteParser::T__3);
        setState(70);
        expr(0);
        setState(71);
        match(PascalLiteParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(86);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(84);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(75);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(76);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PascalLiteParser::T__12

          || _la == PascalLiteParser::T__13)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(77);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(78);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(79);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PascalLiteParser::T__14

          || _la == PascalLiteParser::T__15)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(80);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<CompareContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(81);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(82);
          antlrcpp::downCast<CompareContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 917504) != 0))) {
            antlrcpp::downCast<CompareContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(83);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(88);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool PascalLiteParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PascalLiteParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void PascalLiteParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pascalliteParserInitialize();
#else
  ::antlr4::internal::call_once(pascalliteParserOnceFlag, pascalliteParserInitialize);
#endif
}
