
// Generated from C:/Users/j05kraus/Private/SWDevelop/mbtcreator/3rd/jkra_mobata_oss/libs/dslparser/dslparser/grammars/Irdl.g4 by ANTLR 4.7.2


#include "IrdlListener.h"

#include "IrdlParser.h"


using namespace antlrcpp;
using namespace antlr4;

IrdlParser::IrdlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

IrdlParser::~IrdlParser() {
  delete _interpreter;
}

std::string IrdlParser::getGrammarFileName() const {
  return "Irdl.g4";
}

const std::vector<std::string>& IrdlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& IrdlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TimerNameIDContext ------------------------------------------------------------------

IrdlParser::TimerNameIDContext::TimerNameIDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::ContextIDContext* IrdlParser::TimerNameIDContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}


size_t IrdlParser::TimerNameIDContext::getRuleIndex() const {
  return IrdlParser::RuleTimerNameID;
}

void IrdlParser::TimerNameIDContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimerNameID(this);
}

void IrdlParser::TimerNameIDContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimerNameID(this);
}

IrdlParser::TimerNameIDContext* IrdlParser::timerNameID() {
  TimerNameIDContext *_localctx = _tracker.createInstance<TimerNameIDContext>(_ctx, getState());
  enterRule(_localctx, 0, IrdlParser::RuleTimerNameID);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    contextID();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeAssignStatementContext ------------------------------------------------------------------

IrdlParser::AttributeAssignStatementContext::AttributeAssignStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IrdlParser::AttributeIdPathContext *> IrdlParser::AttributeAssignStatementContext::attributeIdPath() {
  return getRuleContexts<IrdlParser::AttributeIdPathContext>();
}

IrdlParser::AttributeIdPathContext* IrdlParser::AttributeAssignStatementContext::attributeIdPath(size_t i) {
  return getRuleContext<IrdlParser::AttributeIdPathContext>(i);
}

tree::TerminalNode* IrdlParser::AttributeAssignStatementContext::ASSIGN() {
  return getToken(IrdlParser::ASSIGN, 0);
}

tree::TerminalNode* IrdlParser::AttributeAssignStatementContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}

IrdlParser::LiteralValueContext* IrdlParser::AttributeAssignStatementContext::literalValue() {
  return getRuleContext<IrdlParser::LiteralValueContext>(0);
}

IrdlParser::SignalParamNameContext* IrdlParser::AttributeAssignStatementContext::signalParamName() {
  return getRuleContext<IrdlParser::SignalParamNameContext>(0);
}


size_t IrdlParser::AttributeAssignStatementContext::getRuleIndex() const {
  return IrdlParser::RuleAttributeAssignStatement;
}

void IrdlParser::AttributeAssignStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeAssignStatement(this);
}

void IrdlParser::AttributeAssignStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeAssignStatement(this);
}

IrdlParser::AttributeAssignStatementContext* IrdlParser::attributeAssignStatement() {
  AttributeAssignStatementContext *_localctx = _tracker.createInstance<AttributeAssignStatementContext>(_ctx, getState());
  enterRule(_localctx, 2, IrdlParser::RuleAttributeAssignStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    attributeIdPath();
    setState(167);
    match(IrdlParser::ASSIGN);
    setState(171);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(168);
      literalValue();
      break;
    }

    case 2: {
      setState(169);
      signalParamName();
      break;
    }

    case 3: {
      setState(170);
      attributeIdPath();
      break;
    }

    }
    setState(173);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

IrdlParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::LiteralValueContext* IrdlParser::AtomContext::literalValue() {
  return getRuleContext<IrdlParser::LiteralValueContext>(0);
}

IrdlParser::SignalParamNameContext* IrdlParser::AtomContext::signalParamName() {
  return getRuleContext<IrdlParser::SignalParamNameContext>(0);
}

tree::TerminalNode* IrdlParser::AtomContext::ThisID() {
  return getToken(IrdlParser::ThisID, 0);
}

tree::TerminalNode* IrdlParser::AtomContext::DOT() {
  return getToken(IrdlParser::DOT, 0);
}

IrdlParser::ContextIDContext* IrdlParser::AtomContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}

IrdlParser::AttributeIdPathContext* IrdlParser::AtomContext::attributeIdPath() {
  return getRuleContext<IrdlParser::AttributeIdPathContext>(0);
}

IrdlParser::TimerNameIDContext* IrdlParser::AtomContext::timerNameID() {
  return getRuleContext<IrdlParser::TimerNameIDContext>(0);
}

tree::TerminalNode* IrdlParser::AtomContext::TimeOutID() {
  return getToken(IrdlParser::TimeOutID, 0);
}

tree::TerminalNode* IrdlParser::AtomContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

tree::TerminalNode* IrdlParser::AtomContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}


size_t IrdlParser::AtomContext::getRuleIndex() const {
  return IrdlParser::RuleAtom;
}

void IrdlParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void IrdlParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

IrdlParser::AtomContext* IrdlParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 4, IrdlParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(187);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(175);
      literalValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(176);
      signalParamName();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(177);
      match(IrdlParser::ThisID);
      setState(178);
      match(IrdlParser::DOT);
      setState(179);
      contextID();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(180);
      attributeIdPath();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(181);
      timerNameID();
      setState(182);
      match(IrdlParser::DOT);
      setState(183);
      match(IrdlParser::TimeOutID);
      setState(184);
      match(IrdlParser::LPAREN);
      setState(185);
      match(IrdlParser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IrdlDeclContext ------------------------------------------------------------------

IrdlParser::IrdlDeclContext::IrdlDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::ImportPathDeclContext* IrdlParser::IrdlDeclContext::importPathDecl() {
  return getRuleContext<IrdlParser::ImportPathDeclContext>(0);
}

tree::TerminalNode* IrdlParser::IrdlDeclContext::RequirementID() {
  return getToken(IrdlParser::RequirementID, 0);
}

tree::TerminalNode* IrdlParser::IrdlDeclContext::LBRACE() {
  return getToken(IrdlParser::LBRACE, 0);
}

IrdlParser::RequirementBodyContext* IrdlParser::IrdlDeclContext::requirementBody() {
  return getRuleContext<IrdlParser::RequirementBodyContext>(0);
}

tree::TerminalNode* IrdlParser::IrdlDeclContext::RBRACE() {
  return getToken(IrdlParser::RBRACE, 0);
}


size_t IrdlParser::IrdlDeclContext::getRuleIndex() const {
  return IrdlParser::RuleIrdlDecl;
}

void IrdlParser::IrdlDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIrdlDecl(this);
}

void IrdlParser::IrdlDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIrdlDecl(this);
}

IrdlParser::IrdlDeclContext* IrdlParser::irdlDecl() {
  IrdlDeclContext *_localctx = _tracker.createInstance<IrdlDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, IrdlParser::RuleIrdlDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    importPathDecl();
    setState(190);
    match(IrdlParser::RequirementID);
    setState(191);
    match(IrdlParser::LBRACE);
    setState(192);
    requirementBody();
    setState(193);
    match(IrdlParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RequirementBodyContext ------------------------------------------------------------------

IrdlParser::RequirementBodyContext::RequirementBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::SequenceDeclContext* IrdlParser::RequirementBodyContext::sequenceDecl() {
  return getRuleContext<IrdlParser::SequenceDeclContext>(0);
}

tree::TerminalNode* IrdlParser::RequirementBodyContext::DeclarationID() {
  return getToken(IrdlParser::DeclarationID, 0);
}

tree::TerminalNode* IrdlParser::RequirementBodyContext::LBRACE() {
  return getToken(IrdlParser::LBRACE, 0);
}

IrdlParser::NameDeclContext* IrdlParser::RequirementBodyContext::nameDecl() {
  return getRuleContext<IrdlParser::NameDeclContext>(0);
}

IrdlParser::DeclarationsContext* IrdlParser::RequirementBodyContext::declarations() {
  return getRuleContext<IrdlParser::DeclarationsContext>(0);
}

tree::TerminalNode* IrdlParser::RequirementBodyContext::RBRACE() {
  return getToken(IrdlParser::RBRACE, 0);
}


size_t IrdlParser::RequirementBodyContext::getRuleIndex() const {
  return IrdlParser::RuleRequirementBody;
}

void IrdlParser::RequirementBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequirementBody(this);
}

void IrdlParser::RequirementBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequirementBody(this);
}

IrdlParser::RequirementBodyContext* IrdlParser::requirementBody() {
  RequirementBodyContext *_localctx = _tracker.createInstance<RequirementBodyContext>(_ctx, getState());
  enterRule(_localctx, 8, IrdlParser::RuleRequirementBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(IrdlParser::DeclarationID);
    setState(196);
    match(IrdlParser::LBRACE);
    setState(197);
    nameDecl();
    setState(198);
    declarations();
    setState(199);
    match(IrdlParser::RBRACE);
    setState(201);
    sequenceDecl();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasDefContext ------------------------------------------------------------------

IrdlParser::AliasDefContext::AliasDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::AliasDefContext::UseID() {
  return getToken(IrdlParser::UseID, 0);
}

tree::TerminalNode* IrdlParser::AliasDefContext::AsID() {
  return getToken(IrdlParser::AsID, 0);
}

IrdlParser::ContextIDContext* IrdlParser::AliasDefContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}

tree::TerminalNode* IrdlParser::AliasDefContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}

IrdlParser::ComponentIdPathContext* IrdlParser::AliasDefContext::componentIdPath() {
  return getRuleContext<IrdlParser::ComponentIdPathContext>(0);
}


size_t IrdlParser::AliasDefContext::getRuleIndex() const {
  return IrdlParser::RuleAliasDef;
}

void IrdlParser::AliasDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliasDef(this);
}

void IrdlParser::AliasDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliasDef(this);
}

IrdlParser::AliasDefContext* IrdlParser::aliasDef() {
  AliasDefContext *_localctx = _tracker.createInstance<AliasDefContext>(_ctx, getState());
  enterRule(_localctx, 10, IrdlParser::RuleAliasDef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    match(IrdlParser::UseID);

    setState(204);
    componentIdPath();
    setState(205);
    match(IrdlParser::AsID);
    setState(206);
    contextID();
    setState(207);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

IrdlParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::AttributeDeclContext* IrdlParser::DeclarationsContext::attributeDecl() {
  return getRuleContext<IrdlParser::AttributeDeclContext>(0);
}

IrdlParser::DeclarationsContext* IrdlParser::DeclarationsContext::declarations() {
  return getRuleContext<IrdlParser::DeclarationsContext>(0);
}

IrdlParser::TypeDefDeclContext* IrdlParser::DeclarationsContext::typeDefDecl() {
  return getRuleContext<IrdlParser::TypeDefDeclContext>(0);
}

IrdlParser::SignalDeclContext* IrdlParser::DeclarationsContext::signalDecl() {
  return getRuleContext<IrdlParser::SignalDeclContext>(0);
}

IrdlParser::AliasDefContext* IrdlParser::DeclarationsContext::aliasDef() {
  return getRuleContext<IrdlParser::AliasDefContext>(0);
}

IrdlParser::ComponentDeclContext* IrdlParser::DeclarationsContext::componentDecl() {
  return getRuleContext<IrdlParser::ComponentDeclContext>(0);
}

IrdlParser::ActorDeclContext* IrdlParser::DeclarationsContext::actorDecl() {
  return getRuleContext<IrdlParser::ActorDeclContext>(0);
}

IrdlParser::DescriptionDeclContext* IrdlParser::DeclarationsContext::descriptionDecl() {
  return getRuleContext<IrdlParser::DescriptionDeclContext>(0);
}


size_t IrdlParser::DeclarationsContext::getRuleIndex() const {
  return IrdlParser::RuleDeclarations;
}

void IrdlParser::DeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarations(this);
}

void IrdlParser::DeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarations(this);
}

IrdlParser::DeclarationsContext* IrdlParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 12, IrdlParser::RuleDeclarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(231);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::AttributeID: {
        enterOuterAlt(_localctx, 1);
        setState(209);
        attributeDecl();
        setState(210);
        declarations();
        break;
      }

      case IrdlParser::TypeID: {
        enterOuterAlt(_localctx, 2);
        setState(212);
        typeDefDecl();
        setState(213);
        declarations();
        break;
      }

      case IrdlParser::SignalID: {
        enterOuterAlt(_localctx, 3);
        setState(215);
        signalDecl();
        setState(216);
        declarations();
        break;
      }

      case IrdlParser::UseID: {
        enterOuterAlt(_localctx, 4);
        setState(218);
        aliasDef();
        setState(219);
        declarations();
        break;
      }

      case IrdlParser::ComponentID: {
        enterOuterAlt(_localctx, 5);
        setState(221);
        componentDecl();
        setState(222);
        declarations();
        break;
      }

      case IrdlParser::ActorID: {
        enterOuterAlt(_localctx, 6);
        setState(224);
        actorDecl();
        setState(225);
        declarations();
        break;
      }

      case IrdlParser::DescriptionID: {
        enterOuterAlt(_localctx, 7);
        setState(227);
        descriptionDecl();
        setState(228);
        declarations();
        break;
      }

      case IrdlParser::RBRACE: {
        enterOuterAlt(_localctx, 8);

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

//----------------- ComponentDeclContext ------------------------------------------------------------------

IrdlParser::ComponentDeclContext::ComponentDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::ComponentDeclContext::ComponentID() {
  return getToken(IrdlParser::ComponentID, 0);
}

tree::TerminalNode* IrdlParser::ComponentDeclContext::LBRACE() {
  return getToken(IrdlParser::LBRACE, 0);
}

IrdlParser::ComponentBodyContext* IrdlParser::ComponentDeclContext::componentBody() {
  return getRuleContext<IrdlParser::ComponentBodyContext>(0);
}

tree::TerminalNode* IrdlParser::ComponentDeclContext::RBRACE() {
  return getToken(IrdlParser::RBRACE, 0);
}


size_t IrdlParser::ComponentDeclContext::getRuleIndex() const {
  return IrdlParser::RuleComponentDecl;
}

void IrdlParser::ComponentDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponentDecl(this);
}

void IrdlParser::ComponentDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponentDecl(this);
}

IrdlParser::ComponentDeclContext* IrdlParser::componentDecl() {
  ComponentDeclContext *_localctx = _tracker.createInstance<ComponentDeclContext>(_ctx, getState());
  enterRule(_localctx, 14, IrdlParser::RuleComponentDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(IrdlParser::ComponentID);
    setState(234);
    match(IrdlParser::LBRACE);
    setState(235);
    componentBody();
    setState(236);
    match(IrdlParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentBodyContext ------------------------------------------------------------------

IrdlParser::ComponentBodyContext::ComponentBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::NameDeclContext* IrdlParser::ComponentBodyContext::nameDecl() {
  return getRuleContext<IrdlParser::NameDeclContext>(0);
}

IrdlParser::CommonDeclContext* IrdlParser::ComponentBodyContext::commonDecl() {
  return getRuleContext<IrdlParser::CommonDeclContext>(0);
}

IrdlParser::DescriptionDeclContext* IrdlParser::ComponentBodyContext::descriptionDecl() {
  return getRuleContext<IrdlParser::DescriptionDeclContext>(0);
}

std::vector<IrdlParser::PortDeclContext *> IrdlParser::ComponentBodyContext::portDecl() {
  return getRuleContexts<IrdlParser::PortDeclContext>();
}

IrdlParser::PortDeclContext* IrdlParser::ComponentBodyContext::portDecl(size_t i) {
  return getRuleContext<IrdlParser::PortDeclContext>(i);
}


size_t IrdlParser::ComponentBodyContext::getRuleIndex() const {
  return IrdlParser::RuleComponentBody;
}

void IrdlParser::ComponentBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponentBody(this);
}

void IrdlParser::ComponentBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponentBody(this);
}

IrdlParser::ComponentBodyContext* IrdlParser::componentBody() {
  ComponentBodyContext *_localctx = _tracker.createInstance<ComponentBodyContext>(_ctx, getState());
  enterRule(_localctx, 16, IrdlParser::RuleComponentBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    nameDecl();
    setState(241);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::DescriptionID: {
        setState(239);
        descriptionDecl();
        break;
      }

      case IrdlParser::TypeID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::PortID:
      case IrdlParser::RBRACE: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(243);
    commonDecl();
    setState(247);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IrdlParser::PortID) {
      setState(244);
      portDecl();
      setState(249);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActorDeclContext ------------------------------------------------------------------

IrdlParser::ActorDeclContext::ActorDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::ActorDeclContext::ActorID() {
  return getToken(IrdlParser::ActorID, 0);
}

tree::TerminalNode* IrdlParser::ActorDeclContext::LBRACE() {
  return getToken(IrdlParser::LBRACE, 0);
}

IrdlParser::ActorBodyContext* IrdlParser::ActorDeclContext::actorBody() {
  return getRuleContext<IrdlParser::ActorBodyContext>(0);
}

tree::TerminalNode* IrdlParser::ActorDeclContext::RBRACE() {
  return getToken(IrdlParser::RBRACE, 0);
}


size_t IrdlParser::ActorDeclContext::getRuleIndex() const {
  return IrdlParser::RuleActorDecl;
}

void IrdlParser::ActorDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActorDecl(this);
}

void IrdlParser::ActorDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActorDecl(this);
}

IrdlParser::ActorDeclContext* IrdlParser::actorDecl() {
  ActorDeclContext *_localctx = _tracker.createInstance<ActorDeclContext>(_ctx, getState());
  enterRule(_localctx, 18, IrdlParser::RuleActorDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(IrdlParser::ActorID);
    setState(251);
    match(IrdlParser::LBRACE);
    setState(252);
    actorBody();
    setState(253);
    match(IrdlParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActorBodyContext ------------------------------------------------------------------

IrdlParser::ActorBodyContext::ActorBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::NameDeclContext* IrdlParser::ActorBodyContext::nameDecl() {
  return getRuleContext<IrdlParser::NameDeclContext>(0);
}

IrdlParser::CommonDeclContext* IrdlParser::ActorBodyContext::commonDecl() {
  return getRuleContext<IrdlParser::CommonDeclContext>(0);
}

IrdlParser::DescriptionDeclContext* IrdlParser::ActorBodyContext::descriptionDecl() {
  return getRuleContext<IrdlParser::DescriptionDeclContext>(0);
}

std::vector<IrdlParser::PortDeclContext *> IrdlParser::ActorBodyContext::portDecl() {
  return getRuleContexts<IrdlParser::PortDeclContext>();
}

IrdlParser::PortDeclContext* IrdlParser::ActorBodyContext::portDecl(size_t i) {
  return getRuleContext<IrdlParser::PortDeclContext>(i);
}


size_t IrdlParser::ActorBodyContext::getRuleIndex() const {
  return IrdlParser::RuleActorBody;
}

void IrdlParser::ActorBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActorBody(this);
}

void IrdlParser::ActorBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActorBody(this);
}

IrdlParser::ActorBodyContext* IrdlParser::actorBody() {
  ActorBodyContext *_localctx = _tracker.createInstance<ActorBodyContext>(_ctx, getState());
  enterRule(_localctx, 20, IrdlParser::RuleActorBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    nameDecl();
    setState(258);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::DescriptionID: {
        setState(256);
        descriptionDecl();
        break;
      }

      case IrdlParser::TypeID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::PortID:
      case IrdlParser::RBRACE: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(260);
    commonDecl();
    setState(264);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IrdlParser::PortID) {
      setState(261);
      portDecl();
      setState(266);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DescriptionDeclContext ------------------------------------------------------------------

IrdlParser::DescriptionDeclContext::DescriptionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::DescriptionDeclContext::DescriptionID() {
  return getToken(IrdlParser::DescriptionID, 0);
}

tree::TerminalNode* IrdlParser::DescriptionDeclContext::COLON() {
  return getToken(IrdlParser::COLON, 0);
}

tree::TerminalNode* IrdlParser::DescriptionDeclContext::STRING() {
  return getToken(IrdlParser::STRING, 0);
}

tree::TerminalNode* IrdlParser::DescriptionDeclContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}


size_t IrdlParser::DescriptionDeclContext::getRuleIndex() const {
  return IrdlParser::RuleDescriptionDecl;
}

void IrdlParser::DescriptionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDescriptionDecl(this);
}

void IrdlParser::DescriptionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDescriptionDecl(this);
}

IrdlParser::DescriptionDeclContext* IrdlParser::descriptionDecl() {
  DescriptionDeclContext *_localctx = _tracker.createInstance<DescriptionDeclContext>(_ctx, getState());
  enterRule(_localctx, 22, IrdlParser::RuleDescriptionDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    match(IrdlParser::DescriptionID);
    setState(268);
    match(IrdlParser::COLON);
    setState(269);
    match(IrdlParser::STRING);
    setState(270);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SequenceDeclContext ------------------------------------------------------------------

IrdlParser::SequenceDeclContext::SequenceDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::StateDeclContext* IrdlParser::SequenceDeclContext::stateDecl() {
  return getRuleContext<IrdlParser::StateDeclContext>(0);
}

IrdlParser::SequenceDeclContext* IrdlParser::SequenceDeclContext::sequenceDecl() {
  return getRuleContext<IrdlParser::SequenceDeclContext>(0);
}

IrdlParser::MessageDeclContext* IrdlParser::SequenceDeclContext::messageDecl() {
  return getRuleContext<IrdlParser::MessageDeclContext>(0);
}

IrdlParser::CheckDeclContext* IrdlParser::SequenceDeclContext::checkDecl() {
  return getRuleContext<IrdlParser::CheckDeclContext>(0);
}

IrdlParser::AltDeclContext* IrdlParser::SequenceDeclContext::altDecl() {
  return getRuleContext<IrdlParser::AltDeclContext>(0);
}

IrdlParser::TimerDeclContext* IrdlParser::SequenceDeclContext::timerDecl() {
  return getRuleContext<IrdlParser::TimerDeclContext>(0);
}

IrdlParser::DurationDeclContext* IrdlParser::SequenceDeclContext::durationDecl() {
  return getRuleContext<IrdlParser::DurationDeclContext>(0);
}

IrdlParser::AttributeAssignStatementContext* IrdlParser::SequenceDeclContext::attributeAssignStatement() {
  return getRuleContext<IrdlParser::AttributeAssignStatementContext>(0);
}


size_t IrdlParser::SequenceDeclContext::getRuleIndex() const {
  return IrdlParser::RuleSequenceDecl;
}

void IrdlParser::SequenceDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSequenceDecl(this);
}

void IrdlParser::SequenceDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSequenceDecl(this);
}

IrdlParser::SequenceDeclContext* IrdlParser::sequenceDecl() {
  SequenceDeclContext *_localctx = _tracker.createInstance<SequenceDeclContext>(_ctx, getState());
  enterRule(_localctx, 24, IrdlParser::RuleSequenceDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(294);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::StateID: {
        enterOuterAlt(_localctx, 1);
        setState(272);
        stateDecl();
        setState(273);
        sequenceDecl();
        break;
      }

      case IrdlParser::MessageID: {
        enterOuterAlt(_localctx, 2);
        setState(275);
        messageDecl();
        setState(276);
        sequenceDecl();
        break;
      }

      case IrdlParser::CheckID: {
        enterOuterAlt(_localctx, 3);
        setState(278);
        checkDecl();
        setState(279);
        sequenceDecl();
        break;
      }

      case IrdlParser::AltID: {
        enterOuterAlt(_localctx, 4);
        setState(281);
        altDecl();
        setState(282);
        sequenceDecl();
        break;
      }

      case IrdlParser::TimerID: {
        enterOuterAlt(_localctx, 5);
        setState(284);
        timerDecl();
        setState(285);
        sequenceDecl();
        break;
      }

      case IrdlParser::DurationID: {
        enterOuterAlt(_localctx, 6);
        setState(287);
        durationDecl();
        setState(288);
        sequenceDecl();
        break;
      }

      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::ThisID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::ID: {
        enterOuterAlt(_localctx, 7);
        setState(290);
        attributeAssignStatement();
        setState(291);
        sequenceDecl();
        break;
      }

      case IrdlParser::RBRACE: {
        enterOuterAlt(_localctx, 8);

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

//----------------- StateDeclContext ------------------------------------------------------------------

IrdlParser::StateDeclContext::StateDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::StateDeclContext::StateID() {
  return getToken(IrdlParser::StateID, 0);
}

IrdlParser::ContextIDContext* IrdlParser::StateDeclContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}

tree::TerminalNode* IrdlParser::StateDeclContext::AtID() {
  return getToken(IrdlParser::AtID, 0);
}

IrdlParser::LifelineListContext* IrdlParser::StateDeclContext::lifelineList() {
  return getRuleContext<IrdlParser::LifelineListContext>(0);
}

tree::TerminalNode* IrdlParser::StateDeclContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}


size_t IrdlParser::StateDeclContext::getRuleIndex() const {
  return IrdlParser::RuleStateDecl;
}

void IrdlParser::StateDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStateDecl(this);
}

void IrdlParser::StateDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStateDecl(this);
}

IrdlParser::StateDeclContext* IrdlParser::stateDecl() {
  StateDeclContext *_localctx = _tracker.createInstance<StateDeclContext>(_ctx, getState());
  enterRule(_localctx, 26, IrdlParser::RuleStateDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    match(IrdlParser::StateID);
    setState(297);
    contextID();
    setState(298);
    match(IrdlParser::AtID);
    setState(299);
    lifelineList();
    setState(300);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LifelineListContext ------------------------------------------------------------------

IrdlParser::LifelineListContext::LifelineListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::LifelineListContext::AllID() {
  return getToken(IrdlParser::AllID, 0);
}

IrdlParser::ComponentIdPathContext* IrdlParser::LifelineListContext::componentIdPath() {
  return getRuleContext<IrdlParser::ComponentIdPathContext>(0);
}

IrdlParser::LifelineListOptionalContext* IrdlParser::LifelineListContext::lifelineListOptional() {
  return getRuleContext<IrdlParser::LifelineListOptionalContext>(0);
}


size_t IrdlParser::LifelineListContext::getRuleIndex() const {
  return IrdlParser::RuleLifelineList;
}

void IrdlParser::LifelineListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLifelineList(this);
}

void IrdlParser::LifelineListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLifelineList(this);
}

IrdlParser::LifelineListContext* IrdlParser::lifelineList() {
  LifelineListContext *_localctx = _tracker.createInstance<LifelineListContext>(_ctx, getState());
  enterRule(_localctx, 28, IrdlParser::RuleLifelineList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(306);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::AllID: {
        enterOuterAlt(_localctx, 1);
        setState(302);
        match(IrdlParser::AllID);
        break;
      }

      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(303);
        componentIdPath();
        setState(304);
        lifelineListOptional();
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

//----------------- LifelineListOptionalContext ------------------------------------------------------------------

IrdlParser::LifelineListOptionalContext::LifelineListOptionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::LifelineListOptionalContext::COMMA() {
  return getToken(IrdlParser::COMMA, 0);
}

IrdlParser::LifelineListContext* IrdlParser::LifelineListOptionalContext::lifelineList() {
  return getRuleContext<IrdlParser::LifelineListContext>(0);
}


size_t IrdlParser::LifelineListOptionalContext::getRuleIndex() const {
  return IrdlParser::RuleLifelineListOptional;
}

void IrdlParser::LifelineListOptionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLifelineListOptional(this);
}

void IrdlParser::LifelineListOptionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLifelineListOptional(this);
}

IrdlParser::LifelineListOptionalContext* IrdlParser::lifelineListOptional() {
  LifelineListOptionalContext *_localctx = _tracker.createInstance<LifelineListOptionalContext>(_ctx, getState());
  enterRule(_localctx, 30, IrdlParser::RuleLifelineListOptional);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(311);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(308);
        match(IrdlParser::COMMA);
        setState(309);
        lifelineList();
        break;
      }

      case IrdlParser::SEMI: {
        enterOuterAlt(_localctx, 2);

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

//----------------- MessageSignalContext ------------------------------------------------------------------

IrdlParser::MessageSignalContext::MessageSignalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::SignalIdPathContext* IrdlParser::MessageSignalContext::signalIdPath() {
  return getRuleContext<IrdlParser::SignalIdPathContext>(0);
}

tree::TerminalNode* IrdlParser::MessageSignalContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

tree::TerminalNode* IrdlParser::MessageSignalContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}

IrdlParser::MessageSignalBodyContext* IrdlParser::MessageSignalContext::messageSignalBody() {
  return getRuleContext<IrdlParser::MessageSignalBodyContext>(0);
}


size_t IrdlParser::MessageSignalContext::getRuleIndex() const {
  return IrdlParser::RuleMessageSignal;
}

void IrdlParser::MessageSignalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageSignal(this);
}

void IrdlParser::MessageSignalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageSignal(this);
}

IrdlParser::MessageSignalContext* IrdlParser::messageSignal() {
  MessageSignalContext *_localctx = _tracker.createInstance<MessageSignalContext>(_ctx, getState());
  enterRule(_localctx, 32, IrdlParser::RuleMessageSignal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    signalIdPath();
    setState(314);
    match(IrdlParser::LPAREN);
    setState(317);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::TriggerID:
      case IrdlParser::MessageTrigger:
      case IrdlParser::ThisID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::TrueID:
      case IrdlParser::FalseID:
      case IrdlParser::INT:
      case IrdlParser::REAL:
      case IrdlParser::STRING:
      case IrdlParser::ID:
      case IrdlParser::MULT: {
        setState(315);
        messageSignalBody();
        break;
      }

      case IrdlParser::RPAREN: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(319);
    match(IrdlParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageSignalBodyContext ------------------------------------------------------------------

IrdlParser::MessageSignalBodyContext::MessageSignalBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::MessageSignalBodyOptionalContext* IrdlParser::MessageSignalBodyContext::messageSignalBodyOptional() {
  return getRuleContext<IrdlParser::MessageSignalBodyOptionalContext>(0);
}

IrdlParser::LiteralValueContext* IrdlParser::MessageSignalBodyContext::literalValue() {
  return getRuleContext<IrdlParser::LiteralValueContext>(0);
}

IrdlParser::SignalParamNameContext* IrdlParser::MessageSignalBodyContext::signalParamName() {
  return getRuleContext<IrdlParser::SignalParamNameContext>(0);
}

IrdlParser::AttributeIdPathContext* IrdlParser::MessageSignalBodyContext::attributeIdPath() {
  return getRuleContext<IrdlParser::AttributeIdPathContext>(0);
}

tree::TerminalNode* IrdlParser::MessageSignalBodyContext::MULT() {
  return getToken(IrdlParser::MULT, 0);
}


size_t IrdlParser::MessageSignalBodyContext::getRuleIndex() const {
  return IrdlParser::RuleMessageSignalBody;
}

void IrdlParser::MessageSignalBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageSignalBody(this);
}

void IrdlParser::MessageSignalBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageSignalBody(this);
}

IrdlParser::MessageSignalBodyContext* IrdlParser::messageSignalBody() {
  MessageSignalBodyContext *_localctx = _tracker.createInstance<MessageSignalBodyContext>(_ctx, getState());
  enterRule(_localctx, 34, IrdlParser::RuleMessageSignalBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(321);
      literalValue();
      break;
    }

    case 2: {
      setState(322);
      signalParamName();
      break;
    }

    case 3: {
      setState(323);
      attributeIdPath();
      break;
    }

    case 4: {
      setState(324);
      match(IrdlParser::MULT);
      break;
    }

    }
    setState(327);
    messageSignalBodyOptional();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageSignalBodyOptionalContext ------------------------------------------------------------------

IrdlParser::MessageSignalBodyOptionalContext::MessageSignalBodyOptionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::MessageSignalBodyOptionalContext::COMMA() {
  return getToken(IrdlParser::COMMA, 0);
}

IrdlParser::MessageSignalBodyContext* IrdlParser::MessageSignalBodyOptionalContext::messageSignalBody() {
  return getRuleContext<IrdlParser::MessageSignalBodyContext>(0);
}


size_t IrdlParser::MessageSignalBodyOptionalContext::getRuleIndex() const {
  return IrdlParser::RuleMessageSignalBodyOptional;
}

void IrdlParser::MessageSignalBodyOptionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageSignalBodyOptional(this);
}

void IrdlParser::MessageSignalBodyOptionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageSignalBodyOptional(this);
}

IrdlParser::MessageSignalBodyOptionalContext* IrdlParser::messageSignalBodyOptional() {
  MessageSignalBodyOptionalContext *_localctx = _tracker.createInstance<MessageSignalBodyOptionalContext>(_ctx, getState());
  enterRule(_localctx, 36, IrdlParser::RuleMessageSignalBodyOptional);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(332);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(329);
        match(IrdlParser::COMMA);
        setState(330);
        messageSignalBody();
        break;
      }

      case IrdlParser::RPAREN: {
        enterOuterAlt(_localctx, 2);

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

//----------------- MessageDeclContext ------------------------------------------------------------------

IrdlParser::MessageDeclContext::MessageDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::MessageDeclContext::MessageID() {
  return getToken(IrdlParser::MessageID, 0);
}

tree::TerminalNode* IrdlParser::MessageDeclContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

std::vector<IrdlParser::ComponentIdPathContext *> IrdlParser::MessageDeclContext::componentIdPath() {
  return getRuleContexts<IrdlParser::ComponentIdPathContext>();
}

IrdlParser::ComponentIdPathContext* IrdlParser::MessageDeclContext::componentIdPath(size_t i) {
  return getRuleContext<IrdlParser::ComponentIdPathContext>(i);
}

tree::TerminalNode* IrdlParser::MessageDeclContext::RightArrow() {
  return getToken(IrdlParser::RightArrow, 0);
}

tree::TerminalNode* IrdlParser::MessageDeclContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}

tree::TerminalNode* IrdlParser::MessageDeclContext::COLON() {
  return getToken(IrdlParser::COLON, 0);
}

IrdlParser::MessageSignalContext* IrdlParser::MessageDeclContext::messageSignal() {
  return getRuleContext<IrdlParser::MessageSignalContext>(0);
}

tree::TerminalNode* IrdlParser::MessageDeclContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}


size_t IrdlParser::MessageDeclContext::getRuleIndex() const {
  return IrdlParser::RuleMessageDecl;
}

void IrdlParser::MessageDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageDecl(this);
}

void IrdlParser::MessageDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageDecl(this);
}

IrdlParser::MessageDeclContext* IrdlParser::messageDecl() {
  MessageDeclContext *_localctx = _tracker.createInstance<MessageDeclContext>(_ctx, getState());
  enterRule(_localctx, 38, IrdlParser::RuleMessageDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    match(IrdlParser::MessageID);
    setState(335);
    match(IrdlParser::LPAREN);
    setState(336);
    componentIdPath();
    setState(337);
    match(IrdlParser::RightArrow);
    setState(338);
    componentIdPath();
    setState(339);
    match(IrdlParser::RPAREN);
    setState(340);
    match(IrdlParser::COLON);
    setState(341);
    messageSignal();
    setState(342);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CheckDeclContext ------------------------------------------------------------------

IrdlParser::CheckDeclContext::CheckDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::CheckDeclContext::CheckID() {
  return getToken(IrdlParser::CheckID, 0);
}

tree::TerminalNode* IrdlParser::CheckDeclContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

std::vector<IrdlParser::ComponentIdPathContext *> IrdlParser::CheckDeclContext::componentIdPath() {
  return getRuleContexts<IrdlParser::ComponentIdPathContext>();
}

IrdlParser::ComponentIdPathContext* IrdlParser::CheckDeclContext::componentIdPath(size_t i) {
  return getRuleContext<IrdlParser::ComponentIdPathContext>(i);
}

tree::TerminalNode* IrdlParser::CheckDeclContext::RightArrow() {
  return getToken(IrdlParser::RightArrow, 0);
}

tree::TerminalNode* IrdlParser::CheckDeclContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}

tree::TerminalNode* IrdlParser::CheckDeclContext::COLON() {
  return getToken(IrdlParser::COLON, 0);
}

IrdlParser::CheckDeclBodyContext* IrdlParser::CheckDeclContext::checkDeclBody() {
  return getRuleContext<IrdlParser::CheckDeclBodyContext>(0);
}

IrdlParser::SignalIdPathContext* IrdlParser::CheckDeclContext::signalIdPath() {
  return getRuleContext<IrdlParser::SignalIdPathContext>(0);
}


size_t IrdlParser::CheckDeclContext::getRuleIndex() const {
  return IrdlParser::RuleCheckDecl;
}

void IrdlParser::CheckDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCheckDecl(this);
}

void IrdlParser::CheckDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCheckDecl(this);
}

IrdlParser::CheckDeclContext* IrdlParser::checkDecl() {
  CheckDeclContext *_localctx = _tracker.createInstance<CheckDeclContext>(_ctx, getState());
  enterRule(_localctx, 40, IrdlParser::RuleCheckDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    match(IrdlParser::CheckID);
    setState(345);
    match(IrdlParser::LPAREN);
    setState(346);
    componentIdPath();
    setState(347);
    match(IrdlParser::RightArrow);
    setState(348);
    componentIdPath();
    setState(349);
    match(IrdlParser::RPAREN);
    setState(350);
    match(IrdlParser::COLON);

    setState(351);
    signalIdPath();
    setState(352);
    checkDeclBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CheckDeclBodyContext ------------------------------------------------------------------

IrdlParser::CheckDeclBodyContext::CheckDeclBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::CheckDeclBodyContext::LBRACKET() {
  return getToken(IrdlParser::LBRACKET, 0);
}

IrdlParser::ExpressionContext* IrdlParser::CheckDeclBodyContext::expression() {
  return getRuleContext<IrdlParser::ExpressionContext>(0);
}

tree::TerminalNode* IrdlParser::CheckDeclBodyContext::RBRACKET() {
  return getToken(IrdlParser::RBRACKET, 0);
}

tree::TerminalNode* IrdlParser::CheckDeclBodyContext::COMMA() {
  return getToken(IrdlParser::COMMA, 0);
}

IrdlParser::TimeOutDeclContext* IrdlParser::CheckDeclBodyContext::timeOutDecl() {
  return getRuleContext<IrdlParser::TimeOutDeclContext>(0);
}

tree::TerminalNode* IrdlParser::CheckDeclBodyContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}


size_t IrdlParser::CheckDeclBodyContext::getRuleIndex() const {
  return IrdlParser::RuleCheckDeclBody;
}

void IrdlParser::CheckDeclBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCheckDeclBody(this);
}

void IrdlParser::CheckDeclBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCheckDeclBody(this);
}

IrdlParser::CheckDeclBodyContext* IrdlParser::checkDeclBody() {
  CheckDeclBodyContext *_localctx = _tracker.createInstance<CheckDeclBodyContext>(_ctx, getState());
  enterRule(_localctx, 42, IrdlParser::RuleCheckDeclBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(354);
    match(IrdlParser::LBRACKET);
    setState(355);
    expression();
    setState(356);
    match(IrdlParser::RBRACKET);
    setState(360);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::COMMA: {
        setState(357);
        match(IrdlParser::COMMA);
        setState(358);
        timeOutDecl();
        break;
      }

      case IrdlParser::SEMI: {
        setState(359);
        match(IrdlParser::SEMI);
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

//----------------- TimerDeclContext ------------------------------------------------------------------

IrdlParser::TimerDeclContext::TimerDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::TimerDeclContext::TimerID() {
  return getToken(IrdlParser::TimerID, 0);
}

tree::TerminalNode* IrdlParser::TimerDeclContext::AtID() {
  return getToken(IrdlParser::AtID, 0);
}

IrdlParser::ContextIDContext* IrdlParser::TimerDeclContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}

tree::TerminalNode* IrdlParser::TimerDeclContext::ASSIGN() {
  return getToken(IrdlParser::ASSIGN, 0);
}

tree::TerminalNode* IrdlParser::TimerDeclContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}

tree::TerminalNode* IrdlParser::TimerDeclContext::REAL() {
  return getToken(IrdlParser::REAL, 0);
}

tree::TerminalNode* IrdlParser::TimerDeclContext::INT() {
  return getToken(IrdlParser::INT, 0);
}

tree::TerminalNode* IrdlParser::TimerDeclContext::MilliSekID() {
  return getToken(IrdlParser::MilliSekID, 0);
}

tree::TerminalNode* IrdlParser::TimerDeclContext::SekID() {
  return getToken(IrdlParser::SekID, 0);
}

IrdlParser::ComponentIdPathContext* IrdlParser::TimerDeclContext::componentIdPath() {
  return getRuleContext<IrdlParser::ComponentIdPathContext>(0);
}


size_t IrdlParser::TimerDeclContext::getRuleIndex() const {
  return IrdlParser::RuleTimerDecl;
}

void IrdlParser::TimerDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimerDecl(this);
}

void IrdlParser::TimerDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimerDecl(this);
}

IrdlParser::TimerDeclContext* IrdlParser::timerDecl() {
  TimerDeclContext *_localctx = _tracker.createInstance<TimerDeclContext>(_ctx, getState());
  enterRule(_localctx, 44, IrdlParser::RuleTimerDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    match(IrdlParser::TimerID);
    setState(363);
    match(IrdlParser::AtID);

    setState(364);
    componentIdPath();
    setState(365);
    contextID();
    setState(366);
    match(IrdlParser::ASSIGN);
    setState(367);
    _la = _input->LA(1);
    if (!(_la == IrdlParser::INT

    || _la == IrdlParser::REAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(368);
    _la = _input->LA(1);
    if (!(_la == IrdlParser::MilliSekID

    || _la == IrdlParser::SekID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(369);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TimeOutDeclContext ------------------------------------------------------------------

IrdlParser::TimeOutDeclContext::TimeOutDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::TimeOutDeclContext::TimeOutID() {
  return getToken(IrdlParser::TimeOutID, 0);
}

tree::TerminalNode* IrdlParser::TimeOutDeclContext::COLON() {
  return getToken(IrdlParser::COLON, 0);
}

tree::TerminalNode* IrdlParser::TimeOutDeclContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}

tree::TerminalNode* IrdlParser::TimeOutDeclContext::REAL() {
  return getToken(IrdlParser::REAL, 0);
}

tree::TerminalNode* IrdlParser::TimeOutDeclContext::INT() {
  return getToken(IrdlParser::INT, 0);
}

tree::TerminalNode* IrdlParser::TimeOutDeclContext::MilliSekID() {
  return getToken(IrdlParser::MilliSekID, 0);
}

tree::TerminalNode* IrdlParser::TimeOutDeclContext::SekID() {
  return getToken(IrdlParser::SekID, 0);
}


size_t IrdlParser::TimeOutDeclContext::getRuleIndex() const {
  return IrdlParser::RuleTimeOutDecl;
}

void IrdlParser::TimeOutDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimeOutDecl(this);
}

void IrdlParser::TimeOutDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimeOutDecl(this);
}

IrdlParser::TimeOutDeclContext* IrdlParser::timeOutDecl() {
  TimeOutDeclContext *_localctx = _tracker.createInstance<TimeOutDeclContext>(_ctx, getState());
  enterRule(_localctx, 46, IrdlParser::RuleTimeOutDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    match(IrdlParser::TimeOutID);
    setState(372);
    match(IrdlParser::COLON);
    setState(373);
    _la = _input->LA(1);
    if (!(_la == IrdlParser::INT

    || _la == IrdlParser::REAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(374);
    _la = _input->LA(1);
    if (!(_la == IrdlParser::MilliSekID

    || _la == IrdlParser::SekID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(375);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AltDeclContext ------------------------------------------------------------------

IrdlParser::AltDeclContext::AltDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::AltDeclContext::AltID() {
  return getToken(IrdlParser::AltID, 0);
}

tree::TerminalNode* IrdlParser::AltDeclContext::LBRACE() {
  return getToken(IrdlParser::LBRACE, 0);
}

IrdlParser::AltBodyOptionalContext* IrdlParser::AltDeclContext::altBodyOptional() {
  return getRuleContext<IrdlParser::AltBodyOptionalContext>(0);
}

tree::TerminalNode* IrdlParser::AltDeclContext::RBRACE() {
  return getToken(IrdlParser::RBRACE, 0);
}


size_t IrdlParser::AltDeclContext::getRuleIndex() const {
  return IrdlParser::RuleAltDecl;
}

void IrdlParser::AltDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAltDecl(this);
}

void IrdlParser::AltDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAltDecl(this);
}

IrdlParser::AltDeclContext* IrdlParser::altDecl() {
  AltDeclContext *_localctx = _tracker.createInstance<AltDeclContext>(_ctx, getState());
  enterRule(_localctx, 48, IrdlParser::RuleAltDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    match(IrdlParser::AltID);
    setState(378);
    match(IrdlParser::LBRACE);
    setState(379);
    altBodyOptional();
    setState(380);
    match(IrdlParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AltBodyContext ------------------------------------------------------------------

IrdlParser::AltBodyContext::AltBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::AltBodyContext::LBRACKET() {
  return getToken(IrdlParser::LBRACKET, 0);
}

tree::TerminalNode* IrdlParser::AltBodyContext::RBRACKET() {
  return getToken(IrdlParser::RBRACKET, 0);
}

tree::TerminalNode* IrdlParser::AltBodyContext::LBRACE() {
  return getToken(IrdlParser::LBRACE, 0);
}

IrdlParser::SequenceDeclContext* IrdlParser::AltBodyContext::sequenceDecl() {
  return getRuleContext<IrdlParser::SequenceDeclContext>(0);
}

tree::TerminalNode* IrdlParser::AltBodyContext::RBRACE() {
  return getToken(IrdlParser::RBRACE, 0);
}

IrdlParser::ExpressionContext* IrdlParser::AltBodyContext::expression() {
  return getRuleContext<IrdlParser::ExpressionContext>(0);
}


size_t IrdlParser::AltBodyContext::getRuleIndex() const {
  return IrdlParser::RuleAltBody;
}

void IrdlParser::AltBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAltBody(this);
}

void IrdlParser::AltBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAltBody(this);
}

IrdlParser::AltBodyContext* IrdlParser::altBody() {
  AltBodyContext *_localctx = _tracker.createInstance<AltBodyContext>(_ctx, getState());
  enterRule(_localctx, 50, IrdlParser::RuleAltBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    match(IrdlParser::LBRACKET);
    setState(385);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::TriggerID:
      case IrdlParser::MessageTrigger:
      case IrdlParser::ThisID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::NotIdSymbol:
      case IrdlParser::NotIdWord:
      case IrdlParser::TrueID:
      case IrdlParser::FalseID:
      case IrdlParser::INT:
      case IrdlParser::REAL:
      case IrdlParser::STRING:
      case IrdlParser::ID:
      case IrdlParser::LPAREN:
      case IrdlParser::MINUS: {
        setState(383);
        expression();
        break;
      }

      case IrdlParser::RBRACKET: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(387);
    match(IrdlParser::RBRACKET);
    setState(388);
    match(IrdlParser::LBRACE);
    setState(389);
    sequenceDecl();
    setState(390);
    match(IrdlParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AltBodyOptionalContext ------------------------------------------------------------------

IrdlParser::AltBodyOptionalContext::AltBodyOptionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::AltBodyContext* IrdlParser::AltBodyOptionalContext::altBody() {
  return getRuleContext<IrdlParser::AltBodyContext>(0);
}

IrdlParser::AltBodyOptionalContext* IrdlParser::AltBodyOptionalContext::altBodyOptional() {
  return getRuleContext<IrdlParser::AltBodyOptionalContext>(0);
}


size_t IrdlParser::AltBodyOptionalContext::getRuleIndex() const {
  return IrdlParser::RuleAltBodyOptional;
}

void IrdlParser::AltBodyOptionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAltBodyOptional(this);
}

void IrdlParser::AltBodyOptionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAltBodyOptional(this);
}

IrdlParser::AltBodyOptionalContext* IrdlParser::altBodyOptional() {
  AltBodyOptionalContext *_localctx = _tracker.createInstance<AltBodyOptionalContext>(_ctx, getState());
  enterRule(_localctx, 52, IrdlParser::RuleAltBodyOptional);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(396);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::LBRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(392);
        altBody();
        setState(393);
        altBodyOptional();
        break;
      }

      case IrdlParser::RBRACE: {
        enterOuterAlt(_localctx, 2);

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

//----------------- DurationDeclContext ------------------------------------------------------------------

IrdlParser::DurationDeclContext::DurationDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::DurationDeclContext::DurationID() {
  return getToken(IrdlParser::DurationID, 0);
}

tree::TerminalNode* IrdlParser::DurationDeclContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

tree::TerminalNode* IrdlParser::DurationDeclContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}

tree::TerminalNode* IrdlParser::DurationDeclContext::LBRACE() {
  return getToken(IrdlParser::LBRACE, 0);
}

IrdlParser::SequenceDeclContext* IrdlParser::DurationDeclContext::sequenceDecl() {
  return getRuleContext<IrdlParser::SequenceDeclContext>(0);
}

tree::TerminalNode* IrdlParser::DurationDeclContext::RBRACE() {
  return getToken(IrdlParser::RBRACE, 0);
}

tree::TerminalNode* IrdlParser::DurationDeclContext::REAL() {
  return getToken(IrdlParser::REAL, 0);
}

tree::TerminalNode* IrdlParser::DurationDeclContext::INT() {
  return getToken(IrdlParser::INT, 0);
}

tree::TerminalNode* IrdlParser::DurationDeclContext::MilliSekID() {
  return getToken(IrdlParser::MilliSekID, 0);
}

tree::TerminalNode* IrdlParser::DurationDeclContext::SekID() {
  return getToken(IrdlParser::SekID, 0);
}


size_t IrdlParser::DurationDeclContext::getRuleIndex() const {
  return IrdlParser::RuleDurationDecl;
}

void IrdlParser::DurationDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDurationDecl(this);
}

void IrdlParser::DurationDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDurationDecl(this);
}

IrdlParser::DurationDeclContext* IrdlParser::durationDecl() {
  DurationDeclContext *_localctx = _tracker.createInstance<DurationDeclContext>(_ctx, getState());
  enterRule(_localctx, 54, IrdlParser::RuleDurationDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    match(IrdlParser::DurationID);
    setState(399);
    match(IrdlParser::LPAREN);
    setState(400);
    _la = _input->LA(1);
    if (!(_la == IrdlParser::INT

    || _la == IrdlParser::REAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(401);
    _la = _input->LA(1);
    if (!(_la == IrdlParser::MilliSekID

    || _la == IrdlParser::SekID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(402);
    match(IrdlParser::RPAREN);
    setState(403);
    match(IrdlParser::LBRACE);
    setState(404);
    sequenceDecl();
    setState(405);
    match(IrdlParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContextIDContext ------------------------------------------------------------------

IrdlParser::ContextIDContext::ContextIDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::ContextIDContext::ID() {
  return getToken(IrdlParser::ID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::NameID() {
  return getToken(IrdlParser::NameID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::LabelID() {
  return getToken(IrdlParser::LabelID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::EnabledID() {
  return getToken(IrdlParser::EnabledID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::TypeID() {
  return getToken(IrdlParser::TypeID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::AttributeID() {
  return getToken(IrdlParser::AttributeID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::SignalID() {
  return getToken(IrdlParser::SignalID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::ImportID() {
  return getToken(IrdlParser::ImportID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::FromID() {
  return getToken(IrdlParser::FromID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::ToID() {
  return getToken(IrdlParser::ToID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::SendID() {
  return getToken(IrdlParser::SendID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::DescriptionID() {
  return getToken(IrdlParser::DescriptionID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::ComponentID() {
  return getToken(IrdlParser::ComponentID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::AtID() {
  return getToken(IrdlParser::AtID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::TimeOutID() {
  return getToken(IrdlParser::TimeOutID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::MilliSekID() {
  return getToken(IrdlParser::MilliSekID, 0);
}

tree::TerminalNode* IrdlParser::ContextIDContext::SekID() {
  return getToken(IrdlParser::SekID, 0);
}


size_t IrdlParser::ContextIDContext::getRuleIndex() const {
  return IrdlParser::RuleContextID;
}

void IrdlParser::ContextIDContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContextID(this);
}

void IrdlParser::ContextIDContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContextID(this);
}

IrdlParser::ContextIDContext* IrdlParser::contextID() {
  ContextIDContext *_localctx = _tracker.createInstance<ContextIDContext>(_ctx, getState());
  enterRule(_localctx, 56, IrdlParser::RuleContextID);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(407);
    _la = _input->LA(1);
    if (!(((((_la - 3) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 3)) & ((1ULL << (IrdlParser::DescriptionID - 3))
      | (1ULL << (IrdlParser::ComponentID - 3))
      | (1ULL << (IrdlParser::AtID - 3))
      | (1ULL << (IrdlParser::TimeOutID - 3))
      | (1ULL << (IrdlParser::MilliSekID - 3))
      | (1ULL << (IrdlParser::SekID - 3))
      | (1ULL << (IrdlParser::NameID - 3))
      | (1ULL << (IrdlParser::LabelID - 3))
      | (1ULL << (IrdlParser::EnabledID - 3))
      | (1ULL << (IrdlParser::TypeID - 3))
      | (1ULL << (IrdlParser::AttributeID - 3))
      | (1ULL << (IrdlParser::SignalID - 3))
      | (1ULL << (IrdlParser::ImportID - 3))
      | (1ULL << (IrdlParser::FromID - 3))
      | (1ULL << (IrdlParser::ToID - 3))
      | (1ULL << (IrdlParser::SendID - 3))
      | (1ULL << (IrdlParser::ID - 3)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentIdPathContext ------------------------------------------------------------------

IrdlParser::ComponentIdPathContext::ComponentIdPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IrdlParser::ContextIDContext *> IrdlParser::ComponentIdPathContext::contextID() {
  return getRuleContexts<IrdlParser::ContextIDContext>();
}

IrdlParser::ContextIDContext* IrdlParser::ComponentIdPathContext::contextID(size_t i) {
  return getRuleContext<IrdlParser::ContextIDContext>(i);
}

std::vector<tree::TerminalNode *> IrdlParser::ComponentIdPathContext::DOT() {
  return getTokens(IrdlParser::DOT);
}

tree::TerminalNode* IrdlParser::ComponentIdPathContext::DOT(size_t i) {
  return getToken(IrdlParser::DOT, i);
}


size_t IrdlParser::ComponentIdPathContext::getRuleIndex() const {
  return IrdlParser::RuleComponentIdPath;
}

void IrdlParser::ComponentIdPathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponentIdPath(this);
}

void IrdlParser::ComponentIdPathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponentIdPath(this);
}

IrdlParser::ComponentIdPathContext* IrdlParser::componentIdPath() {
  ComponentIdPathContext *_localctx = _tracker.createInstance<ComponentIdPathContext>(_ctx, getState());
  enterRule(_localctx, 58, IrdlParser::RuleComponentIdPath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    contextID();
    setState(414);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IrdlParser::DOT) {
      setState(410);
      match(IrdlParser::DOT);
      setState(411);
      contextID();
      setState(416);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignalIdPathContext ------------------------------------------------------------------

IrdlParser::SignalIdPathContext::SignalIdPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IrdlParser::ContextIDContext *> IrdlParser::SignalIdPathContext::contextID() {
  return getRuleContexts<IrdlParser::ContextIDContext>();
}

IrdlParser::ContextIDContext* IrdlParser::SignalIdPathContext::contextID(size_t i) {
  return getRuleContext<IrdlParser::ContextIDContext>(i);
}

std::vector<tree::TerminalNode *> IrdlParser::SignalIdPathContext::DOT() {
  return getTokens(IrdlParser::DOT);
}

tree::TerminalNode* IrdlParser::SignalIdPathContext::DOT(size_t i) {
  return getToken(IrdlParser::DOT, i);
}


size_t IrdlParser::SignalIdPathContext::getRuleIndex() const {
  return IrdlParser::RuleSignalIdPath;
}

void IrdlParser::SignalIdPathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignalIdPath(this);
}

void IrdlParser::SignalIdPathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignalIdPath(this);
}

IrdlParser::SignalIdPathContext* IrdlParser::signalIdPath() {
  SignalIdPathContext *_localctx = _tracker.createInstance<SignalIdPathContext>(_ctx, getState());
  enterRule(_localctx, 60, IrdlParser::RuleSignalIdPath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    contextID();
    setState(422);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IrdlParser::DOT) {
      setState(418);
      match(IrdlParser::DOT);
      setState(419);
      contextID();
      setState(424);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeIdPathContext ------------------------------------------------------------------

IrdlParser::AttributeIdPathContext::AttributeIdPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::AttributeNameContext* IrdlParser::AttributeIdPathContext::attributeName() {
  return getRuleContext<IrdlParser::AttributeNameContext>(0);
}

std::vector<IrdlParser::ContextIDContext *> IrdlParser::AttributeIdPathContext::contextID() {
  return getRuleContexts<IrdlParser::ContextIDContext>();
}

IrdlParser::ContextIDContext* IrdlParser::AttributeIdPathContext::contextID(size_t i) {
  return getRuleContext<IrdlParser::ContextIDContext>(i);
}

std::vector<tree::TerminalNode *> IrdlParser::AttributeIdPathContext::DOT() {
  return getTokens(IrdlParser::DOT);
}

tree::TerminalNode* IrdlParser::AttributeIdPathContext::DOT(size_t i) {
  return getToken(IrdlParser::DOT, i);
}


size_t IrdlParser::AttributeIdPathContext::getRuleIndex() const {
  return IrdlParser::RuleAttributeIdPath;
}

void IrdlParser::AttributeIdPathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeIdPath(this);
}

void IrdlParser::AttributeIdPathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeIdPath(this);
}

IrdlParser::AttributeIdPathContext* IrdlParser::attributeIdPath() {
  AttributeIdPathContext *_localctx = _tracker.createInstance<AttributeIdPathContext>(_ctx, getState());
  enterRule(_localctx, 62, IrdlParser::RuleAttributeIdPath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(434);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(425);
      attributeName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(426);
      contextID();
      setState(431);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IrdlParser::DOT) {
        setState(427);
        match(IrdlParser::DOT);
        setState(428);
        contextID();
        setState(433);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignalSendContext ------------------------------------------------------------------

IrdlParser::SignalSendContext::SignalSendContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::SignalIdPathContext* IrdlParser::SignalSendContext::signalIdPath() {
  return getRuleContext<IrdlParser::SignalIdPathContext>(0);
}

tree::TerminalNode* IrdlParser::SignalSendContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

IrdlParser::FunctionCallBodyContext* IrdlParser::SignalSendContext::functionCallBody() {
  return getRuleContext<IrdlParser::FunctionCallBodyContext>(0);
}

tree::TerminalNode* IrdlParser::SignalSendContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}


size_t IrdlParser::SignalSendContext::getRuleIndex() const {
  return IrdlParser::RuleSignalSend;
}

void IrdlParser::SignalSendContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignalSend(this);
}

void IrdlParser::SignalSendContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignalSend(this);
}

IrdlParser::SignalSendContext* IrdlParser::signalSend() {
  SignalSendContext *_localctx = _tracker.createInstance<SignalSendContext>(_ctx, getState());
  enterRule(_localctx, 64, IrdlParser::RuleSignalSend);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    signalIdPath();
    setState(437);
    match(IrdlParser::LPAREN);
    setState(438);
    functionCallBody();
    setState(439);
    match(IrdlParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommonDeclContext ------------------------------------------------------------------

IrdlParser::CommonDeclContext::CommonDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IrdlParser::TypeDefDeclContext *> IrdlParser::CommonDeclContext::typeDefDecl() {
  return getRuleContexts<IrdlParser::TypeDefDeclContext>();
}

IrdlParser::TypeDefDeclContext* IrdlParser::CommonDeclContext::typeDefDecl(size_t i) {
  return getRuleContext<IrdlParser::TypeDefDeclContext>(i);
}

std::vector<IrdlParser::AttributeDeclContext *> IrdlParser::CommonDeclContext::attributeDecl() {
  return getRuleContexts<IrdlParser::AttributeDeclContext>();
}

IrdlParser::AttributeDeclContext* IrdlParser::CommonDeclContext::attributeDecl(size_t i) {
  return getRuleContext<IrdlParser::AttributeDeclContext>(i);
}

std::vector<IrdlParser::SignalDeclContext *> IrdlParser::CommonDeclContext::signalDecl() {
  return getRuleContexts<IrdlParser::SignalDeclContext>();
}

IrdlParser::SignalDeclContext* IrdlParser::CommonDeclContext::signalDecl(size_t i) {
  return getRuleContext<IrdlParser::SignalDeclContext>(i);
}


size_t IrdlParser::CommonDeclContext::getRuleIndex() const {
  return IrdlParser::RuleCommonDecl;
}

void IrdlParser::CommonDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommonDecl(this);
}

void IrdlParser::CommonDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommonDecl(this);
}

IrdlParser::CommonDeclContext* IrdlParser::commonDecl() {
  CommonDeclContext *_localctx = _tracker.createInstance<CommonDeclContext>(_ctx, getState());
  enterRule(_localctx, 66, IrdlParser::RuleCommonDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(446);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IrdlParser::TypeID)
      | (1ULL << IrdlParser::AttributeID)
      | (1ULL << IrdlParser::SignalID))) != 0)) {
      setState(444);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IrdlParser::TypeID: {
          setState(441);
          typeDefDecl();
          break;
        }

        case IrdlParser::AttributeID: {
          setState(442);
          attributeDecl();
          break;
        }

        case IrdlParser::SignalID: {
          setState(443);
          signalDecl();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(448);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportPathDeclContext ------------------------------------------------------------------

IrdlParser::ImportPathDeclContext::ImportPathDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::ImportPathBodyContext* IrdlParser::ImportPathDeclContext::importPathBody() {
  return getRuleContext<IrdlParser::ImportPathBodyContext>(0);
}

IrdlParser::ImportPathDeclContext* IrdlParser::ImportPathDeclContext::importPathDecl() {
  return getRuleContext<IrdlParser::ImportPathDeclContext>(0);
}


size_t IrdlParser::ImportPathDeclContext::getRuleIndex() const {
  return IrdlParser::RuleImportPathDecl;
}

void IrdlParser::ImportPathDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportPathDecl(this);
}

void IrdlParser::ImportPathDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportPathDecl(this);
}

IrdlParser::ImportPathDeclContext* IrdlParser::importPathDecl() {
  ImportPathDeclContext *_localctx = _tracker.createInstance<ImportPathDeclContext>(_ctx, getState());
  enterRule(_localctx, 68, IrdlParser::RuleImportPathDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(453);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::ImportID: {
        enterOuterAlt(_localctx, 1);
        setState(449);
        importPathBody();
        setState(450);
        importPathDecl();
        break;
      }

      case IrdlParser::RequirementID: {
        enterOuterAlt(_localctx, 2);

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

//----------------- ImportPathBodyContext ------------------------------------------------------------------

IrdlParser::ImportPathBodyContext::ImportPathBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::ImportPathBodyContext::ImportID() {
  return getToken(IrdlParser::ImportID, 0);
}

tree::TerminalNode* IrdlParser::ImportPathBodyContext::LESSTHAN() {
  return getToken(IrdlParser::LESSTHAN, 0);
}

IrdlParser::ImportFileBodyContext* IrdlParser::ImportPathBodyContext::importFileBody() {
  return getRuleContext<IrdlParser::ImportFileBodyContext>(0);
}

tree::TerminalNode* IrdlParser::ImportPathBodyContext::GREATERTHAN() {
  return getToken(IrdlParser::GREATERTHAN, 0);
}

IrdlParser::ImportAsContext* IrdlParser::ImportPathBodyContext::importAs() {
  return getRuleContext<IrdlParser::ImportAsContext>(0);
}


size_t IrdlParser::ImportPathBodyContext::getRuleIndex() const {
  return IrdlParser::RuleImportPathBody;
}

void IrdlParser::ImportPathBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportPathBody(this);
}

void IrdlParser::ImportPathBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportPathBody(this);
}

IrdlParser::ImportPathBodyContext* IrdlParser::importPathBody() {
  ImportPathBodyContext *_localctx = _tracker.createInstance<ImportPathBodyContext>(_ctx, getState());
  enterRule(_localctx, 70, IrdlParser::RuleImportPathBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(IrdlParser::ImportID);
    setState(456);
    match(IrdlParser::LESSTHAN);
    setState(457);
    importFileBody();
    setState(458);
    match(IrdlParser::GREATERTHAN);
    setState(459);
    importAs();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportFileBodyContext ------------------------------------------------------------------

IrdlParser::ImportFileBodyContext::ImportFileBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IrdlParser::ContextIDContext *> IrdlParser::ImportFileBodyContext::contextID() {
  return getRuleContexts<IrdlParser::ContextIDContext>();
}

IrdlParser::ContextIDContext* IrdlParser::ImportFileBodyContext::contextID(size_t i) {
  return getRuleContext<IrdlParser::ContextIDContext>(i);
}

tree::TerminalNode* IrdlParser::ImportFileBodyContext::DOT() {
  return getToken(IrdlParser::DOT, 0);
}

tree::TerminalNode* IrdlParser::ImportFileBodyContext::RANGE() {
  return getToken(IrdlParser::RANGE, 0);
}

tree::TerminalNode* IrdlParser::ImportFileBodyContext::DIV() {
  return getToken(IrdlParser::DIV, 0);
}

IrdlParser::ImportFileBodyContext* IrdlParser::ImportFileBodyContext::importFileBody() {
  return getRuleContext<IrdlParser::ImportFileBodyContext>(0);
}


size_t IrdlParser::ImportFileBodyContext::getRuleIndex() const {
  return IrdlParser::RuleImportFileBody;
}

void IrdlParser::ImportFileBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportFileBody(this);
}

void IrdlParser::ImportFileBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportFileBody(this);
}

IrdlParser::ImportFileBodyContext* IrdlParser::importFileBody() {
  ImportFileBodyContext *_localctx = _tracker.createInstance<ImportFileBodyContext>(_ctx, getState());
  enterRule(_localctx, 72, IrdlParser::RuleImportFileBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(472);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(461);
      contextID();
      setState(462);
      match(IrdlParser::DOT);
      setState(463);
      contextID();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(465);
      match(IrdlParser::RANGE);
      setState(466);
      match(IrdlParser::DIV);
      setState(467);
      importFileBody();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(468);
      contextID();
      setState(469);
      match(IrdlParser::DIV);
      setState(470);
      importFileBody();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportAsContext ------------------------------------------------------------------

IrdlParser::ImportAsContext::ImportAsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::ImportAsContext::AsID() {
  return getToken(IrdlParser::AsID, 0);
}

IrdlParser::ContextIDContext* IrdlParser::ImportAsContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}


size_t IrdlParser::ImportAsContext::getRuleIndex() const {
  return IrdlParser::RuleImportAs;
}

void IrdlParser::ImportAsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportAs(this);
}

void IrdlParser::ImportAsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportAs(this);
}

IrdlParser::ImportAsContext* IrdlParser::importAs() {
  ImportAsContext *_localctx = _tracker.createInstance<ImportAsContext>(_ctx, getState());
  enterRule(_localctx, 74, IrdlParser::RuleImportAs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(477);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::AsID: {
        enterOuterAlt(_localctx, 1);
        setState(474);
        match(IrdlParser::AsID);
        setState(475);
        contextID();
        break;
      }

      case IrdlParser::RequirementID:
      case IrdlParser::ImportID: {
        enterOuterAlt(_localctx, 2);

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

//----------------- TypeDefDeclContext ------------------------------------------------------------------

IrdlParser::TypeDefDeclContext::TypeDefDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::TypeDefDeclContext::TypeID() {
  return getToken(IrdlParser::TypeID, 0);
}

IrdlParser::TypeDeclContext* IrdlParser::TypeDefDeclContext::typeDecl() {
  return getRuleContext<IrdlParser::TypeDeclContext>(0);
}

IrdlParser::ContextIDContext* IrdlParser::TypeDefDeclContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}

tree::TerminalNode* IrdlParser::TypeDefDeclContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}


size_t IrdlParser::TypeDefDeclContext::getRuleIndex() const {
  return IrdlParser::RuleTypeDefDecl;
}

void IrdlParser::TypeDefDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDefDecl(this);
}

void IrdlParser::TypeDefDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDefDecl(this);
}

IrdlParser::TypeDefDeclContext* IrdlParser::typeDefDecl() {
  TypeDefDeclContext *_localctx = _tracker.createInstance<TypeDefDeclContext>(_ctx, getState());
  enterRule(_localctx, 76, IrdlParser::RuleTypeDefDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    match(IrdlParser::TypeID);
    setState(480);
    typeDecl();
    setState(481);
    contextID();
    setState(482);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclContext ------------------------------------------------------------------

IrdlParser::TypeDeclContext::TypeDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::IntTypeDeclContext* IrdlParser::TypeDeclContext::intTypeDecl() {
  return getRuleContext<IrdlParser::IntTypeDeclContext>(0);
}

IrdlParser::RealTypeDeclContext* IrdlParser::TypeDeclContext::realTypeDecl() {
  return getRuleContext<IrdlParser::RealTypeDeclContext>(0);
}

IrdlParser::EnumTypeDeclContext* IrdlParser::TypeDeclContext::enumTypeDecl() {
  return getRuleContext<IrdlParser::EnumTypeDeclContext>(0);
}

tree::TerminalNode* IrdlParser::TypeDeclContext::BoolID() {
  return getToken(IrdlParser::BoolID, 0);
}

tree::TerminalNode* IrdlParser::TypeDeclContext::StringID() {
  return getToken(IrdlParser::StringID, 0);
}

IrdlParser::ContextIDContext* IrdlParser::TypeDeclContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}


size_t IrdlParser::TypeDeclContext::getRuleIndex() const {
  return IrdlParser::RuleTypeDecl;
}

void IrdlParser::TypeDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDecl(this);
}

void IrdlParser::TypeDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDecl(this);
}

IrdlParser::TypeDeclContext* IrdlParser::typeDecl() {
  TypeDeclContext *_localctx = _tracker.createInstance<TypeDeclContext>(_ctx, getState());
  enterRule(_localctx, 78, IrdlParser::RuleTypeDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(490);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::IntID: {
        enterOuterAlt(_localctx, 1);
        setState(484);
        intTypeDecl();
        break;
      }

      case IrdlParser::RealID: {
        enterOuterAlt(_localctx, 2);
        setState(485);
        realTypeDecl();
        break;
      }

      case IrdlParser::EnumID: {
        enterOuterAlt(_localctx, 3);
        setState(486);
        enumTypeDecl();
        break;
      }

      case IrdlParser::BoolID: {
        enterOuterAlt(_localctx, 4);
        setState(487);
        match(IrdlParser::BoolID);
        break;
      }

      case IrdlParser::StringID: {
        enterOuterAlt(_localctx, 5);
        setState(488);
        match(IrdlParser::StringID);
        break;
      }

      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::ID: {
        enterOuterAlt(_localctx, 6);
        setState(489);
        contextID();
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

//----------------- IntTypeDeclContext ------------------------------------------------------------------

IrdlParser::IntTypeDeclContext::IntTypeDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::IntTypeDeclContext::IntID() {
  return getToken(IrdlParser::IntID, 0);
}

tree::TerminalNode* IrdlParser::IntTypeDeclContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> IrdlParser::IntTypeDeclContext::INT() {
  return getTokens(IrdlParser::INT);
}

tree::TerminalNode* IrdlParser::IntTypeDeclContext::INT(size_t i) {
  return getToken(IrdlParser::INT, i);
}

tree::TerminalNode* IrdlParser::IntTypeDeclContext::RANGE() {
  return getToken(IrdlParser::RANGE, 0);
}

tree::TerminalNode* IrdlParser::IntTypeDeclContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}


size_t IrdlParser::IntTypeDeclContext::getRuleIndex() const {
  return IrdlParser::RuleIntTypeDecl;
}

void IrdlParser::IntTypeDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntTypeDecl(this);
}

void IrdlParser::IntTypeDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntTypeDecl(this);
}

IrdlParser::IntTypeDeclContext* IrdlParser::intTypeDecl() {
  IntTypeDeclContext *_localctx = _tracker.createInstance<IntTypeDeclContext>(_ctx, getState());
  enterRule(_localctx, 80, IrdlParser::RuleIntTypeDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(492);
    match(IrdlParser::IntID);
    setState(499);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::LPAREN: {
        setState(493);
        match(IrdlParser::LPAREN);
        setState(494);
        match(IrdlParser::INT);
        setState(495);
        match(IrdlParser::RANGE);
        setState(496);
        match(IrdlParser::INT);
        setState(497);
        match(IrdlParser::RPAREN);
        break;
      }

      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::ID: {
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

//----------------- RealTypeDeclContext ------------------------------------------------------------------

IrdlParser::RealTypeDeclContext::RealTypeDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::RealTypeDeclContext::RealID() {
  return getToken(IrdlParser::RealID, 0);
}

tree::TerminalNode* IrdlParser::RealTypeDeclContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> IrdlParser::RealTypeDeclContext::REAL() {
  return getTokens(IrdlParser::REAL);
}

tree::TerminalNode* IrdlParser::RealTypeDeclContext::REAL(size_t i) {
  return getToken(IrdlParser::REAL, i);
}

tree::TerminalNode* IrdlParser::RealTypeDeclContext::RANGE() {
  return getToken(IrdlParser::RANGE, 0);
}

tree::TerminalNode* IrdlParser::RealTypeDeclContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}


size_t IrdlParser::RealTypeDeclContext::getRuleIndex() const {
  return IrdlParser::RuleRealTypeDecl;
}

void IrdlParser::RealTypeDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRealTypeDecl(this);
}

void IrdlParser::RealTypeDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRealTypeDecl(this);
}

IrdlParser::RealTypeDeclContext* IrdlParser::realTypeDecl() {
  RealTypeDeclContext *_localctx = _tracker.createInstance<RealTypeDeclContext>(_ctx, getState());
  enterRule(_localctx, 82, IrdlParser::RuleRealTypeDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(501);
    match(IrdlParser::RealID);
    setState(508);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::LPAREN: {
        setState(502);
        match(IrdlParser::LPAREN);
        setState(503);
        match(IrdlParser::REAL);
        setState(504);
        match(IrdlParser::RANGE);
        setState(505);
        match(IrdlParser::REAL);
        setState(506);
        match(IrdlParser::RPAREN);
        break;
      }

      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::ID: {
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

//----------------- EnumTypeDeclContext ------------------------------------------------------------------

IrdlParser::EnumTypeDeclContext::EnumTypeDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::EnumTypeDeclContext::EnumID() {
  return getToken(IrdlParser::EnumID, 0);
}

tree::TerminalNode* IrdlParser::EnumTypeDeclContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

std::vector<IrdlParser::ContextIDContext *> IrdlParser::EnumTypeDeclContext::contextID() {
  return getRuleContexts<IrdlParser::ContextIDContext>();
}

IrdlParser::ContextIDContext* IrdlParser::EnumTypeDeclContext::contextID(size_t i) {
  return getRuleContext<IrdlParser::ContextIDContext>(i);
}

tree::TerminalNode* IrdlParser::EnumTypeDeclContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> IrdlParser::EnumTypeDeclContext::COMMA() {
  return getTokens(IrdlParser::COMMA);
}

tree::TerminalNode* IrdlParser::EnumTypeDeclContext::COMMA(size_t i) {
  return getToken(IrdlParser::COMMA, i);
}


size_t IrdlParser::EnumTypeDeclContext::getRuleIndex() const {
  return IrdlParser::RuleEnumTypeDecl;
}

void IrdlParser::EnumTypeDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumTypeDecl(this);
}

void IrdlParser::EnumTypeDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumTypeDecl(this);
}

IrdlParser::EnumTypeDeclContext* IrdlParser::enumTypeDecl() {
  EnumTypeDeclContext *_localctx = _tracker.createInstance<EnumTypeDeclContext>(_ctx, getState());
  enterRule(_localctx, 84, IrdlParser::RuleEnumTypeDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(510);
    match(IrdlParser::EnumID);
    setState(511);
    match(IrdlParser::LPAREN);
    setState(512);
    contextID();
    setState(517);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IrdlParser::COMMA) {
      setState(513);
      match(IrdlParser::COMMA);
      setState(514);
      contextID();
      setState(519);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(520);
    match(IrdlParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeDeclContext ------------------------------------------------------------------

IrdlParser::AttributeDeclContext::AttributeDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::AttributeDeclContext::AttributeID() {
  return getToken(IrdlParser::AttributeID, 0);
}

IrdlParser::TypeDeclContext* IrdlParser::AttributeDeclContext::typeDecl() {
  return getRuleContext<IrdlParser::TypeDeclContext>(0);
}

IrdlParser::ContextIDContext* IrdlParser::AttributeDeclContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}

tree::TerminalNode* IrdlParser::AttributeDeclContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}

tree::TerminalNode* IrdlParser::AttributeDeclContext::ASSIGN() {
  return getToken(IrdlParser::ASSIGN, 0);
}

IrdlParser::LiteralValueContext* IrdlParser::AttributeDeclContext::literalValue() {
  return getRuleContext<IrdlParser::LiteralValueContext>(0);
}


size_t IrdlParser::AttributeDeclContext::getRuleIndex() const {
  return IrdlParser::RuleAttributeDecl;
}

void IrdlParser::AttributeDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeDecl(this);
}

void IrdlParser::AttributeDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeDecl(this);
}

IrdlParser::AttributeDeclContext* IrdlParser::attributeDecl() {
  AttributeDeclContext *_localctx = _tracker.createInstance<AttributeDeclContext>(_ctx, getState());
  enterRule(_localctx, 86, IrdlParser::RuleAttributeDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(522);
    match(IrdlParser::AttributeID);
    setState(523);
    typeDecl();
    setState(524);
    contextID();
    setState(527);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IrdlParser::ASSIGN) {
      setState(525);
      match(IrdlParser::ASSIGN);
      setState(526);
      literalValue();
    }
    setState(529);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralValueContext ------------------------------------------------------------------

IrdlParser::LiteralValueContext::LiteralValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::LiteralValueContext::INT() {
  return getToken(IrdlParser::INT, 0);
}

tree::TerminalNode* IrdlParser::LiteralValueContext::REAL() {
  return getToken(IrdlParser::REAL, 0);
}

tree::TerminalNode* IrdlParser::LiteralValueContext::STRING() {
  return getToken(IrdlParser::STRING, 0);
}

tree::TerminalNode* IrdlParser::LiteralValueContext::TrueID() {
  return getToken(IrdlParser::TrueID, 0);
}

tree::TerminalNode* IrdlParser::LiteralValueContext::FalseID() {
  return getToken(IrdlParser::FalseID, 0);
}

IrdlParser::ContextIDContext* IrdlParser::LiteralValueContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}


size_t IrdlParser::LiteralValueContext::getRuleIndex() const {
  return IrdlParser::RuleLiteralValue;
}

void IrdlParser::LiteralValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralValue(this);
}

void IrdlParser::LiteralValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralValue(this);
}

IrdlParser::LiteralValueContext* IrdlParser::literalValue() {
  LiteralValueContext *_localctx = _tracker.createInstance<LiteralValueContext>(_ctx, getState());
  enterRule(_localctx, 88, IrdlParser::RuleLiteralValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(537);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(531);
        match(IrdlParser::INT);
        break;
      }

      case IrdlParser::REAL: {
        enterOuterAlt(_localctx, 2);
        setState(532);
        match(IrdlParser::REAL);
        break;
      }

      case IrdlParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(533);
        match(IrdlParser::STRING);
        break;
      }

      case IrdlParser::TrueID: {
        enterOuterAlt(_localctx, 4);
        setState(534);
        match(IrdlParser::TrueID);
        break;
      }

      case IrdlParser::FalseID: {
        enterOuterAlt(_localctx, 5);
        setState(535);
        match(IrdlParser::FalseID);
        break;
      }

      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::ID: {
        enterOuterAlt(_localctx, 6);
        setState(536);
        contextID();
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

//----------------- SignalParamNameContext ------------------------------------------------------------------

IrdlParser::SignalParamNameContext::SignalParamNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::TriggerDeclContext* IrdlParser::SignalParamNameContext::triggerDecl() {
  return getRuleContext<IrdlParser::TriggerDeclContext>(0);
}

IrdlParser::ContextIDContext* IrdlParser::SignalParamNameContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}


size_t IrdlParser::SignalParamNameContext::getRuleIndex() const {
  return IrdlParser::RuleSignalParamName;
}

void IrdlParser::SignalParamNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignalParamName(this);
}

void IrdlParser::SignalParamNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignalParamName(this);
}

IrdlParser::SignalParamNameContext* IrdlParser::signalParamName() {
  SignalParamNameContext *_localctx = _tracker.createInstance<SignalParamNameContext>(_ctx, getState());
  enterRule(_localctx, 90, IrdlParser::RuleSignalParamName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(539);
    triggerDecl();
    setState(540);
    contextID();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeNameContext ------------------------------------------------------------------

IrdlParser::AttributeNameContext::AttributeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::ContextIDContext* IrdlParser::AttributeNameContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}

IrdlParser::ThisDeclContext* IrdlParser::AttributeNameContext::thisDecl() {
  return getRuleContext<IrdlParser::ThisDeclContext>(0);
}


size_t IrdlParser::AttributeNameContext::getRuleIndex() const {
  return IrdlParser::RuleAttributeName;
}

void IrdlParser::AttributeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeName(this);
}

void IrdlParser::AttributeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeName(this);
}

IrdlParser::AttributeNameContext* IrdlParser::attributeName() {
  AttributeNameContext *_localctx = _tracker.createInstance<AttributeNameContext>(_ctx, getState());
  enterRule(_localctx, 92, IrdlParser::RuleAttributeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(544);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::ThisID: {
        setState(542);
        thisDecl();
        break;
      }

      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::ID: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(546);
    contextID();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ToPortNameContext ------------------------------------------------------------------

IrdlParser::ToPortNameContext::ToPortNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::ToPortNameContext::ToID() {
  return getToken(IrdlParser::ToID, 0);
}

IrdlParser::ContextIDContext* IrdlParser::ToPortNameContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}


size_t IrdlParser::ToPortNameContext::getRuleIndex() const {
  return IrdlParser::RuleToPortName;
}

void IrdlParser::ToPortNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToPortName(this);
}

void IrdlParser::ToPortNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToPortName(this);
}

IrdlParser::ToPortNameContext* IrdlParser::toPortName() {
  ToPortNameContext *_localctx = _tracker.createInstance<ToPortNameContext>(_ctx, getState());
  enterRule(_localctx, 94, IrdlParser::RuleToPortName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(548);
    match(IrdlParser::ToID);
    setState(549);
    contextID();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalAssignStatementContext ------------------------------------------------------------------

IrdlParser::LocalAssignStatementContext::LocalAssignStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::TypeDeclContext* IrdlParser::LocalAssignStatementContext::typeDecl() {
  return getRuleContext<IrdlParser::TypeDeclContext>(0);
}

IrdlParser::ContextIDContext* IrdlParser::LocalAssignStatementContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}

tree::TerminalNode* IrdlParser::LocalAssignStatementContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}

tree::TerminalNode* IrdlParser::LocalAssignStatementContext::ASSIGN() {
  return getToken(IrdlParser::ASSIGN, 0);
}

IrdlParser::ExpressionContext* IrdlParser::LocalAssignStatementContext::expression() {
  return getRuleContext<IrdlParser::ExpressionContext>(0);
}


size_t IrdlParser::LocalAssignStatementContext::getRuleIndex() const {
  return IrdlParser::RuleLocalAssignStatement;
}

void IrdlParser::LocalAssignStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalAssignStatement(this);
}

void IrdlParser::LocalAssignStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalAssignStatement(this);
}

IrdlParser::LocalAssignStatementContext* IrdlParser::localAssignStatement() {
  LocalAssignStatementContext *_localctx = _tracker.createInstance<LocalAssignStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, IrdlParser::RuleLocalAssignStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    typeDecl();
    setState(552);
    contextID();
    setState(556);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::ASSIGN: {
        setState(553);
        match(IrdlParser::ASSIGN);
        setState(554);
        expression();
        break;
      }

      case IrdlParser::SEMI: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(558);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SendToStatementContext ------------------------------------------------------------------

IrdlParser::SendToStatementContext::SendToStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::SendToStatementContext::SendID() {
  return getToken(IrdlParser::SendID, 0);
}

IrdlParser::SignalSendContext* IrdlParser::SendToStatementContext::signalSend() {
  return getRuleContext<IrdlParser::SignalSendContext>(0);
}

tree::TerminalNode* IrdlParser::SendToStatementContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}

IrdlParser::ToPortNameContext* IrdlParser::SendToStatementContext::toPortName() {
  return getRuleContext<IrdlParser::ToPortNameContext>(0);
}


size_t IrdlParser::SendToStatementContext::getRuleIndex() const {
  return IrdlParser::RuleSendToStatement;
}

void IrdlParser::SendToStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSendToStatement(this);
}

void IrdlParser::SendToStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSendToStatement(this);
}

IrdlParser::SendToStatementContext* IrdlParser::sendToStatement() {
  SendToStatementContext *_localctx = _tracker.createInstance<SendToStatementContext>(_ctx, getState());
  enterRule(_localctx, 98, IrdlParser::RuleSendToStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(560);
    match(IrdlParser::SendID);
    setState(561);
    signalSend();
    setState(564);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::ToID: {
        setState(562);
        toPortName();
        break;
      }

      case IrdlParser::SEMI: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(566);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleAssignmentContext ------------------------------------------------------------------

IrdlParser::SingleAssignmentContext::SingleAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::AttributeAssignStatementContext* IrdlParser::SingleAssignmentContext::attributeAssignStatement() {
  return getRuleContext<IrdlParser::AttributeAssignStatementContext>(0);
}

IrdlParser::SendToStatementContext* IrdlParser::SingleAssignmentContext::sendToStatement() {
  return getRuleContext<IrdlParser::SendToStatementContext>(0);
}


size_t IrdlParser::SingleAssignmentContext::getRuleIndex() const {
  return IrdlParser::RuleSingleAssignment;
}

void IrdlParser::SingleAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleAssignment(this);
}

void IrdlParser::SingleAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleAssignment(this);
}

IrdlParser::SingleAssignmentContext* IrdlParser::singleAssignment() {
  SingleAssignmentContext *_localctx = _tracker.createInstance<SingleAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 100, IrdlParser::RuleSingleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(570);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(568);
      attributeAssignStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(569);
      sendToStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiAssignmentContext ------------------------------------------------------------------

IrdlParser::MultiAssignmentContext::MultiAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::MultiAssignmentContext::LBRACE() {
  return getToken(IrdlParser::LBRACE, 0);
}

tree::TerminalNode* IrdlParser::MultiAssignmentContext::RBRACE() {
  return getToken(IrdlParser::RBRACE, 0);
}

std::vector<IrdlParser::SingleAssignmentContext *> IrdlParser::MultiAssignmentContext::singleAssignment() {
  return getRuleContexts<IrdlParser::SingleAssignmentContext>();
}

IrdlParser::SingleAssignmentContext* IrdlParser::MultiAssignmentContext::singleAssignment(size_t i) {
  return getRuleContext<IrdlParser::SingleAssignmentContext>(i);
}


size_t IrdlParser::MultiAssignmentContext::getRuleIndex() const {
  return IrdlParser::RuleMultiAssignment;
}

void IrdlParser::MultiAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiAssignment(this);
}

void IrdlParser::MultiAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiAssignment(this);
}

IrdlParser::MultiAssignmentContext* IrdlParser::multiAssignment() {
  MultiAssignmentContext *_localctx = _tracker.createInstance<MultiAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 102, IrdlParser::RuleMultiAssignment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    match(IrdlParser::LBRACE);
    setState(576);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 3) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 3)) & ((1ULL << (IrdlParser::DescriptionID - 3))
      | (1ULL << (IrdlParser::ComponentID - 3))
      | (1ULL << (IrdlParser::AtID - 3))
      | (1ULL << (IrdlParser::TimeOutID - 3))
      | (1ULL << (IrdlParser::MilliSekID - 3))
      | (1ULL << (IrdlParser::SekID - 3))
      | (1ULL << (IrdlParser::NameID - 3))
      | (1ULL << (IrdlParser::LabelID - 3))
      | (1ULL << (IrdlParser::EnabledID - 3))
      | (1ULL << (IrdlParser::TypeID - 3))
      | (1ULL << (IrdlParser::ThisID - 3))
      | (1ULL << (IrdlParser::AttributeID - 3))
      | (1ULL << (IrdlParser::SignalID - 3))
      | (1ULL << (IrdlParser::ImportID - 3))
      | (1ULL << (IrdlParser::FromID - 3))
      | (1ULL << (IrdlParser::ToID - 3))
      | (1ULL << (IrdlParser::SendID - 3))
      | (1ULL << (IrdlParser::ID - 3)))) != 0)) {
      setState(573);
      singleAssignment();
      setState(578);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(579);
    match(IrdlParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignalDeclContext ------------------------------------------------------------------

IrdlParser::SignalDeclContext::SignalDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::SignalDeclContext::SignalID() {
  return getToken(IrdlParser::SignalID, 0);
}

IrdlParser::ContextIDContext* IrdlParser::SignalDeclContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}

tree::TerminalNode* IrdlParser::SignalDeclContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}

tree::TerminalNode* IrdlParser::SignalDeclContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

tree::TerminalNode* IrdlParser::SignalDeclContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}

std::vector<IrdlParser::ParamDeclContext *> IrdlParser::SignalDeclContext::paramDecl() {
  return getRuleContexts<IrdlParser::ParamDeclContext>();
}

IrdlParser::ParamDeclContext* IrdlParser::SignalDeclContext::paramDecl(size_t i) {
  return getRuleContext<IrdlParser::ParamDeclContext>(i);
}

std::vector<tree::TerminalNode *> IrdlParser::SignalDeclContext::COMMA() {
  return getTokens(IrdlParser::COMMA);
}

tree::TerminalNode* IrdlParser::SignalDeclContext::COMMA(size_t i) {
  return getToken(IrdlParser::COMMA, i);
}


size_t IrdlParser::SignalDeclContext::getRuleIndex() const {
  return IrdlParser::RuleSignalDecl;
}

void IrdlParser::SignalDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignalDecl(this);
}

void IrdlParser::SignalDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignalDecl(this);
}

IrdlParser::SignalDeclContext* IrdlParser::signalDecl() {
  SignalDeclContext *_localctx = _tracker.createInstance<SignalDeclContext>(_ctx, getState());
  enterRule(_localctx, 104, IrdlParser::RuleSignalDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(581);
    match(IrdlParser::SignalID);
    setState(582);
    contextID();
    setState(597);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::LPAREN: {
        setState(583);
        match(IrdlParser::LPAREN);
        setState(593);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case IrdlParser::DescriptionID:
          case IrdlParser::ComponentID:
          case IrdlParser::AtID:
          case IrdlParser::TimeOutID:
          case IrdlParser::MilliSekID:
          case IrdlParser::SekID:
          case IrdlParser::NameID:
          case IrdlParser::LabelID:
          case IrdlParser::EnabledID:
          case IrdlParser::TypeID:
          case IrdlParser::IntID:
          case IrdlParser::RealID:
          case IrdlParser::BoolID:
          case IrdlParser::StringID:
          case IrdlParser::EnumID:
          case IrdlParser::AttributeID:
          case IrdlParser::SignalID:
          case IrdlParser::ImportID:
          case IrdlParser::FromID:
          case IrdlParser::ToID:
          case IrdlParser::SendID:
          case IrdlParser::ID: {
            setState(584);
            paramDecl();
            setState(589);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == IrdlParser::COMMA) {
              setState(585);
              match(IrdlParser::COMMA);
              setState(586);
              paramDecl();
              setState(591);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case IrdlParser::RPAREN: {
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(595);
        match(IrdlParser::RPAREN);
        break;
      }

      case IrdlParser::SEMI: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(599);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamDeclContext ------------------------------------------------------------------

IrdlParser::ParamDeclContext::ParamDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::TypeDeclContext* IrdlParser::ParamDeclContext::typeDecl() {
  return getRuleContext<IrdlParser::TypeDeclContext>(0);
}

IrdlParser::ContextIDContext* IrdlParser::ParamDeclContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}


size_t IrdlParser::ParamDeclContext::getRuleIndex() const {
  return IrdlParser::RuleParamDecl;
}

void IrdlParser::ParamDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamDecl(this);
}

void IrdlParser::ParamDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamDecl(this);
}

IrdlParser::ParamDeclContext* IrdlParser::paramDecl() {
  ParamDeclContext *_localctx = _tracker.createInstance<ParamDeclContext>(_ctx, getState());
  enterRule(_localctx, 106, IrdlParser::RuleParamDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(601);
    typeDecl();
    setState(602);
    contextID();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

IrdlParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::FunctionDeclContext::FunctionID() {
  return getToken(IrdlParser::FunctionID, 0);
}

IrdlParser::TypeDeclContext* IrdlParser::FunctionDeclContext::typeDecl() {
  return getRuleContext<IrdlParser::TypeDeclContext>(0);
}

IrdlParser::IdPathContext* IrdlParser::FunctionDeclContext::idPath() {
  return getRuleContext<IrdlParser::IdPathContext>(0);
}

tree::TerminalNode* IrdlParser::FunctionDeclContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

tree::TerminalNode* IrdlParser::FunctionDeclContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}

IrdlParser::NestedStatementBodyContext* IrdlParser::FunctionDeclContext::nestedStatementBody() {
  return getRuleContext<IrdlParser::NestedStatementBodyContext>(0);
}

IrdlParser::FunctionParametersContext* IrdlParser::FunctionDeclContext::functionParameters() {
  return getRuleContext<IrdlParser::FunctionParametersContext>(0);
}


size_t IrdlParser::FunctionDeclContext::getRuleIndex() const {
  return IrdlParser::RuleFunctionDecl;
}

void IrdlParser::FunctionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDecl(this);
}

void IrdlParser::FunctionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDecl(this);
}

IrdlParser::FunctionDeclContext* IrdlParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 108, IrdlParser::RuleFunctionDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    match(IrdlParser::FunctionID);
    setState(605);
    typeDecl();
    setState(606);
    idPath();
    setState(607);
    match(IrdlParser::LPAREN);
    setState(610);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::IntID:
      case IrdlParser::RealID:
      case IrdlParser::BoolID:
      case IrdlParser::StringID:
      case IrdlParser::EnumID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::ID: {
        setState(608);
        functionParameters();
        break;
      }

      case IrdlParser::RPAREN: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(612);
    match(IrdlParser::RPAREN);
    setState(613);
    nestedStatementBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParametersContext ------------------------------------------------------------------

IrdlParser::FunctionParametersContext::FunctionParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IrdlParser::ParamDeclContext *> IrdlParser::FunctionParametersContext::paramDecl() {
  return getRuleContexts<IrdlParser::ParamDeclContext>();
}

IrdlParser::ParamDeclContext* IrdlParser::FunctionParametersContext::paramDecl(size_t i) {
  return getRuleContext<IrdlParser::ParamDeclContext>(i);
}

std::vector<tree::TerminalNode *> IrdlParser::FunctionParametersContext::COMMA() {
  return getTokens(IrdlParser::COMMA);
}

tree::TerminalNode* IrdlParser::FunctionParametersContext::COMMA(size_t i) {
  return getToken(IrdlParser::COMMA, i);
}


size_t IrdlParser::FunctionParametersContext::getRuleIndex() const {
  return IrdlParser::RuleFunctionParameters;
}

void IrdlParser::FunctionParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameters(this);
}

void IrdlParser::FunctionParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameters(this);
}

IrdlParser::FunctionParametersContext* IrdlParser::functionParameters() {
  FunctionParametersContext *_localctx = _tracker.createInstance<FunctionParametersContext>(_ctx, getState());
  enterRule(_localctx, 110, IrdlParser::RuleFunctionParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(615);
    paramDecl();
    setState(620);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IrdlParser::COMMA) {
      setState(616);
      match(IrdlParser::COMMA);
      setState(617);
      paramDecl();
      setState(622);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

IrdlParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::IdPathContext* IrdlParser::FunctionCallContext::idPath() {
  return getRuleContext<IrdlParser::IdPathContext>(0);
}

tree::TerminalNode* IrdlParser::FunctionCallContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

IrdlParser::FunctionCallBodyContext* IrdlParser::FunctionCallContext::functionCallBody() {
  return getRuleContext<IrdlParser::FunctionCallBodyContext>(0);
}

tree::TerminalNode* IrdlParser::FunctionCallContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}


size_t IrdlParser::FunctionCallContext::getRuleIndex() const {
  return IrdlParser::RuleFunctionCall;
}

void IrdlParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void IrdlParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

IrdlParser::FunctionCallContext* IrdlParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 112, IrdlParser::RuleFunctionCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    idPath();
    setState(624);
    match(IrdlParser::LPAREN);
    setState(625);
    functionCallBody();
    setState(626);
    match(IrdlParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallBodyContext ------------------------------------------------------------------

IrdlParser::FunctionCallBodyContext::FunctionCallBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::FunctionCallBodyOptionalContext* IrdlParser::FunctionCallBodyContext::functionCallBodyOptional() {
  return getRuleContext<IrdlParser::FunctionCallBodyOptionalContext>(0);
}

IrdlParser::LiteralValueContext* IrdlParser::FunctionCallBodyContext::literalValue() {
  return getRuleContext<IrdlParser::LiteralValueContext>(0);
}

IrdlParser::SignalParamNameContext* IrdlParser::FunctionCallBodyContext::signalParamName() {
  return getRuleContext<IrdlParser::SignalParamNameContext>(0);
}

IrdlParser::AttributeNameContext* IrdlParser::FunctionCallBodyContext::attributeName() {
  return getRuleContext<IrdlParser::AttributeNameContext>(0);
}

IrdlParser::FunctionCallContext* IrdlParser::FunctionCallBodyContext::functionCall() {
  return getRuleContext<IrdlParser::FunctionCallContext>(0);
}


size_t IrdlParser::FunctionCallBodyContext::getRuleIndex() const {
  return IrdlParser::RuleFunctionCallBody;
}

void IrdlParser::FunctionCallBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallBody(this);
}

void IrdlParser::FunctionCallBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallBody(this);
}

IrdlParser::FunctionCallBodyContext* IrdlParser::functionCallBody() {
  FunctionCallBodyContext *_localctx = _tracker.createInstance<FunctionCallBodyContext>(_ctx, getState());
  enterRule(_localctx, 114, IrdlParser::RuleFunctionCallBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(633);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(628);
      literalValue();
      break;
    }

    case 2: {
      setState(629);
      signalParamName();
      break;
    }

    case 3: {
      setState(630);
      attributeName();
      break;
    }

    case 4: {
      setState(631);
      functionCall();
      break;
    }

    case 5: {
      break;
    }

    }
    setState(635);
    functionCallBodyOptional();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallBodyOptionalContext ------------------------------------------------------------------

IrdlParser::FunctionCallBodyOptionalContext::FunctionCallBodyOptionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::FunctionCallBodyOptionalContext::COMMA() {
  return getToken(IrdlParser::COMMA, 0);
}

IrdlParser::FunctionCallBodyContext* IrdlParser::FunctionCallBodyOptionalContext::functionCallBody() {
  return getRuleContext<IrdlParser::FunctionCallBodyContext>(0);
}


size_t IrdlParser::FunctionCallBodyOptionalContext::getRuleIndex() const {
  return IrdlParser::RuleFunctionCallBodyOptional;
}

void IrdlParser::FunctionCallBodyOptionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallBodyOptional(this);
}

void IrdlParser::FunctionCallBodyOptionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallBodyOptional(this);
}

IrdlParser::FunctionCallBodyOptionalContext* IrdlParser::functionCallBodyOptional() {
  FunctionCallBodyOptionalContext *_localctx = _tracker.createInstance<FunctionCallBodyOptionalContext>(_ctx, getState());
  enterRule(_localctx, 116, IrdlParser::RuleFunctionCallBodyOptional);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(640);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(637);
        match(IrdlParser::COMMA);
        setState(638);
        functionCallBody();
        break;
      }

      case IrdlParser::RPAREN: {
        enterOuterAlt(_localctx, 2);

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

//----------------- TriggerDeclContext ------------------------------------------------------------------

IrdlParser::TriggerDeclContext::TriggerDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::TriggerDeclContext::DOT() {
  return getToken(IrdlParser::DOT, 0);
}

tree::TerminalNode* IrdlParser::TriggerDeclContext::MessageTrigger() {
  return getToken(IrdlParser::MessageTrigger, 0);
}

tree::TerminalNode* IrdlParser::TriggerDeclContext::TriggerID() {
  return getToken(IrdlParser::TriggerID, 0);
}


size_t IrdlParser::TriggerDeclContext::getRuleIndex() const {
  return IrdlParser::RuleTriggerDecl;
}

void IrdlParser::TriggerDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTriggerDecl(this);
}

void IrdlParser::TriggerDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTriggerDecl(this);
}

IrdlParser::TriggerDeclContext* IrdlParser::triggerDecl() {
  TriggerDeclContext *_localctx = _tracker.createInstance<TriggerDeclContext>(_ctx, getState());
  enterRule(_localctx, 118, IrdlParser::RuleTriggerDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(642);
    _la = _input->LA(1);
    if (!(_la == IrdlParser::TriggerID

    || _la == IrdlParser::MessageTrigger)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(643);
    match(IrdlParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThisDeclContext ------------------------------------------------------------------

IrdlParser::ThisDeclContext::ThisDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::ThisDeclContext::ThisID() {
  return getToken(IrdlParser::ThisID, 0);
}

tree::TerminalNode* IrdlParser::ThisDeclContext::DOT() {
  return getToken(IrdlParser::DOT, 0);
}


size_t IrdlParser::ThisDeclContext::getRuleIndex() const {
  return IrdlParser::RuleThisDecl;
}

void IrdlParser::ThisDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThisDecl(this);
}

void IrdlParser::ThisDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThisDecl(this);
}

IrdlParser::ThisDeclContext* IrdlParser::thisDecl() {
  ThisDeclContext *_localctx = _tracker.createInstance<ThisDeclContext>(_ctx, getState());
  enterRule(_localctx, 120, IrdlParser::RuleThisDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(645);
    match(IrdlParser::ThisID);
    setState(646);
    match(IrdlParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PortDeclContext ------------------------------------------------------------------

IrdlParser::PortDeclContext::PortDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::PortDeclContext::PortID() {
  return getToken(IrdlParser::PortID, 0);
}

std::vector<IrdlParser::ContextIDContext *> IrdlParser::PortDeclContext::contextID() {
  return getRuleContexts<IrdlParser::ContextIDContext>();
}

IrdlParser::ContextIDContext* IrdlParser::PortDeclContext::contextID(size_t i) {
  return getRuleContext<IrdlParser::ContextIDContext>(i);
}

tree::TerminalNode* IrdlParser::PortDeclContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> IrdlParser::PortDeclContext::COMMA() {
  return getTokens(IrdlParser::COMMA);
}

tree::TerminalNode* IrdlParser::PortDeclContext::COMMA(size_t i) {
  return getToken(IrdlParser::COMMA, i);
}


size_t IrdlParser::PortDeclContext::getRuleIndex() const {
  return IrdlParser::RulePortDecl;
}

void IrdlParser::PortDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPortDecl(this);
}

void IrdlParser::PortDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPortDecl(this);
}

IrdlParser::PortDeclContext* IrdlParser::portDecl() {
  PortDeclContext *_localctx = _tracker.createInstance<PortDeclContext>(_ctx, getState());
  enterRule(_localctx, 122, IrdlParser::RulePortDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(648);
    match(IrdlParser::PortID);
    setState(649);
    contextID();
    setState(654);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IrdlParser::COMMA) {
      setState(650);
      match(IrdlParser::COMMA);
      setState(651);
      contextID();
      setState(656);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(657);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameDeclContext ------------------------------------------------------------------

IrdlParser::NameDeclContext::NameDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::NameDeclContext::NameID() {
  return getToken(IrdlParser::NameID, 0);
}

tree::TerminalNode* IrdlParser::NameDeclContext::COLON() {
  return getToken(IrdlParser::COLON, 0);
}

IrdlParser::ContextIDContext* IrdlParser::NameDeclContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}

tree::TerminalNode* IrdlParser::NameDeclContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}


size_t IrdlParser::NameDeclContext::getRuleIndex() const {
  return IrdlParser::RuleNameDecl;
}

void IrdlParser::NameDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNameDecl(this);
}

void IrdlParser::NameDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNameDecl(this);
}

IrdlParser::NameDeclContext* IrdlParser::nameDecl() {
  NameDeclContext *_localctx = _tracker.createInstance<NameDeclContext>(_ctx, getState());
  enterRule(_localctx, 124, IrdlParser::RuleNameDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(659);
    match(IrdlParser::NameID);
    setState(660);
    match(IrdlParser::COLON);
    setState(661);
    contextID();
    setState(662);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdPathContext ------------------------------------------------------------------

IrdlParser::IdPathContext::IdPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IrdlParser::ContextIDContext *> IrdlParser::IdPathContext::contextID() {
  return getRuleContexts<IrdlParser::ContextIDContext>();
}

IrdlParser::ContextIDContext* IrdlParser::IdPathContext::contextID(size_t i) {
  return getRuleContext<IrdlParser::ContextIDContext>(i);
}

std::vector<tree::TerminalNode *> IrdlParser::IdPathContext::DOT() {
  return getTokens(IrdlParser::DOT);
}

tree::TerminalNode* IrdlParser::IdPathContext::DOT(size_t i) {
  return getToken(IrdlParser::DOT, i);
}


size_t IrdlParser::IdPathContext::getRuleIndex() const {
  return IrdlParser::RuleIdPath;
}

void IrdlParser::IdPathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdPath(this);
}

void IrdlParser::IdPathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdPath(this);
}

IrdlParser::IdPathContext* IrdlParser::idPath() {
  IdPathContext *_localctx = _tracker.createInstance<IdPathContext>(_ctx, getState());
  enterRule(_localctx, 126, IrdlParser::RuleIdPath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(664);
    contextID();
    setState(669);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IrdlParser::DOT) {
      setState(665);
      match(IrdlParser::DOT);
      setState(666);
      contextID();
      setState(671);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementDeclContext ------------------------------------------------------------------

IrdlParser::StatementDeclContext::StatementDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::StatementBodyContext* IrdlParser::StatementDeclContext::statementBody() {
  return getRuleContext<IrdlParser::StatementBodyContext>(0);
}

IrdlParser::NestedStatementBodyContext* IrdlParser::StatementDeclContext::nestedStatementBody() {
  return getRuleContext<IrdlParser::NestedStatementBodyContext>(0);
}


size_t IrdlParser::StatementDeclContext::getRuleIndex() const {
  return IrdlParser::RuleStatementDecl;
}

void IrdlParser::StatementDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementDecl(this);
}

void IrdlParser::StatementDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementDecl(this);
}

IrdlParser::StatementDeclContext* IrdlParser::statementDecl() {
  StatementDeclContext *_localctx = _tracker.createInstance<StatementDeclContext>(_ctx, getState());
  enterRule(_localctx, 128, IrdlParser::RuleStatementDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(674);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::IntID:
      case IrdlParser::RealID:
      case IrdlParser::BoolID:
      case IrdlParser::StringID:
      case IrdlParser::ThisID:
      case IrdlParser::ReturnID:
      case IrdlParser::EnumID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::SwitchID:
      case IrdlParser::IfID:
      case IrdlParser::BREAK:
      case IrdlParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(672);
        statementBody();
        break;
      }

      case IrdlParser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(673);
        nestedStatementBody();
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

//----------------- StatementBodyContext ------------------------------------------------------------------

IrdlParser::StatementBodyContext::StatementBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::FunctionCallStatementContext* IrdlParser::StatementBodyContext::functionCallStatement() {
  return getRuleContext<IrdlParser::FunctionCallStatementContext>(0);
}

IrdlParser::AttributeAssignStatementContext* IrdlParser::StatementBodyContext::attributeAssignStatement() {
  return getRuleContext<IrdlParser::AttributeAssignStatementContext>(0);
}

IrdlParser::SwitchStatementContext* IrdlParser::StatementBodyContext::switchStatement() {
  return getRuleContext<IrdlParser::SwitchStatementContext>(0);
}

IrdlParser::ConditionalStatementContext* IrdlParser::StatementBodyContext::conditionalStatement() {
  return getRuleContext<IrdlParser::ConditionalStatementContext>(0);
}

IrdlParser::LocalAssignStatementContext* IrdlParser::StatementBodyContext::localAssignStatement() {
  return getRuleContext<IrdlParser::LocalAssignStatementContext>(0);
}

IrdlParser::SendToStatementContext* IrdlParser::StatementBodyContext::sendToStatement() {
  return getRuleContext<IrdlParser::SendToStatementContext>(0);
}

IrdlParser::BreakStatementContext* IrdlParser::StatementBodyContext::breakStatement() {
  return getRuleContext<IrdlParser::BreakStatementContext>(0);
}

IrdlParser::ReturnStatementContext* IrdlParser::StatementBodyContext::returnStatement() {
  return getRuleContext<IrdlParser::ReturnStatementContext>(0);
}


size_t IrdlParser::StatementBodyContext::getRuleIndex() const {
  return IrdlParser::RuleStatementBody;
}

void IrdlParser::StatementBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementBody(this);
}

void IrdlParser::StatementBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementBody(this);
}

IrdlParser::StatementBodyContext* IrdlParser::statementBody() {
  StatementBodyContext *_localctx = _tracker.createInstance<StatementBodyContext>(_ctx, getState());
  enterRule(_localctx, 130, IrdlParser::RuleStatementBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(684);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(676);
      functionCallStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(677);
      attributeAssignStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(678);
      switchStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(679);
      conditionalStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(680);
      localAssignStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(681);
      sendToStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(682);
      breakStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(683);
      returnStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallStatementContext ------------------------------------------------------------------

IrdlParser::FunctionCallStatementContext::FunctionCallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::FunctionCallContext* IrdlParser::FunctionCallStatementContext::functionCall() {
  return getRuleContext<IrdlParser::FunctionCallContext>(0);
}

tree::TerminalNode* IrdlParser::FunctionCallStatementContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}


size_t IrdlParser::FunctionCallStatementContext::getRuleIndex() const {
  return IrdlParser::RuleFunctionCallStatement;
}

void IrdlParser::FunctionCallStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallStatement(this);
}

void IrdlParser::FunctionCallStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallStatement(this);
}

IrdlParser::FunctionCallStatementContext* IrdlParser::functionCallStatement() {
  FunctionCallStatementContext *_localctx = _tracker.createInstance<FunctionCallStatementContext>(_ctx, getState());
  enterRule(_localctx, 132, IrdlParser::RuleFunctionCallStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(686);
    functionCall();
    setState(687);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestedStatementBodyContext ------------------------------------------------------------------

IrdlParser::NestedStatementBodyContext::NestedStatementBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::NestedStatementBodyContext::LBRACE() {
  return getToken(IrdlParser::LBRACE, 0);
}

tree::TerminalNode* IrdlParser::NestedStatementBodyContext::RBRACE() {
  return getToken(IrdlParser::RBRACE, 0);
}

std::vector<IrdlParser::StatementBodyContext *> IrdlParser::NestedStatementBodyContext::statementBody() {
  return getRuleContexts<IrdlParser::StatementBodyContext>();
}

IrdlParser::StatementBodyContext* IrdlParser::NestedStatementBodyContext::statementBody(size_t i) {
  return getRuleContext<IrdlParser::StatementBodyContext>(i);
}


size_t IrdlParser::NestedStatementBodyContext::getRuleIndex() const {
  return IrdlParser::RuleNestedStatementBody;
}

void IrdlParser::NestedStatementBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestedStatementBody(this);
}

void IrdlParser::NestedStatementBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestedStatementBody(this);
}

IrdlParser::NestedStatementBodyContext* IrdlParser::nestedStatementBody() {
  NestedStatementBodyContext *_localctx = _tracker.createInstance<NestedStatementBodyContext>(_ctx, getState());
  enterRule(_localctx, 134, IrdlParser::RuleNestedStatementBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(689);
    match(IrdlParser::LBRACE);
    setState(693);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 3) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 3)) & ((1ULL << (IrdlParser::DescriptionID - 3))
      | (1ULL << (IrdlParser::ComponentID - 3))
      | (1ULL << (IrdlParser::AtID - 3))
      | (1ULL << (IrdlParser::TimeOutID - 3))
      | (1ULL << (IrdlParser::MilliSekID - 3))
      | (1ULL << (IrdlParser::SekID - 3))
      | (1ULL << (IrdlParser::NameID - 3))
      | (1ULL << (IrdlParser::LabelID - 3))
      | (1ULL << (IrdlParser::EnabledID - 3))
      | (1ULL << (IrdlParser::TypeID - 3))
      | (1ULL << (IrdlParser::IntID - 3))
      | (1ULL << (IrdlParser::RealID - 3))
      | (1ULL << (IrdlParser::BoolID - 3))
      | (1ULL << (IrdlParser::StringID - 3))
      | (1ULL << (IrdlParser::ThisID - 3))
      | (1ULL << (IrdlParser::ReturnID - 3))
      | (1ULL << (IrdlParser::EnumID - 3))
      | (1ULL << (IrdlParser::AttributeID - 3))
      | (1ULL << (IrdlParser::SignalID - 3))
      | (1ULL << (IrdlParser::ImportID - 3))
      | (1ULL << (IrdlParser::FromID - 3))
      | (1ULL << (IrdlParser::ToID - 3))
      | (1ULL << (IrdlParser::SendID - 3))
      | (1ULL << (IrdlParser::SwitchID - 3))
      | (1ULL << (IrdlParser::IfID - 3))
      | (1ULL << (IrdlParser::BREAK - 3))
      | (1ULL << (IrdlParser::ID - 3)))) != 0)) {
      setState(690);
      statementBody();
      setState(695);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(696);
    match(IrdlParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

IrdlParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::ReturnStatementContext::ReturnID() {
  return getToken(IrdlParser::ReturnID, 0);
}

IrdlParser::OperationContext* IrdlParser::ReturnStatementContext::operation() {
  return getRuleContext<IrdlParser::OperationContext>(0);
}

tree::TerminalNode* IrdlParser::ReturnStatementContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}


size_t IrdlParser::ReturnStatementContext::getRuleIndex() const {
  return IrdlParser::RuleReturnStatement;
}

void IrdlParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void IrdlParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

IrdlParser::ReturnStatementContext* IrdlParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 136, IrdlParser::RuleReturnStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(698);
    match(IrdlParser::ReturnID);
    setState(699);
    operation();
    setState(700);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

IrdlParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::BreakStatementContext::BREAK() {
  return getToken(IrdlParser::BREAK, 0);
}

tree::TerminalNode* IrdlParser::BreakStatementContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}


size_t IrdlParser::BreakStatementContext::getRuleIndex() const {
  return IrdlParser::RuleBreakStatement;
}

void IrdlParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void IrdlParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}

IrdlParser::BreakStatementContext* IrdlParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 138, IrdlParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(702);
    match(IrdlParser::BREAK);
    setState(703);
    match(IrdlParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationContext ------------------------------------------------------------------

IrdlParser::OperationContext::OperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::AtomContext* IrdlParser::OperationContext::atom() {
  return getRuleContext<IrdlParser::AtomContext>(0);
}

IrdlParser::OperationOptionalContext* IrdlParser::OperationContext::operationOptional() {
  return getRuleContext<IrdlParser::OperationOptionalContext>(0);
}

tree::TerminalNode* IrdlParser::OperationContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

IrdlParser::OperationContext* IrdlParser::OperationContext::operation() {
  return getRuleContext<IrdlParser::OperationContext>(0);
}

tree::TerminalNode* IrdlParser::OperationContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}

tree::TerminalNode* IrdlParser::OperationContext::MINUS() {
  return getToken(IrdlParser::MINUS, 0);
}

tree::TerminalNode* IrdlParser::OperationContext::NotIdSymbol() {
  return getToken(IrdlParser::NotIdSymbol, 0);
}


size_t IrdlParser::OperationContext::getRuleIndex() const {
  return IrdlParser::RuleOperation;
}

void IrdlParser::OperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation(this);
}

void IrdlParser::OperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation(this);
}

IrdlParser::OperationContext* IrdlParser::operation() {
  OperationContext *_localctx = _tracker.createInstance<OperationContext>(_ctx, getState());
  enterRule(_localctx, 140, IrdlParser::RuleOperation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(716);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::TriggerID:
      case IrdlParser::MessageTrigger:
      case IrdlParser::ThisID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::TrueID:
      case IrdlParser::FalseID:
      case IrdlParser::INT:
      case IrdlParser::REAL:
      case IrdlParser::STRING:
      case IrdlParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(705);
        atom();
        setState(706);
        operationOptional();
        break;
      }

      case IrdlParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(708);
        match(IrdlParser::LPAREN);
        setState(709);
        operation();
        setState(710);
        match(IrdlParser::RPAREN);
        break;
      }

      case IrdlParser::MINUS: {
        enterOuterAlt(_localctx, 3);
        setState(712);
        match(IrdlParser::MINUS);
        setState(713);
        operation();
        break;
      }

      case IrdlParser::NotIdSymbol: {
        enterOuterAlt(_localctx, 4);
        setState(714);
        match(IrdlParser::NotIdSymbol);
        setState(715);
        operation();
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

//----------------- OperationOptionalContext ------------------------------------------------------------------

IrdlParser::OperationOptionalContext::OperationOptionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::OperationContext* IrdlParser::OperationOptionalContext::operation() {
  return getRuleContext<IrdlParser::OperationContext>(0);
}

tree::TerminalNode* IrdlParser::OperationOptionalContext::MULT() {
  return getToken(IrdlParser::MULT, 0);
}

tree::TerminalNode* IrdlParser::OperationOptionalContext::DIV() {
  return getToken(IrdlParser::DIV, 0);
}

tree::TerminalNode* IrdlParser::OperationOptionalContext::PLUS() {
  return getToken(IrdlParser::PLUS, 0);
}

tree::TerminalNode* IrdlParser::OperationOptionalContext::MINUS() {
  return getToken(IrdlParser::MINUS, 0);
}


size_t IrdlParser::OperationOptionalContext::getRuleIndex() const {
  return IrdlParser::RuleOperationOptional;
}

void IrdlParser::OperationOptionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperationOptional(this);
}

void IrdlParser::OperationOptionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperationOptional(this);
}

IrdlParser::OperationOptionalContext* IrdlParser::operationOptional() {
  OperationOptionalContext *_localctx = _tracker.createInstance<OperationOptionalContext>(_ctx, getState());
  enterRule(_localctx, 142, IrdlParser::RuleOperationOptional);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(721);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::PLUS:
      case IrdlParser::MINUS:
      case IrdlParser::MULT:
      case IrdlParser::DIV: {
        enterOuterAlt(_localctx, 1);
        setState(718);
        dynamic_cast<OperationOptionalContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(((((_la - 81) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 81)) & ((1ULL << (IrdlParser::PLUS - 81))
          | (1ULL << (IrdlParser::MINUS - 81))
          | (1ULL << (IrdlParser::MULT - 81))
          | (1ULL << (IrdlParser::DIV - 81)))) != 0))) {
          dynamic_cast<OperationOptionalContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(719);
        operation();
        break;
      }

      case IrdlParser::NotIdSymbol:
      case IrdlParser::AndIdSymbol:
      case IrdlParser::OrIdSymbol:
      case IrdlParser::NotIdWord:
      case IrdlParser::AndIdWord:
      case IrdlParser::OrIdWord:
      case IrdlParser::ASSIGN:
      case IrdlParser::RPAREN:
      case IrdlParser::RBRACKET:
      case IrdlParser::LESSTHAN:
      case IrdlParser::GREATERTHAN:
      case IrdlParser::SEMI: {
        enterOuterAlt(_localctx, 2);

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

//----------------- ExpressionContext ------------------------------------------------------------------

IrdlParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::ExpressionContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

IrdlParser::ExpressionContext* IrdlParser::ExpressionContext::expression() {
  return getRuleContext<IrdlParser::ExpressionContext>(0);
}

tree::TerminalNode* IrdlParser::ExpressionContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}

IrdlParser::ExpressionOptionalContext* IrdlParser::ExpressionContext::expressionOptional() {
  return getRuleContext<IrdlParser::ExpressionOptionalContext>(0);
}

tree::TerminalNode* IrdlParser::ExpressionContext::NotIdSymbol() {
  return getToken(IrdlParser::NotIdSymbol, 0);
}

tree::TerminalNode* IrdlParser::ExpressionContext::NotIdWord() {
  return getToken(IrdlParser::NotIdWord, 0);
}

tree::TerminalNode* IrdlParser::ExpressionContext::MINUS() {
  return getToken(IrdlParser::MINUS, 0);
}

IrdlParser::OperationContext* IrdlParser::ExpressionContext::operation() {
  return getRuleContext<IrdlParser::OperationContext>(0);
}


size_t IrdlParser::ExpressionContext::getRuleIndex() const {
  return IrdlParser::RuleExpression;
}

void IrdlParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void IrdlParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

IrdlParser::ExpressionContext* IrdlParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 144, IrdlParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(737);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(723);
      match(IrdlParser::LPAREN);
      setState(724);
      expression();
      setState(725);
      match(IrdlParser::RPAREN);
      setState(726);
      expressionOptional();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(728);
      match(IrdlParser::NotIdSymbol);
      setState(729);
      expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(730);
      match(IrdlParser::NotIdWord);
      setState(731);
      expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(732);
      match(IrdlParser::MINUS);
      setState(733);
      expression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(734);
      operation();
      setState(735);
      expressionOptional();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionOptionalContext ------------------------------------------------------------------

IrdlParser::ExpressionOptionalContext::ExpressionOptionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::ExpressionContext* IrdlParser::ExpressionOptionalContext::expression() {
  return getRuleContext<IrdlParser::ExpressionContext>(0);
}

tree::TerminalNode* IrdlParser::ExpressionOptionalContext::OrIdSymbol() {
  return getToken(IrdlParser::OrIdSymbol, 0);
}

tree::TerminalNode* IrdlParser::ExpressionOptionalContext::OrIdWord() {
  return getToken(IrdlParser::OrIdWord, 0);
}

tree::TerminalNode* IrdlParser::ExpressionOptionalContext::AndIdSymbol() {
  return getToken(IrdlParser::AndIdSymbol, 0);
}

tree::TerminalNode* IrdlParser::ExpressionOptionalContext::AndIdWord() {
  return getToken(IrdlParser::AndIdWord, 0);
}

tree::TerminalNode* IrdlParser::ExpressionOptionalContext::NotIdWord() {
  return getToken(IrdlParser::NotIdWord, 0);
}

std::vector<tree::TerminalNode *> IrdlParser::ExpressionOptionalContext::ASSIGN() {
  return getTokens(IrdlParser::ASSIGN);
}

tree::TerminalNode* IrdlParser::ExpressionOptionalContext::ASSIGN(size_t i) {
  return getToken(IrdlParser::ASSIGN, i);
}

tree::TerminalNode* IrdlParser::ExpressionOptionalContext::NotIdSymbol() {
  return getToken(IrdlParser::NotIdSymbol, 0);
}

tree::TerminalNode* IrdlParser::ExpressionOptionalContext::LESSTHAN() {
  return getToken(IrdlParser::LESSTHAN, 0);
}

tree::TerminalNode* IrdlParser::ExpressionOptionalContext::GREATERTHAN() {
  return getToken(IrdlParser::GREATERTHAN, 0);
}


size_t IrdlParser::ExpressionOptionalContext::getRuleIndex() const {
  return IrdlParser::RuleExpressionOptional;
}

void IrdlParser::ExpressionOptionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionOptional(this);
}

void IrdlParser::ExpressionOptionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionOptional(this);
}

IrdlParser::ExpressionOptionalContext* IrdlParser::expressionOptional() {
  ExpressionOptionalContext *_localctx = _tracker.createInstance<ExpressionOptionalContext>(_ctx, getState());
  enterRule(_localctx, 146, IrdlParser::RuleExpressionOptional);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(762);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::NotIdSymbol:
      case IrdlParser::AndIdSymbol:
      case IrdlParser::OrIdSymbol:
      case IrdlParser::NotIdWord:
      case IrdlParser::AndIdWord:
      case IrdlParser::OrIdWord:
      case IrdlParser::ASSIGN:
      case IrdlParser::LESSTHAN:
      case IrdlParser::GREATERTHAN: {
        enterOuterAlt(_localctx, 1);
        setState(758);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case IrdlParser::OrIdSymbol: {
            setState(739);
            match(IrdlParser::OrIdSymbol);
            break;
          }

          case IrdlParser::OrIdWord: {
            setState(740);
            match(IrdlParser::OrIdWord);
            break;
          }

          case IrdlParser::AndIdSymbol: {
            setState(741);
            match(IrdlParser::AndIdSymbol);
            break;
          }

          case IrdlParser::AndIdWord: {
            setState(742);
            match(IrdlParser::AndIdWord);
            break;
          }

          case IrdlParser::ASSIGN: {
            setState(743);
            match(IrdlParser::ASSIGN);
            setState(744);
            match(IrdlParser::ASSIGN);
            break;
          }

          case IrdlParser::NotIdSymbol: {
            setState(745);
            match(IrdlParser::NotIdSymbol);
            setState(746);
            match(IrdlParser::ASSIGN);
            break;
          }

          case IrdlParser::NotIdWord: {
            setState(747);
            match(IrdlParser::NotIdWord);
            break;
          }

          case IrdlParser::LESSTHAN: {
            setState(748);
            match(IrdlParser::LESSTHAN);
            setState(751);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
              case IrdlParser::ASSIGN: {
                setState(749);
                match(IrdlParser::ASSIGN);
                break;
              }

              case IrdlParser::DescriptionID:
              case IrdlParser::ComponentID:
              case IrdlParser::AtID:
              case IrdlParser::TimeOutID:
              case IrdlParser::MilliSekID:
              case IrdlParser::SekID:
              case IrdlParser::NameID:
              case IrdlParser::LabelID:
              case IrdlParser::EnabledID:
              case IrdlParser::TypeID:
              case IrdlParser::TriggerID:
              case IrdlParser::MessageTrigger:
              case IrdlParser::ThisID:
              case IrdlParser::AttributeID:
              case IrdlParser::SignalID:
              case IrdlParser::ImportID:
              case IrdlParser::FromID:
              case IrdlParser::ToID:
              case IrdlParser::SendID:
              case IrdlParser::NotIdSymbol:
              case IrdlParser::NotIdWord:
              case IrdlParser::TrueID:
              case IrdlParser::FalseID:
              case IrdlParser::INT:
              case IrdlParser::REAL:
              case IrdlParser::STRING:
              case IrdlParser::ID:
              case IrdlParser::LPAREN:
              case IrdlParser::MINUS: {
                break;
              }

            default:
              throw NoViableAltException(this);
            }
            break;
          }

          case IrdlParser::GREATERTHAN: {
            setState(753);
            match(IrdlParser::GREATERTHAN);
            setState(756);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
              case IrdlParser::ASSIGN: {
                setState(754);
                match(IrdlParser::ASSIGN);
                break;
              }

              case IrdlParser::DescriptionID:
              case IrdlParser::ComponentID:
              case IrdlParser::AtID:
              case IrdlParser::TimeOutID:
              case IrdlParser::MilliSekID:
              case IrdlParser::SekID:
              case IrdlParser::NameID:
              case IrdlParser::LabelID:
              case IrdlParser::EnabledID:
              case IrdlParser::TypeID:
              case IrdlParser::TriggerID:
              case IrdlParser::MessageTrigger:
              case IrdlParser::ThisID:
              case IrdlParser::AttributeID:
              case IrdlParser::SignalID:
              case IrdlParser::ImportID:
              case IrdlParser::FromID:
              case IrdlParser::ToID:
              case IrdlParser::SendID:
              case IrdlParser::NotIdSymbol:
              case IrdlParser::NotIdWord:
              case IrdlParser::TrueID:
              case IrdlParser::FalseID:
              case IrdlParser::INT:
              case IrdlParser::REAL:
              case IrdlParser::STRING:
              case IrdlParser::ID:
              case IrdlParser::LPAREN:
              case IrdlParser::MINUS: {
                break;
              }

            default:
              throw NoViableAltException(this);
            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(760);
        expression();
        break;
      }

      case IrdlParser::RPAREN:
      case IrdlParser::RBRACKET:
      case IrdlParser::SEMI: {
        enterOuterAlt(_localctx, 2);

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

//----------------- ConditionalStatementContext ------------------------------------------------------------------

IrdlParser::ConditionalStatementContext::ConditionalStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IrdlParser::IfStatementContext* IrdlParser::ConditionalStatementContext::ifStatement() {
  return getRuleContext<IrdlParser::IfStatementContext>(0);
}

IrdlParser::ElseStatementContext* IrdlParser::ConditionalStatementContext::elseStatement() {
  return getRuleContext<IrdlParser::ElseStatementContext>(0);
}


size_t IrdlParser::ConditionalStatementContext::getRuleIndex() const {
  return IrdlParser::RuleConditionalStatement;
}

void IrdlParser::ConditionalStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalStatement(this);
}

void IrdlParser::ConditionalStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalStatement(this);
}

IrdlParser::ConditionalStatementContext* IrdlParser::conditionalStatement() {
  ConditionalStatementContext *_localctx = _tracker.createInstance<ConditionalStatementContext>(_ctx, getState());
  enterRule(_localctx, 148, IrdlParser::RuleConditionalStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(764);
    ifStatement();
    setState(767);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      setState(765);
      elseStatement();
      break;
    }

    case 2: {
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

IrdlParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::IfStatementContext::IfID() {
  return getToken(IrdlParser::IfID, 0);
}

IrdlParser::IfEuTContext* IrdlParser::IfStatementContext::ifEuT() {
  return getRuleContext<IrdlParser::IfEuTContext>(0);
}

IrdlParser::StatementDeclContext* IrdlParser::IfStatementContext::statementDecl() {
  return getRuleContext<IrdlParser::StatementDeclContext>(0);
}

tree::TerminalNode* IrdlParser::IfStatementContext::SEMI() {
  return getToken(IrdlParser::SEMI, 0);
}


size_t IrdlParser::IfStatementContext::getRuleIndex() const {
  return IrdlParser::RuleIfStatement;
}

void IrdlParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void IrdlParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

IrdlParser::IfStatementContext* IrdlParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 150, IrdlParser::RuleIfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(769);
    match(IrdlParser::IfID);
    setState(770);
    ifEuT();
    setState(773);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::IntID:
      case IrdlParser::RealID:
      case IrdlParser::BoolID:
      case IrdlParser::StringID:
      case IrdlParser::ThisID:
      case IrdlParser::ReturnID:
      case IrdlParser::EnumID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::SwitchID:
      case IrdlParser::IfID:
      case IrdlParser::BREAK:
      case IrdlParser::ID:
      case IrdlParser::LBRACE: {
        setState(771);
        statementDecl();
        break;
      }

      case IrdlParser::SEMI: {
        setState(772);
        match(IrdlParser::SEMI);
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

//----------------- IfEuTContext ------------------------------------------------------------------

IrdlParser::IfEuTContext::IfEuTContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::IfEuTContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

IrdlParser::ExpressionContext* IrdlParser::IfEuTContext::expression() {
  return getRuleContext<IrdlParser::ExpressionContext>(0);
}

tree::TerminalNode* IrdlParser::IfEuTContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}


size_t IrdlParser::IfEuTContext::getRuleIndex() const {
  return IrdlParser::RuleIfEuT;
}

void IrdlParser::IfEuTContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfEuT(this);
}

void IrdlParser::IfEuTContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfEuT(this);
}

IrdlParser::IfEuTContext* IrdlParser::ifEuT() {
  IfEuTContext *_localctx = _tracker.createInstance<IfEuTContext>(_ctx, getState());
  enterRule(_localctx, 152, IrdlParser::RuleIfEuT);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(775);
    match(IrdlParser::LPAREN);
    setState(776);
    expression();
    setState(777);
    match(IrdlParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

IrdlParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::ElseStatementContext::ElseID() {
  return getToken(IrdlParser::ElseID, 0);
}

IrdlParser::StatementDeclContext* IrdlParser::ElseStatementContext::statementDecl() {
  return getRuleContext<IrdlParser::StatementDeclContext>(0);
}


size_t IrdlParser::ElseStatementContext::getRuleIndex() const {
  return IrdlParser::RuleElseStatement;
}

void IrdlParser::ElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStatement(this);
}

void IrdlParser::ElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStatement(this);
}

IrdlParser::ElseStatementContext* IrdlParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 154, IrdlParser::RuleElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(779);
    match(IrdlParser::ElseID);
    setState(780);
    statementDecl();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

IrdlParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::SwitchStatementContext::SwitchID() {
  return getToken(IrdlParser::SwitchID, 0);
}

IrdlParser::SwitchPuTContext* IrdlParser::SwitchStatementContext::switchPuT() {
  return getRuleContext<IrdlParser::SwitchPuTContext>(0);
}

tree::TerminalNode* IrdlParser::SwitchStatementContext::LBRACE() {
  return getToken(IrdlParser::LBRACE, 0);
}

tree::TerminalNode* IrdlParser::SwitchStatementContext::RBRACE() {
  return getToken(IrdlParser::RBRACE, 0);
}

IrdlParser::DefaultStatementContext* IrdlParser::SwitchStatementContext::defaultStatement() {
  return getRuleContext<IrdlParser::DefaultStatementContext>(0);
}

std::vector<IrdlParser::CaseStatementContext *> IrdlParser::SwitchStatementContext::caseStatement() {
  return getRuleContexts<IrdlParser::CaseStatementContext>();
}

IrdlParser::CaseStatementContext* IrdlParser::SwitchStatementContext::caseStatement(size_t i) {
  return getRuleContext<IrdlParser::CaseStatementContext>(i);
}


size_t IrdlParser::SwitchStatementContext::getRuleIndex() const {
  return IrdlParser::RuleSwitchStatement;
}

void IrdlParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void IrdlParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}

IrdlParser::SwitchStatementContext* IrdlParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 156, IrdlParser::RuleSwitchStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(782);
    match(IrdlParser::SwitchID);
    setState(783);
    switchPuT();
    setState(784);
    match(IrdlParser::LBRACE);
    setState(788);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IrdlParser::CaseID) {
      setState(785);
      caseStatement();
      setState(790);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(793);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::DefaultID: {
        setState(791);
        defaultStatement();
        break;
      }

      case IrdlParser::RBRACE: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(795);
    match(IrdlParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchPuTContext ------------------------------------------------------------------

IrdlParser::SwitchPuTContext::SwitchPuTContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::SwitchPuTContext::LPAREN() {
  return getToken(IrdlParser::LPAREN, 0);
}

IrdlParser::ContextIDContext* IrdlParser::SwitchPuTContext::contextID() {
  return getRuleContext<IrdlParser::ContextIDContext>(0);
}

tree::TerminalNode* IrdlParser::SwitchPuTContext::RPAREN() {
  return getToken(IrdlParser::RPAREN, 0);
}


size_t IrdlParser::SwitchPuTContext::getRuleIndex() const {
  return IrdlParser::RuleSwitchPuT;
}

void IrdlParser::SwitchPuTContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchPuT(this);
}

void IrdlParser::SwitchPuTContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchPuT(this);
}

IrdlParser::SwitchPuTContext* IrdlParser::switchPuT() {
  SwitchPuTContext *_localctx = _tracker.createInstance<SwitchPuTContext>(_ctx, getState());
  enterRule(_localctx, 158, IrdlParser::RuleSwitchPuT);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(797);
    match(IrdlParser::LPAREN);
    setState(798);
    contextID();
    setState(799);
    match(IrdlParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseStatementContext ------------------------------------------------------------------

IrdlParser::CaseStatementContext::CaseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::CaseStatementContext::CaseID() {
  return getToken(IrdlParser::CaseID, 0);
}

IrdlParser::LiteralValueContext* IrdlParser::CaseStatementContext::literalValue() {
  return getRuleContext<IrdlParser::LiteralValueContext>(0);
}

tree::TerminalNode* IrdlParser::CaseStatementContext::COLON() {
  return getToken(IrdlParser::COLON, 0);
}

IrdlParser::NestedStatementBodyContext* IrdlParser::CaseStatementContext::nestedStatementBody() {
  return getRuleContext<IrdlParser::NestedStatementBodyContext>(0);
}

std::vector<IrdlParser::StatementBodyContext *> IrdlParser::CaseStatementContext::statementBody() {
  return getRuleContexts<IrdlParser::StatementBodyContext>();
}

IrdlParser::StatementBodyContext* IrdlParser::CaseStatementContext::statementBody(size_t i) {
  return getRuleContext<IrdlParser::StatementBodyContext>(i);
}


size_t IrdlParser::CaseStatementContext::getRuleIndex() const {
  return IrdlParser::RuleCaseStatement;
}

void IrdlParser::CaseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseStatement(this);
}

void IrdlParser::CaseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseStatement(this);
}

IrdlParser::CaseStatementContext* IrdlParser::caseStatement() {
  CaseStatementContext *_localctx = _tracker.createInstance<CaseStatementContext>(_ctx, getState());
  enterRule(_localctx, 160, IrdlParser::RuleCaseStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(801);
    match(IrdlParser::CaseID);
    setState(802);
    literalValue();
    setState(803);
    match(IrdlParser::COLON);
    setState(811);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::LBRACE: {
        setState(804);
        nestedStatementBody();
        break;
      }

      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::IntID:
      case IrdlParser::RealID:
      case IrdlParser::BoolID:
      case IrdlParser::StringID:
      case IrdlParser::ThisID:
      case IrdlParser::ReturnID:
      case IrdlParser::EnumID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::SwitchID:
      case IrdlParser::CaseID:
      case IrdlParser::DefaultID:
      case IrdlParser::IfID:
      case IrdlParser::BREAK:
      case IrdlParser::ID:
      case IrdlParser::RBRACE: {
        setState(808);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 3) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 3)) & ((1ULL << (IrdlParser::DescriptionID - 3))
          | (1ULL << (IrdlParser::ComponentID - 3))
          | (1ULL << (IrdlParser::AtID - 3))
          | (1ULL << (IrdlParser::TimeOutID - 3))
          | (1ULL << (IrdlParser::MilliSekID - 3))
          | (1ULL << (IrdlParser::SekID - 3))
          | (1ULL << (IrdlParser::NameID - 3))
          | (1ULL << (IrdlParser::LabelID - 3))
          | (1ULL << (IrdlParser::EnabledID - 3))
          | (1ULL << (IrdlParser::TypeID - 3))
          | (1ULL << (IrdlParser::IntID - 3))
          | (1ULL << (IrdlParser::RealID - 3))
          | (1ULL << (IrdlParser::BoolID - 3))
          | (1ULL << (IrdlParser::StringID - 3))
          | (1ULL << (IrdlParser::ThisID - 3))
          | (1ULL << (IrdlParser::ReturnID - 3))
          | (1ULL << (IrdlParser::EnumID - 3))
          | (1ULL << (IrdlParser::AttributeID - 3))
          | (1ULL << (IrdlParser::SignalID - 3))
          | (1ULL << (IrdlParser::ImportID - 3))
          | (1ULL << (IrdlParser::FromID - 3))
          | (1ULL << (IrdlParser::ToID - 3))
          | (1ULL << (IrdlParser::SendID - 3))
          | (1ULL << (IrdlParser::SwitchID - 3))
          | (1ULL << (IrdlParser::IfID - 3))
          | (1ULL << (IrdlParser::BREAK - 3))
          | (1ULL << (IrdlParser::ID - 3)))) != 0)) {
          setState(805);
          statementBody();
          setState(810);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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

//----------------- DefaultStatementContext ------------------------------------------------------------------

IrdlParser::DefaultStatementContext::DefaultStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IrdlParser::DefaultStatementContext::DefaultID() {
  return getToken(IrdlParser::DefaultID, 0);
}

tree::TerminalNode* IrdlParser::DefaultStatementContext::COLON() {
  return getToken(IrdlParser::COLON, 0);
}

IrdlParser::NestedStatementBodyContext* IrdlParser::DefaultStatementContext::nestedStatementBody() {
  return getRuleContext<IrdlParser::NestedStatementBodyContext>(0);
}

std::vector<IrdlParser::StatementBodyContext *> IrdlParser::DefaultStatementContext::statementBody() {
  return getRuleContexts<IrdlParser::StatementBodyContext>();
}

IrdlParser::StatementBodyContext* IrdlParser::DefaultStatementContext::statementBody(size_t i) {
  return getRuleContext<IrdlParser::StatementBodyContext>(i);
}


size_t IrdlParser::DefaultStatementContext::getRuleIndex() const {
  return IrdlParser::RuleDefaultStatement;
}

void IrdlParser::DefaultStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultStatement(this);
}

void IrdlParser::DefaultStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IrdlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultStatement(this);
}

IrdlParser::DefaultStatementContext* IrdlParser::defaultStatement() {
  DefaultStatementContext *_localctx = _tracker.createInstance<DefaultStatementContext>(_ctx, getState());
  enterRule(_localctx, 162, IrdlParser::RuleDefaultStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(813);
    match(IrdlParser::DefaultID);
    setState(814);
    match(IrdlParser::COLON);
    setState(822);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IrdlParser::LBRACE: {
        setState(815);
        nestedStatementBody();
        break;
      }

      case IrdlParser::DescriptionID:
      case IrdlParser::ComponentID:
      case IrdlParser::AtID:
      case IrdlParser::TimeOutID:
      case IrdlParser::MilliSekID:
      case IrdlParser::SekID:
      case IrdlParser::NameID:
      case IrdlParser::LabelID:
      case IrdlParser::EnabledID:
      case IrdlParser::TypeID:
      case IrdlParser::IntID:
      case IrdlParser::RealID:
      case IrdlParser::BoolID:
      case IrdlParser::StringID:
      case IrdlParser::ThisID:
      case IrdlParser::ReturnID:
      case IrdlParser::EnumID:
      case IrdlParser::AttributeID:
      case IrdlParser::SignalID:
      case IrdlParser::ImportID:
      case IrdlParser::FromID:
      case IrdlParser::ToID:
      case IrdlParser::SendID:
      case IrdlParser::SwitchID:
      case IrdlParser::IfID:
      case IrdlParser::BREAK:
      case IrdlParser::ID:
      case IrdlParser::RBRACE: {
        setState(819);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (((((_la - 3) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 3)) & ((1ULL << (IrdlParser::DescriptionID - 3))
          | (1ULL << (IrdlParser::ComponentID - 3))
          | (1ULL << (IrdlParser::AtID - 3))
          | (1ULL << (IrdlParser::TimeOutID - 3))
          | (1ULL << (IrdlParser::MilliSekID - 3))
          | (1ULL << (IrdlParser::SekID - 3))
          | (1ULL << (IrdlParser::NameID - 3))
          | (1ULL << (IrdlParser::LabelID - 3))
          | (1ULL << (IrdlParser::EnabledID - 3))
          | (1ULL << (IrdlParser::TypeID - 3))
          | (1ULL << (IrdlParser::IntID - 3))
          | (1ULL << (IrdlParser::RealID - 3))
          | (1ULL << (IrdlParser::BoolID - 3))
          | (1ULL << (IrdlParser::StringID - 3))
          | (1ULL << (IrdlParser::ThisID - 3))
          | (1ULL << (IrdlParser::ReturnID - 3))
          | (1ULL << (IrdlParser::EnumID - 3))
          | (1ULL << (IrdlParser::AttributeID - 3))
          | (1ULL << (IrdlParser::SignalID - 3))
          | (1ULL << (IrdlParser::ImportID - 3))
          | (1ULL << (IrdlParser::FromID - 3))
          | (1ULL << (IrdlParser::ToID - 3))
          | (1ULL << (IrdlParser::SendID - 3))
          | (1ULL << (IrdlParser::SwitchID - 3))
          | (1ULL << (IrdlParser::IfID - 3))
          | (1ULL << (IrdlParser::BREAK - 3))
          | (1ULL << (IrdlParser::ID - 3)))) != 0)) {
          setState(816);
          statementBody();
          setState(821);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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

// Static vars and initialization.
std::vector<dfa::DFA> IrdlParser::_decisionToDFA;
atn::PredictionContextCache IrdlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN IrdlParser::_atn;
std::vector<uint16_t> IrdlParser::_serializedATN;

std::vector<std::string> IrdlParser::_ruleNames = {
  "timerNameID", "attributeAssignStatement", "atom", "irdlDecl", "requirementBody", 
  "aliasDef", "declarations", "componentDecl", "componentBody", "actorDecl", 
  "actorBody", "descriptionDecl", "sequenceDecl", "stateDecl", "lifelineList", 
  "lifelineListOptional", "messageSignal", "messageSignalBody", "messageSignalBodyOptional", 
  "messageDecl", "checkDecl", "checkDeclBody", "timerDecl", "timeOutDecl", 
  "altDecl", "altBody", "altBodyOptional", "durationDecl", "contextID", 
  "componentIdPath", "signalIdPath", "attributeIdPath", "signalSend", "commonDecl", 
  "importPathDecl", "importPathBody", "importFileBody", "importAs", "typeDefDecl", 
  "typeDecl", "intTypeDecl", "realTypeDecl", "enumTypeDecl", "attributeDecl", 
  "literalValue", "signalParamName", "attributeName", "toPortName", "localAssignStatement", 
  "sendToStatement", "singleAssignment", "multiAssignment", "signalDecl", 
  "paramDecl", "functionDecl", "functionParameters", "functionCall", "functionCallBody", 
  "functionCallBodyOptional", "triggerDecl", "thisDecl", "portDecl", "nameDecl", 
  "idPath", "statementDecl", "statementBody", "functionCallStatement", "nestedStatementBody", 
  "returnStatement", "breakStatement", "operation", "operationOptional", 
  "expression", "expressionOptional", "conditionalStatement", "ifStatement", 
  "ifEuT", "elseStatement", "switchStatement", "switchPuT", "caseStatement", 
  "defaultStatement"
};

std::vector<std::string> IrdlParser::_literalNames = {
  "", "'use'", "'Requirement'", "'description'", "'Component'", "'Actor'", 
  "'State'", "'at'", "'all'", "'Message'", "'Check'", "'Timer'", "'timeout'", 
  "'Alt'", "'Duration'", "'ms'", "'s'", "", "'name'", "'label'", "'enabled'", 
  "'Type'", "'int'", "'real'", "'bool'", "'string'", "'trigger'", "'msg'", 
  "'this'", "'return'", "'SignalTransition'", "'TimeoutTransition'", "'enum'", 
  "'Declaration'", "'Attribute'", "'Signal'", "'Port'", "'import'", "'from'", 
  "'to'", "'send'", "'Function'", "'switch'", "'case'", "'default'", "'if'", 
  "'else'", "'as'", "'!'", "'&&'", "'||'", "'not'", "'and'", "'or'", "'true'", 
  "'false'", "'break'", "'='", "'<->'", "'->'", "'<-'", "'..'", "", "", 
  "", "", "", "", "'('", "')'", "'{'", "'}'", "'['", "']'", "'<'", "'>'", 
  "':'", "';'", "','", "'_'", "'.'", "'+'", "'-'", "'*'", "'/'", "'|'", 
  "'&'", "'const'"
};

std::vector<std::string> IrdlParser::_symbolicNames = {
  "", "UseID", "RequirementID", "DescriptionID", "ComponentID", "ActorID", 
  "StateID", "AtID", "AllID", "MessageID", "CheckID", "TimerID", "TimeOutID", 
  "AltID", "DurationID", "MilliSekID", "SekID", "IGNORE_NEWLINE", "NameID", 
  "LabelID", "EnabledID", "TypeID", "IntID", "RealID", "BoolID", "StringID", 
  "TriggerID", "MessageTrigger", "ThisID", "ReturnID", "SignalTransitionID", 
  "TimeoutTransitionID", "EnumID", "DeclarationID", "AttributeID", "SignalID", 
  "PortID", "ImportID", "FromID", "ToID", "SendID", "FunctionID", "SwitchID", 
  "CaseID", "DefaultID", "IfID", "ElseID", "AsID", "NotIdSymbol", "AndIdSymbol", 
  "OrIdSymbol", "NotIdWord", "AndIdWord", "OrIdWord", "TrueID", "FalseID", 
  "BREAK", "ASSIGN", "DoubleArrow", "RightArrow", "LeftArrow", "RANGE", 
  "INT", "REAL", "STRING", "ID", "LINE_COMMENT", "COMMENT", "LPAREN", "RPAREN", 
  "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "LESSTHAN", "GREATERTHAN", 
  "COLON", "SEMI", "COMMA", "UNDER", "DOT", "PLUS", "MINUS", "MULT", "DIV", 
  "PIPE", "REF", "CONST", "NEWLINE", "WS"
};

dfa::Vocabulary IrdlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> IrdlParser::_tokenNames;

IrdlParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x5b, 0x33b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0xae, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xbe, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0xea, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xf4, 0xa, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x7, 0xa, 0xf8, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xfb, 0xb, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0x105, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x109, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x10c, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x129, 0xa, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x135, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0x13a, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x5, 0x12, 0x140, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x148, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x14f, 0xa, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x16b, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 
    0x1b, 0x184, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x18f, 
    0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x19f, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 
    0x1a2, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x1a7, 
    0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x1aa, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x1b0, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 
    0x1b3, 0xb, 0x21, 0x5, 0x21, 0x1b5, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 
    0x23, 0x1bf, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x1c2, 0xb, 0x23, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1c8, 0xa, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x1db, 0xa, 0x26, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x1e0, 0xa, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x1ed, 0xa, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x5, 0x2a, 0x1f6, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x1ff, 0xa, 0x2b, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x206, 
    0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x209, 0xb, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x212, 
    0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x21c, 0xa, 0x2e, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x223, 0xa, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x22f, 0xa, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 
    0x33, 0x237, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x5, 0x34, 0x23d, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x241, 
    0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x244, 0xb, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 
    0x36, 0x24e, 0xa, 0x36, 0xc, 0x36, 0xe, 0x36, 0x251, 0xb, 0x36, 0x3, 
    0x36, 0x5, 0x36, 0x254, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 
    0x258, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 
    0x38, 0x265, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x7, 0x39, 0x26d, 0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 
    0x270, 0xb, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x27c, 
    0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 
    0x3c, 0x283, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 
    0x3f, 0x28f, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x292, 0xb, 0x3f, 0x3, 
    0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x29e, 0xa, 0x41, 0xc, 0x41, 
    0xe, 0x41, 0x2a1, 0xb, 0x41, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x2a5, 
    0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
    0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x2af, 0xa, 0x43, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x7, 0x45, 0x2b6, 0xa, 0x45, 
    0xc, 0x45, 0xe, 0x45, 0x2b9, 0xb, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
    0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x2cf, 0xa, 0x48, 
    0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x2d4, 0xa, 0x49, 0x3, 0x4a, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x5, 0x4a, 0x2e4, 0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 
    0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x2f2, 0xa, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4b, 0x5, 0x4b, 0x2f7, 0xa, 0x4b, 0x5, 0x4b, 0x2f9, 0xa, 0x4b, 
    0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x2fd, 0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x5, 0x4c, 0x302, 0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x5, 0x4d, 0x308, 0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 
    0x50, 0x3, 0x50, 0x7, 0x50, 0x315, 0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 
    0x318, 0xb, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x31c, 0xa, 0x50, 
    0x3, 0x50, 0x3, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 
    0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x7, 0x52, 0x329, 
    0xa, 0x52, 0xc, 0x52, 0xe, 0x52, 0x32c, 0xb, 0x52, 0x5, 0x52, 0x32e, 
    0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 0x334, 
    0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 0x337, 0xb, 0x53, 0x5, 0x53, 0x339, 
    0xa, 0x53, 0x3, 0x53, 0x2, 0x2, 0x54, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
    0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
    0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
    0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 
    0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 
    0x9e, 0xa0, 0xa2, 0xa4, 0x2, 0x7, 0x3, 0x2, 0x40, 0x41, 0x3, 0x2, 0x11, 
    0x12, 0xa, 0x2, 0x5, 0x6, 0x9, 0x9, 0xe, 0xe, 0x11, 0x12, 0x14, 0x17, 
    0x24, 0x25, 0x27, 0x2a, 0x43, 0x43, 0x3, 0x2, 0x1c, 0x1d, 0x3, 0x2, 
    0x53, 0x56, 0x2, 0x358, 0x2, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x4, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x8, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0xe9, 0x3, 0x2, 0x2, 0x2, 0x10, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x12, 0xf0, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x16, 0x101, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x128, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x134, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x139, 0x3, 0x2, 0x2, 0x2, 0x22, 0x13b, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x147, 0x3, 0x2, 0x2, 0x2, 0x26, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x150, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x164, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x30, 0x175, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x34, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x38, 0x190, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x199, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x19b, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x1b6, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1c7, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1da, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1e1, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1ee, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x56, 0x200, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x21d, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x222, 0x3, 0x2, 0x2, 0x2, 0x60, 0x226, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x229, 0x3, 0x2, 0x2, 0x2, 0x64, 0x232, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x68, 0x23e, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x247, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x25b, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x269, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x271, 0x3, 0x2, 0x2, 0x2, 0x74, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x282, 0x3, 0x2, 0x2, 0x2, 0x78, 0x284, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x287, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x295, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x82, 0x2a4, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x86, 0x2b0, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x2bc, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x2d3, 0x3, 0x2, 0x2, 0x2, 0x92, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x94, 0x2fc, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x98, 0x303, 0x3, 
    0x2, 0x2, 0x2, 0x9a, 0x309, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x30d, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x310, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x31f, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0x323, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x32f, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa7, 0x5, 0x3a, 0x1e, 0x2, 0xa7, 0x3, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0xa9, 0x5, 0x40, 0x21, 0x2, 0xa9, 0xad, 0x7, 0x3b, 0x2, 0x2, 0xaa, 0xae, 
    0x5, 0x5a, 0x2e, 0x2, 0xab, 0xae, 0x5, 0x5c, 0x2f, 0x2, 0xac, 0xae, 
    0x5, 0x40, 0x21, 0x2, 0xad, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 
    0x2, 0x2, 0x2, 0xad, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xaf, 0xb0, 0x7, 0x4f, 0x2, 0x2, 0xb0, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xbe, 0x5, 0x5a, 0x2e, 0x2, 0xb2, 0xbe, 0x5, 0x5c, 0x2f, 
    0x2, 0xb3, 0xb4, 0x7, 0x1e, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x52, 0x2, 0x2, 
    0xb5, 0xbe, 0x5, 0x3a, 0x1e, 0x2, 0xb6, 0xbe, 0x5, 0x40, 0x21, 0x2, 
    0xb7, 0xb8, 0x5, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x52, 0x2, 0x2, 0xb9, 
    0xba, 0x7, 0xe, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x46, 0x2, 0x2, 0xbb, 0xbc, 
    0x7, 0x47, 0x2, 0x2, 0xbc, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xb1, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xb7, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0x7, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x5, 0x46, 0x24, 0x2, 
    0xc0, 0xc1, 0x7, 0x4, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x48, 0x2, 0x2, 0xc2, 
    0xc3, 0x5, 0xa, 0x6, 0x2, 0xc3, 0xc4, 0x7, 0x49, 0x2, 0x2, 0xc4, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x23, 0x2, 0x2, 0xc6, 0xc7, 0x7, 
    0x48, 0x2, 0x2, 0xc7, 0xc8, 0x5, 0x7e, 0x40, 0x2, 0xc8, 0xc9, 0x5, 0xe, 
    0x8, 0x2, 0xc9, 0xca, 0x7, 0x49, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 
    0x2, 0xcb, 0xcc, 0x5, 0x1a, 0xe, 0x2, 0xcc, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0xcd, 0xce, 0x7, 0x3, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x3c, 0x1f, 0x2, 0xcf, 
    0xd0, 0x7, 0x31, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x3a, 0x1e, 0x2, 0xd1, 0xd2, 
    0x7, 0x4f, 0x2, 0x2, 0xd2, 0xd, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x5, 
    0x58, 0x2d, 0x2, 0xd4, 0xd5, 0x5, 0xe, 0x8, 0x2, 0xd5, 0xea, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd7, 0x5, 0x4e, 0x28, 0x2, 0xd7, 0xd8, 0x5, 0xe, 0x8, 
    0x2, 0xd8, 0xea, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x6a, 0x36, 0x2, 
    0xda, 0xdb, 0x5, 0xe, 0x8, 0x2, 0xdb, 0xea, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0xdd, 0x5, 0xc, 0x7, 0x2, 0xdd, 0xde, 0x5, 0xe, 0x8, 0x2, 0xde, 0xea, 
    0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0x10, 0x9, 0x2, 0xe0, 0xe1, 0x5, 
    0xe, 0x8, 0x2, 0xe1, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x14, 
    0xb, 0x2, 0xe3, 0xe4, 0x5, 0xe, 0x8, 0x2, 0xe4, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0xe5, 0xe6, 0x5, 0x18, 0xd, 0x2, 0xe6, 0xe7, 0x5, 0xe, 0x8, 0x2, 
    0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe9, 
    0xd3, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0xe9, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xdf, 0x3, 
    0x2, 0x2, 0x2, 0xe9, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0xe9, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xec, 0x7, 0x6, 0x2, 0x2, 0xec, 0xed, 0x7, 0x48, 0x2, 0x2, 
    0xed, 0xee, 0x5, 0x12, 0xa, 0x2, 0xee, 0xef, 0x7, 0x49, 0x2, 0x2, 0xef, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf3, 0x5, 0x7e, 0x40, 0x2, 0xf1, 0xf4, 
    0x5, 0x18, 0xd, 0x2, 0xf2, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0xf3, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0xf5, 0xf9, 0x5, 0x44, 0x23, 0x2, 0xf6, 0xf8, 0x5, 0x7c, 0x3f, 
    0x2, 0xf7, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 
    0x7, 0x7, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x48, 0x2, 0x2, 0xfe, 0xff, 0x5, 
    0x16, 0xc, 0x2, 0xff, 0x100, 0x7, 0x49, 0x2, 0x2, 0x100, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0x104, 0x5, 0x7e, 0x40, 0x2, 0x102, 0x105, 0x5, 
    0x18, 0xd, 0x2, 0x103, 0x105, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 
    0x2, 0x2, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x10a, 0x5, 0x44, 0x23, 0x2, 0x107, 0x109, 0x5, 
    0x7c, 0x3f, 0x2, 0x108, 0x107, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10c, 0x3, 
    0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 
    0x2, 0x2, 0x2, 0x10b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10a, 0x3, 0x2, 
    0x2, 0x2, 0x10d, 0x10e, 0x7, 0x5, 0x2, 0x2, 0x10e, 0x10f, 0x7, 0x4e, 
    0x2, 0x2, 0x10f, 0x110, 0x7, 0x42, 0x2, 0x2, 0x110, 0x111, 0x7, 0x4f, 
    0x2, 0x2, 0x111, 0x19, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x5, 0x1c, 
    0xf, 0x2, 0x113, 0x114, 0x5, 0x1a, 0xe, 0x2, 0x114, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x116, 0x5, 0x28, 0x15, 0x2, 0x116, 0x117, 0x5, 0x1a, 
    0xe, 0x2, 0x117, 0x129, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x5, 0x2a, 
    0x16, 0x2, 0x119, 0x11a, 0x5, 0x1a, 0xe, 0x2, 0x11a, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x11b, 0x11c, 0x5, 0x32, 0x1a, 0x2, 0x11c, 0x11d, 0x5, 0x1a, 
    0xe, 0x2, 0x11d, 0x129, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x5, 0x2e, 
    0x18, 0x2, 0x11f, 0x120, 0x5, 0x1a, 0xe, 0x2, 0x120, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x122, 0x5, 0x38, 0x1d, 0x2, 0x122, 0x123, 0x5, 0x1a, 
    0xe, 0x2, 0x123, 0x129, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x5, 0x4, 
    0x3, 0x2, 0x125, 0x126, 0x5, 0x1a, 0xe, 0x2, 0x126, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x129, 0x3, 0x2, 0x2, 0x2, 0x128, 0x112, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x115, 0x3, 0x2, 0x2, 0x2, 0x128, 0x118, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x128, 0x11e, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x121, 0x3, 0x2, 0x2, 0x2, 0x128, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x12a, 0x12b, 0x7, 0x8, 0x2, 0x2, 0x12b, 0x12c, 0x5, 0x3a, 0x1e, 
    0x2, 0x12c, 0x12d, 0x7, 0x9, 0x2, 0x2, 0x12d, 0x12e, 0x5, 0x1e, 0x10, 
    0x2, 0x12e, 0x12f, 0x7, 0x4f, 0x2, 0x2, 0x12f, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0x135, 0x7, 0xa, 0x2, 0x2, 0x131, 0x132, 0x5, 0x3c, 0x1f, 
    0x2, 0x132, 0x133, 0x5, 0x20, 0x11, 0x2, 0x133, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0x130, 0x3, 0x2, 0x2, 0x2, 0x134, 0x131, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x7, 0x50, 0x2, 
    0x2, 0x137, 0x13a, 0x5, 0x1e, 0x10, 0x2, 0x138, 0x13a, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x136, 0x3, 0x2, 0x2, 0x2, 0x139, 0x138, 0x3, 0x2, 0x2, 
    0x2, 0x13a, 0x21, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x5, 0x3e, 0x20, 
    0x2, 0x13c, 0x13f, 0x7, 0x46, 0x2, 0x2, 0x13d, 0x140, 0x5, 0x24, 0x13, 
    0x2, 0x13e, 0x140, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 
    0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 
    0x2, 0x141, 0x142, 0x7, 0x47, 0x2, 0x2, 0x142, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x143, 0x148, 0x5, 0x5a, 0x2e, 0x2, 0x144, 0x148, 0x5, 0x5c, 0x2f, 
    0x2, 0x145, 0x148, 0x5, 0x40, 0x21, 0x2, 0x146, 0x148, 0x7, 0x55, 0x2, 
    0x2, 0x147, 0x143, 0x3, 0x2, 0x2, 0x2, 0x147, 0x144, 0x3, 0x2, 0x2, 
    0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x146, 0x3, 0x2, 0x2, 
    0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x5, 0x26, 0x14, 
    0x2, 0x14a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x7, 0x50, 0x2, 
    0x2, 0x14c, 0x14f, 0x5, 0x24, 0x13, 0x2, 0x14d, 0x14f, 0x3, 0x2, 0x2, 
    0x2, 0x14e, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14d, 0x3, 0x2, 0x2, 
    0x2, 0x14f, 0x27, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x7, 0xb, 0x2, 0x2, 
    0x151, 0x152, 0x7, 0x46, 0x2, 0x2, 0x152, 0x153, 0x5, 0x3c, 0x1f, 0x2, 
    0x153, 0x154, 0x7, 0x3d, 0x2, 0x2, 0x154, 0x155, 0x5, 0x3c, 0x1f, 0x2, 
    0x155, 0x156, 0x7, 0x47, 0x2, 0x2, 0x156, 0x157, 0x7, 0x4e, 0x2, 0x2, 
    0x157, 0x158, 0x5, 0x22, 0x12, 0x2, 0x158, 0x159, 0x7, 0x4f, 0x2, 0x2, 
    0x159, 0x29, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x7, 0xc, 0x2, 0x2, 0x15b, 
    0x15c, 0x7, 0x46, 0x2, 0x2, 0x15c, 0x15d, 0x5, 0x3c, 0x1f, 0x2, 0x15d, 
    0x15e, 0x7, 0x3d, 0x2, 0x2, 0x15e, 0x15f, 0x5, 0x3c, 0x1f, 0x2, 0x15f, 
    0x160, 0x7, 0x47, 0x2, 0x2, 0x160, 0x161, 0x7, 0x4e, 0x2, 0x2, 0x161, 
    0x162, 0x5, 0x3e, 0x20, 0x2, 0x162, 0x163, 0x5, 0x2c, 0x17, 0x2, 0x163, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x7, 0x4a, 0x2, 0x2, 0x165, 
    0x166, 0x5, 0x92, 0x4a, 0x2, 0x166, 0x16a, 0x7, 0x4b, 0x2, 0x2, 0x167, 
    0x168, 0x7, 0x50, 0x2, 0x2, 0x168, 0x16b, 0x5, 0x30, 0x19, 0x2, 0x169, 
    0x16b, 0x7, 0x4f, 0x2, 0x2, 0x16a, 0x167, 0x3, 0x2, 0x2, 0x2, 0x16a, 
    0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 
    0x7, 0xd, 0x2, 0x2, 0x16d, 0x16e, 0x7, 0x9, 0x2, 0x2, 0x16e, 0x16f, 
    0x5, 0x3c, 0x1f, 0x2, 0x16f, 0x170, 0x5, 0x3a, 0x1e, 0x2, 0x170, 0x171, 
    0x7, 0x3b, 0x2, 0x2, 0x171, 0x172, 0x9, 0x2, 0x2, 0x2, 0x172, 0x173, 
    0x9, 0x3, 0x2, 0x2, 0x173, 0x174, 0x7, 0x4f, 0x2, 0x2, 0x174, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x7, 0xe, 0x2, 0x2, 0x176, 0x177, 
    0x7, 0x4e, 0x2, 0x2, 0x177, 0x178, 0x9, 0x2, 0x2, 0x2, 0x178, 0x179, 
    0x9, 0x3, 0x2, 0x2, 0x179, 0x17a, 0x7, 0x4f, 0x2, 0x2, 0x17a, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x7, 0xf, 0x2, 0x2, 0x17c, 0x17d, 
    0x7, 0x48, 0x2, 0x2, 0x17d, 0x17e, 0x5, 0x36, 0x1c, 0x2, 0x17e, 0x17f, 
    0x7, 0x49, 0x2, 0x2, 0x17f, 0x33, 0x3, 0x2, 0x2, 0x2, 0x180, 0x183, 
    0x7, 0x4a, 0x2, 0x2, 0x181, 0x184, 0x5, 0x92, 0x4a, 0x2, 0x182, 0x184, 
    0x3, 0x2, 0x2, 0x2, 0x183, 0x181, 0x3, 0x2, 0x2, 0x2, 0x183, 0x182, 
    0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 
    0x7, 0x4b, 0x2, 0x2, 0x186, 0x187, 0x7, 0x48, 0x2, 0x2, 0x187, 0x188, 
    0x5, 0x1a, 0xe, 0x2, 0x188, 0x189, 0x7, 0x49, 0x2, 0x2, 0x189, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x5, 0x34, 0x1b, 0x2, 0x18b, 0x18c, 
    0x5, 0x36, 0x1c, 0x2, 0x18c, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18f, 
    0x3, 0x2, 0x2, 0x2, 0x18e, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18d, 
    0x3, 0x2, 0x2, 0x2, 0x18f, 0x37, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x7, 
    0x10, 0x2, 0x2, 0x191, 0x192, 0x7, 0x46, 0x2, 0x2, 0x192, 0x193, 0x9, 
    0x2, 0x2, 0x2, 0x193, 0x194, 0x9, 0x3, 0x2, 0x2, 0x194, 0x195, 0x7, 
    0x47, 0x2, 0x2, 0x195, 0x196, 0x7, 0x48, 0x2, 0x2, 0x196, 0x197, 0x5, 
    0x1a, 0xe, 0x2, 0x197, 0x198, 0x7, 0x49, 0x2, 0x2, 0x198, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x199, 0x19a, 0x9, 0x4, 0x2, 0x2, 0x19a, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x19b, 0x1a0, 0x5, 0x3a, 0x1e, 0x2, 0x19c, 0x19d, 0x7, 0x52, 
    0x2, 0x2, 0x19d, 0x19f, 0x5, 0x3a, 0x1e, 0x2, 0x19e, 0x19c, 0x3, 0x2, 
    0x2, 0x2, 0x19f, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 
    0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x1a2, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a8, 0x5, 0x3a, 0x1e, 
    0x2, 0x1a4, 0x1a5, 0x7, 0x52, 0x2, 0x2, 0x1a5, 0x1a7, 0x5, 0x3a, 0x1e, 
    0x2, 0x1a6, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1aa, 0x3, 0x2, 0x2, 
    0x2, 0x1a8, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 
    0x2, 0x1a9, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1ab, 0x1b5, 0x5, 0x5e, 0x30, 0x2, 0x1ac, 0x1b1, 0x5, 0x3a, 0x1e, 0x2, 
    0x1ad, 0x1ae, 0x7, 0x52, 0x2, 0x2, 0x1ae, 0x1b0, 0x5, 0x3a, 0x1e, 0x2, 
    0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b3, 0x3, 0x2, 0x2, 0x2, 
    0x1b1, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b1, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1ac, 0x3, 0x2, 0x2, 0x2, 
    0x1b5, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x5, 0x3e, 0x20, 0x2, 
    0x1b7, 0x1b8, 0x7, 0x46, 0x2, 0x2, 0x1b8, 0x1b9, 0x5, 0x74, 0x3b, 0x2, 
    0x1b9, 0x1ba, 0x7, 0x47, 0x2, 0x2, 0x1ba, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x1bb, 0x1bf, 0x5, 0x4e, 0x28, 0x2, 0x1bc, 0x1bf, 0x5, 0x58, 0x2d, 0x2, 
    0x1bd, 0x1bf, 0x5, 0x6a, 0x36, 0x2, 0x1be, 0x1bb, 0x3, 0x2, 0x2, 0x2, 
    0x1be, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bd, 0x3, 0x2, 0x2, 0x2, 
    0x1bf, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1be, 0x3, 0x2, 0x2, 0x2, 
    0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1c2, 
    0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x5, 0x48, 0x25, 0x2, 0x1c4, 
    0x1c5, 0x5, 0x46, 0x24, 0x2, 0x1c5, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c6, 
    0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c7, 
    0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 
    0x7, 0x27, 0x2, 0x2, 0x1ca, 0x1cb, 0x7, 0x4c, 0x2, 0x2, 0x1cb, 0x1cc, 
    0x5, 0x4a, 0x26, 0x2, 0x1cc, 0x1cd, 0x7, 0x4d, 0x2, 0x2, 0x1cd, 0x1ce, 
    0x5, 0x4c, 0x27, 0x2, 0x1ce, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 
    0x5, 0x3a, 0x1e, 0x2, 0x1d0, 0x1d1, 0x7, 0x52, 0x2, 0x2, 0x1d1, 0x1d2, 
    0x5, 0x3a, 0x1e, 0x2, 0x1d2, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 
    0x7, 0x3f, 0x2, 0x2, 0x1d4, 0x1d5, 0x7, 0x56, 0x2, 0x2, 0x1d5, 0x1db, 
    0x5, 0x4a, 0x26, 0x2, 0x1d6, 0x1d7, 0x5, 0x3a, 0x1e, 0x2, 0x1d7, 0x1d8, 
    0x7, 0x56, 0x2, 0x2, 0x1d8, 0x1d9, 0x5, 0x4a, 0x26, 0x2, 0x1d9, 0x1db, 
    0x3, 0x2, 0x2, 0x2, 0x1da, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1d3, 
    0x3, 0x2, 0x2, 0x2, 0x1da, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 0x31, 0x2, 0x2, 0x1dd, 0x1e0, 0x5, 
    0x3a, 0x1e, 0x2, 0x1de, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1dc, 0x3, 
    0x2, 0x2, 0x2, 0x1df, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x17, 0x2, 0x2, 0x1e2, 0x1e3, 0x5, 0x50, 
    0x29, 0x2, 0x1e3, 0x1e4, 0x5, 0x3a, 0x1e, 0x2, 0x1e4, 0x1e5, 0x7, 0x4f, 
    0x2, 0x2, 0x1e5, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1ed, 0x5, 0x52, 
    0x2a, 0x2, 0x1e7, 0x1ed, 0x5, 0x54, 0x2b, 0x2, 0x1e8, 0x1ed, 0x5, 0x56, 
    0x2c, 0x2, 0x1e9, 0x1ed, 0x7, 0x1a, 0x2, 0x2, 0x1ea, 0x1ed, 0x7, 0x1b, 
    0x2, 0x2, 0x1eb, 0x1ed, 0x5, 0x3a, 0x1e, 0x2, 0x1ec, 0x1e6, 0x3, 0x2, 
    0x2, 0x2, 0x1ec, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1e8, 0x3, 0x2, 
    0x2, 0x2, 0x1ec, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ea, 0x3, 0x2, 
    0x2, 0x2, 0x1ec, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x1ee, 0x1f5, 0x7, 0x18, 0x2, 0x2, 0x1ef, 0x1f0, 0x7, 0x46, 0x2, 
    0x2, 0x1f0, 0x1f1, 0x7, 0x40, 0x2, 0x2, 0x1f1, 0x1f2, 0x7, 0x3f, 0x2, 
    0x2, 0x1f2, 0x1f3, 0x7, 0x40, 0x2, 0x2, 0x1f3, 0x1f6, 0x7, 0x47, 0x2, 
    0x2, 0x1f4, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1ef, 0x3, 0x2, 0x2, 
    0x2, 0x1f5, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x1f7, 0x1fe, 0x7, 0x19, 0x2, 0x2, 0x1f8, 0x1f9, 0x7, 0x46, 0x2, 0x2, 
    0x1f9, 0x1fa, 0x7, 0x41, 0x2, 0x2, 0x1fa, 0x1fb, 0x7, 0x3f, 0x2, 0x2, 
    0x1fb, 0x1fc, 0x7, 0x41, 0x2, 0x2, 0x1fc, 0x1ff, 0x7, 0x47, 0x2, 0x2, 
    0x1fd, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1f8, 0x3, 0x2, 0x2, 0x2, 
    0x1fe, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x55, 0x3, 0x2, 0x2, 0x2, 0x200, 
    0x201, 0x7, 0x22, 0x2, 0x2, 0x201, 0x202, 0x7, 0x46, 0x2, 0x2, 0x202, 
    0x207, 0x5, 0x3a, 0x1e, 0x2, 0x203, 0x204, 0x7, 0x50, 0x2, 0x2, 0x204, 
    0x206, 0x5, 0x3a, 0x1e, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 0x206, 
    0x209, 0x3, 0x2, 0x2, 0x2, 0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 
    0x208, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x209, 
    0x207, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x7, 0x47, 0x2, 0x2, 0x20b, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x7, 0x24, 0x2, 0x2, 0x20d, 
    0x20e, 0x5, 0x50, 0x29, 0x2, 0x20e, 0x211, 0x5, 0x3a, 0x1e, 0x2, 0x20f, 
    0x210, 0x7, 0x3b, 0x2, 0x2, 0x210, 0x212, 0x5, 0x5a, 0x2e, 0x2, 0x211, 
    0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x7, 0x4f, 0x2, 0x2, 0x214, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x215, 0x21c, 0x7, 0x40, 0x2, 0x2, 0x216, 
    0x21c, 0x7, 0x41, 0x2, 0x2, 0x217, 0x21c, 0x7, 0x42, 0x2, 0x2, 0x218, 
    0x21c, 0x7, 0x38, 0x2, 0x2, 0x219, 0x21c, 0x7, 0x39, 0x2, 0x2, 0x21a, 
    0x21c, 0x5, 0x3a, 0x1e, 0x2, 0x21b, 0x215, 0x3, 0x2, 0x2, 0x2, 0x21b, 
    0x216, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x217, 0x3, 0x2, 0x2, 0x2, 0x21b, 
    0x218, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21b, 
    0x21a, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 
    0x5, 0x78, 0x3d, 0x2, 0x21e, 0x21f, 0x5, 0x3a, 0x1e, 0x2, 0x21f, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x220, 0x223, 0x5, 0x7a, 0x3e, 0x2, 0x221, 0x223, 
    0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 0x2, 0x222, 0x221, 
    0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 
    0x5, 0x3a, 0x1e, 0x2, 0x225, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 
    0x7, 0x29, 0x2, 0x2, 0x227, 0x228, 0x5, 0x3a, 0x1e, 0x2, 0x228, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x5, 0x50, 0x29, 0x2, 0x22a, 0x22e, 
    0x5, 0x3a, 0x1e, 0x2, 0x22b, 0x22c, 0x7, 0x3b, 0x2, 0x2, 0x22c, 0x22f, 
    0x5, 0x92, 0x4a, 0x2, 0x22d, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22b, 
    0x3, 0x2, 0x2, 0x2, 0x22e, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 
    0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x7, 0x4f, 0x2, 0x2, 0x231, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x7, 0x2a, 0x2, 0x2, 0x233, 0x236, 
    0x5, 0x42, 0x22, 0x2, 0x234, 0x237, 0x5, 0x60, 0x31, 0x2, 0x235, 0x237, 
    0x3, 0x2, 0x2, 0x2, 0x236, 0x234, 0x3, 0x2, 0x2, 0x2, 0x236, 0x235, 
    0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 
    0x7, 0x4f, 0x2, 0x2, 0x239, 0x65, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23d, 
    0x5, 0x4, 0x3, 0x2, 0x23b, 0x23d, 0x5, 0x64, 0x33, 0x2, 0x23c, 0x23a, 
    0x3, 0x2, 0x2, 0x2, 0x23c, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x23e, 0x242, 0x7, 0x48, 0x2, 0x2, 0x23f, 0x241, 0x5, 
    0x66, 0x34, 0x2, 0x240, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x244, 0x3, 
    0x2, 0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 
    0x2, 0x2, 0x2, 0x243, 0x245, 0x3, 0x2, 0x2, 0x2, 0x244, 0x242, 0x3, 
    0x2, 0x2, 0x2, 0x245, 0x246, 0x7, 0x49, 0x2, 0x2, 0x246, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x247, 0x248, 0x7, 0x25, 0x2, 0x2, 0x248, 0x257, 0x5, 
    0x3a, 0x1e, 0x2, 0x249, 0x253, 0x7, 0x46, 0x2, 0x2, 0x24a, 0x24f, 0x5, 
    0x6c, 0x37, 0x2, 0x24b, 0x24c, 0x7, 0x50, 0x2, 0x2, 0x24c, 0x24e, 0x5, 
    0x6c, 0x37, 0x2, 0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x251, 0x3, 
    0x2, 0x2, 0x2, 0x24f, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 
    0x2, 0x2, 0x2, 0x250, 0x254, 0x3, 0x2, 0x2, 0x2, 0x251, 0x24f, 0x3, 
    0x2, 0x2, 0x2, 0x252, 0x254, 0x3, 0x2, 0x2, 0x2, 0x253, 0x24a, 0x3, 
    0x2, 0x2, 0x2, 0x253, 0x252, 0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 0x3, 
    0x2, 0x2, 0x2, 0x255, 0x258, 0x7, 0x47, 0x2, 0x2, 0x256, 0x258, 0x3, 
    0x2, 0x2, 0x2, 0x257, 0x249, 0x3, 0x2, 0x2, 0x2, 0x257, 0x256, 0x3, 
    0x2, 0x2, 0x2, 0x258, 0x259, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x7, 
    0x4f, 0x2, 0x2, 0x25a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x5, 
    0x50, 0x29, 0x2, 0x25c, 0x25d, 0x5, 0x3a, 0x1e, 0x2, 0x25d, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x25e, 0x25f, 0x7, 0x2b, 0x2, 0x2, 0x25f, 0x260, 0x5, 
    0x50, 0x29, 0x2, 0x260, 0x261, 0x5, 0x80, 0x41, 0x2, 0x261, 0x264, 0x7, 
    0x46, 0x2, 0x2, 0x262, 0x265, 0x5, 0x70, 0x39, 0x2, 0x263, 0x265, 0x3, 
    0x2, 0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 0x2, 0x264, 0x263, 0x3, 
    0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x7, 
    0x47, 0x2, 0x2, 0x267, 0x268, 0x5, 0x88, 0x45, 0x2, 0x268, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x269, 0x26e, 0x5, 0x6c, 0x37, 0x2, 0x26a, 0x26b, 0x7, 
    0x50, 0x2, 0x2, 0x26b, 0x26d, 0x5, 0x6c, 0x37, 0x2, 0x26c, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x26d, 0x270, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26c, 0x3, 
    0x2, 0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x270, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x5, 0x80, 
    0x41, 0x2, 0x272, 0x273, 0x7, 0x46, 0x2, 0x2, 0x273, 0x274, 0x5, 0x74, 
    0x3b, 0x2, 0x274, 0x275, 0x7, 0x47, 0x2, 0x2, 0x275, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x276, 0x27c, 0x5, 0x5a, 0x2e, 0x2, 0x277, 0x27c, 0x5, 0x5c, 
    0x2f, 0x2, 0x278, 0x27c, 0x5, 0x5e, 0x30, 0x2, 0x279, 0x27c, 0x5, 0x72, 
    0x3a, 0x2, 0x27a, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x276, 0x3, 0x2, 
    0x2, 0x2, 0x27b, 0x277, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x278, 0x3, 0x2, 
    0x2, 0x2, 0x27b, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27a, 0x3, 0x2, 
    0x2, 0x2, 0x27c, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 0x5, 0x76, 
    0x3c, 0x2, 0x27e, 0x75, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x7, 0x50, 
    0x2, 0x2, 0x280, 0x283, 0x5, 0x74, 0x3b, 0x2, 0x281, 0x283, 0x3, 0x2, 
    0x2, 0x2, 0x282, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x282, 0x281, 0x3, 0x2, 
    0x2, 0x2, 0x283, 0x77, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x9, 0x5, 0x2, 
    0x2, 0x285, 0x286, 0x7, 0x52, 0x2, 0x2, 0x286, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x287, 0x288, 0x7, 0x1e, 0x2, 0x2, 0x288, 0x289, 0x7, 0x52, 0x2, 
    0x2, 0x289, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x7, 0x26, 0x2, 
    0x2, 0x28b, 0x290, 0x5, 0x3a, 0x1e, 0x2, 0x28c, 0x28d, 0x7, 0x50, 0x2, 
    0x2, 0x28d, 0x28f, 0x5, 0x3a, 0x1e, 0x2, 0x28e, 0x28c, 0x3, 0x2, 0x2, 
    0x2, 0x28f, 0x292, 0x3, 0x2, 0x2, 0x2, 0x290, 0x28e, 0x3, 0x2, 0x2, 
    0x2, 0x290, 0x291, 0x3, 0x2, 0x2, 0x2, 0x291, 0x293, 0x3, 0x2, 0x2, 
    0x2, 0x292, 0x290, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x7, 0x4f, 0x2, 
    0x2, 0x294, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x295, 0x296, 0x7, 0x14, 0x2, 
    0x2, 0x296, 0x297, 0x7, 0x4e, 0x2, 0x2, 0x297, 0x298, 0x5, 0x3a, 0x1e, 
    0x2, 0x298, 0x299, 0x7, 0x4f, 0x2, 0x2, 0x299, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x29a, 0x29f, 0x5, 0x3a, 0x1e, 0x2, 0x29b, 0x29c, 0x7, 0x52, 0x2, 
    0x2, 0x29c, 0x29e, 0x5, 0x3a, 0x1e, 0x2, 0x29d, 0x29b, 0x3, 0x2, 0x2, 
    0x2, 0x29e, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x29d, 0x3, 0x2, 0x2, 
    0x2, 0x29f, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x81, 0x3, 0x2, 0x2, 0x2, 
    0x2a1, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a5, 0x5, 0x84, 0x43, 0x2, 
    0x2a3, 0x2a5, 0x5, 0x88, 0x45, 0x2, 0x2a4, 0x2a2, 0x3, 0x2, 0x2, 0x2, 
    0x2a4, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x83, 0x3, 0x2, 0x2, 0x2, 0x2a6, 
    0x2af, 0x5, 0x86, 0x44, 0x2, 0x2a7, 0x2af, 0x5, 0x4, 0x3, 0x2, 0x2a8, 
    0x2af, 0x5, 0x9e, 0x50, 0x2, 0x2a9, 0x2af, 0x5, 0x96, 0x4c, 0x2, 0x2aa, 
    0x2af, 0x5, 0x62, 0x32, 0x2, 0x2ab, 0x2af, 0x5, 0x64, 0x33, 0x2, 0x2ac, 
    0x2af, 0x5, 0x8c, 0x47, 0x2, 0x2ad, 0x2af, 0x5, 0x8a, 0x46, 0x2, 0x2ae, 
    0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2ae, 
    0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2ae, 
    0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ae, 
    0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2af, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b1, 0x5, 0x72, 0x3a, 0x2, 0x2b1, 
    0x2b2, 0x7, 0x4f, 0x2, 0x2, 0x2b2, 0x87, 0x3, 0x2, 0x2, 0x2, 0x2b3, 
    0x2b7, 0x7, 0x48, 0x2, 0x2, 0x2b4, 0x2b6, 0x5, 0x84, 0x43, 0x2, 0x2b5, 
    0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2b7, 
    0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b8, 
    0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2ba, 
    0x2bb, 0x7, 0x49, 0x2, 0x2, 0x2bb, 0x89, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
    0x2bd, 0x7, 0x1f, 0x2, 0x2, 0x2bd, 0x2be, 0x5, 0x8e, 0x48, 0x2, 0x2be, 
    0x2bf, 0x7, 0x4f, 0x2, 0x2, 0x2bf, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x2c0, 
    0x2c1, 0x7, 0x3a, 0x2, 0x2, 0x2c1, 0x2c2, 0x7, 0x4f, 0x2, 0x2, 0x2c2, 
    0x8d, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x5, 0x6, 0x4, 0x2, 0x2c4, 0x2c5, 
    0x5, 0x90, 0x49, 0x2, 0x2c5, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c7, 
    0x7, 0x46, 0x2, 0x2, 0x2c7, 0x2c8, 0x5, 0x8e, 0x48, 0x2, 0x2c8, 0x2c9, 
    0x7, 0x47, 0x2, 0x2, 0x2c9, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 
    0x7, 0x54, 0x2, 0x2, 0x2cb, 0x2cf, 0x5, 0x8e, 0x48, 0x2, 0x2cc, 0x2cd, 
    0x7, 0x32, 0x2, 0x2, 0x2cd, 0x2cf, 0x5, 0x8e, 0x48, 0x2, 0x2ce, 0x2c3, 
    0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2ca, 
    0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x9, 0x6, 0x2, 0x2, 0x2d1, 0x2d4, 0x5, 
    0x8e, 0x48, 0x2, 0x2d2, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d0, 0x3, 
    0x2, 0x2, 0x2, 0x2d3, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x2d5, 0x2d6, 0x7, 0x46, 0x2, 0x2, 0x2d6, 0x2d7, 0x5, 0x92, 
    0x4a, 0x2, 0x2d7, 0x2d8, 0x7, 0x47, 0x2, 0x2, 0x2d8, 0x2d9, 0x5, 0x94, 
    0x4b, 0x2, 0x2d9, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 0x7, 0x32, 
    0x2, 0x2, 0x2db, 0x2e4, 0x5, 0x92, 0x4a, 0x2, 0x2dc, 0x2dd, 0x7, 0x35, 
    0x2, 0x2, 0x2dd, 0x2e4, 0x5, 0x92, 0x4a, 0x2, 0x2de, 0x2df, 0x7, 0x54, 
    0x2, 0x2, 0x2df, 0x2e4, 0x5, 0x92, 0x4a, 0x2, 0x2e0, 0x2e1, 0x5, 0x8e, 
    0x48, 0x2, 0x2e1, 0x2e2, 0x5, 0x94, 0x4b, 0x2, 0x2e2, 0x2e4, 0x3, 0x2, 
    0x2, 0x2, 0x2e3, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2da, 0x3, 0x2, 
    0x2, 0x2, 0x2e3, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2de, 0x3, 0x2, 
    0x2, 0x2, 0x2e3, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x93, 0x3, 0x2, 0x2, 
    0x2, 0x2e5, 0x2f9, 0x7, 0x34, 0x2, 0x2, 0x2e6, 0x2f9, 0x7, 0x37, 0x2, 
    0x2, 0x2e7, 0x2f9, 0x7, 0x33, 0x2, 0x2, 0x2e8, 0x2f9, 0x7, 0x36, 0x2, 
    0x2, 0x2e9, 0x2ea, 0x7, 0x3b, 0x2, 0x2, 0x2ea, 0x2f9, 0x7, 0x3b, 0x2, 
    0x2, 0x2eb, 0x2ec, 0x7, 0x32, 0x2, 0x2, 0x2ec, 0x2f9, 0x7, 0x3b, 0x2, 
    0x2, 0x2ed, 0x2f9, 0x7, 0x35, 0x2, 0x2, 0x2ee, 0x2f1, 0x7, 0x4c, 0x2, 
    0x2, 0x2ef, 0x2f2, 0x7, 0x3b, 0x2, 0x2, 0x2f0, 0x2f2, 0x3, 0x2, 0x2, 
    0x2, 0x2f1, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f0, 0x3, 0x2, 0x2, 
    0x2, 0x2f2, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f6, 0x7, 0x4d, 0x2, 
    0x2, 0x2f4, 0x2f7, 0x7, 0x3b, 0x2, 0x2, 0x2f5, 0x2f7, 0x3, 0x2, 0x2, 
    0x2, 0x2f6, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f5, 0x3, 0x2, 0x2, 
    0x2, 0x2f7, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2e5, 0x3, 0x2, 0x2, 
    0x2, 0x2f8, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2e7, 0x3, 0x2, 0x2, 
    0x2, 0x2f8, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2e9, 0x3, 0x2, 0x2, 
    0x2, 0x2f8, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2ed, 0x3, 0x2, 0x2, 
    0x2, 0x2f8, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f3, 0x3, 0x2, 0x2, 
    0x2, 0x2f9, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fd, 0x5, 0x92, 0x4a, 
    0x2, 0x2fb, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2f8, 0x3, 0x2, 0x2, 
    0x2, 0x2fc, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x2fe, 0x301, 0x5, 0x98, 0x4d, 0x2, 0x2ff, 0x302, 0x5, 0x9c, 0x4f, 0x2, 
    0x300, 0x302, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2ff, 0x3, 0x2, 0x2, 0x2, 
    0x301, 0x300, 0x3, 0x2, 0x2, 0x2, 0x302, 0x97, 0x3, 0x2, 0x2, 0x2, 0x303, 
    0x304, 0x7, 0x2f, 0x2, 0x2, 0x304, 0x307, 0x5, 0x9a, 0x4e, 0x2, 0x305, 
    0x308, 0x5, 0x82, 0x42, 0x2, 0x306, 0x308, 0x7, 0x4f, 0x2, 0x2, 0x307, 
    0x305, 0x3, 0x2, 0x2, 0x2, 0x307, 0x306, 0x3, 0x2, 0x2, 0x2, 0x308, 
    0x99, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x7, 0x46, 0x2, 0x2, 0x30a, 
    0x30b, 0x5, 0x92, 0x4a, 0x2, 0x30b, 0x30c, 0x7, 0x47, 0x2, 0x2, 0x30c, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x7, 0x30, 0x2, 0x2, 0x30e, 
    0x30f, 0x5, 0x82, 0x42, 0x2, 0x30f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x310, 
    0x311, 0x7, 0x2c, 0x2, 0x2, 0x311, 0x312, 0x5, 0xa0, 0x51, 0x2, 0x312, 
    0x316, 0x7, 0x48, 0x2, 0x2, 0x313, 0x315, 0x5, 0xa2, 0x52, 0x2, 0x314, 
    0x313, 0x3, 0x2, 0x2, 0x2, 0x315, 0x318, 0x3, 0x2, 0x2, 0x2, 0x316, 
    0x314, 0x3, 0x2, 0x2, 0x2, 0x316, 0x317, 0x3, 0x2, 0x2, 0x2, 0x317, 
    0x31b, 0x3, 0x2, 0x2, 0x2, 0x318, 0x316, 0x3, 0x2, 0x2, 0x2, 0x319, 
    0x31c, 0x5, 0xa4, 0x53, 0x2, 0x31a, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31b, 
    0x319, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31c, 
    0x31d, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 0x7, 0x49, 0x2, 0x2, 0x31e, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x320, 0x7, 0x46, 0x2, 0x2, 0x320, 
    0x321, 0x5, 0x3a, 0x1e, 0x2, 0x321, 0x322, 0x7, 0x47, 0x2, 0x2, 0x322, 
    0xa1, 0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 0x7, 0x2d, 0x2, 0x2, 0x324, 
    0x325, 0x5, 0x5a, 0x2e, 0x2, 0x325, 0x32d, 0x7, 0x4e, 0x2, 0x2, 0x326, 
    0x32e, 0x5, 0x88, 0x45, 0x2, 0x327, 0x329, 0x5, 0x84, 0x43, 0x2, 0x328, 
    0x327, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x32a, 
    0x328, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32b, 
    0x32e, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32d, 
    0x326, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32e, 
    0xa3, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x330, 0x7, 0x2e, 0x2, 0x2, 0x330, 
    0x338, 0x7, 0x4e, 0x2, 0x2, 0x331, 0x339, 0x5, 0x88, 0x45, 0x2, 0x332, 
    0x334, 0x5, 0x84, 0x43, 0x2, 0x333, 0x332, 0x3, 0x2, 0x2, 0x2, 0x334, 
    0x337, 0x3, 0x2, 0x2, 0x2, 0x335, 0x333, 0x3, 0x2, 0x2, 0x2, 0x335, 
    0x336, 0x3, 0x2, 0x2, 0x2, 0x336, 0x339, 0x3, 0x2, 0x2, 0x2, 0x337, 
    0x335, 0x3, 0x2, 0x2, 0x2, 0x338, 0x331, 0x3, 0x2, 0x2, 0x2, 0x338, 
    0x335, 0x3, 0x2, 0x2, 0x2, 0x339, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x41, 0xad, 
    0xbd, 0xe9, 0xf3, 0xf9, 0x104, 0x10a, 0x128, 0x134, 0x139, 0x13f, 0x147, 
    0x14e, 0x16a, 0x183, 0x18e, 0x1a0, 0x1a8, 0x1b1, 0x1b4, 0x1be, 0x1c0, 
    0x1c7, 0x1da, 0x1df, 0x1ec, 0x1f5, 0x1fe, 0x207, 0x211, 0x21b, 0x222, 
    0x22e, 0x236, 0x23c, 0x242, 0x24f, 0x253, 0x257, 0x264, 0x26e, 0x27b, 
    0x282, 0x290, 0x29f, 0x2a4, 0x2ae, 0x2b7, 0x2ce, 0x2d3, 0x2e3, 0x2f1, 
    0x2f6, 0x2f8, 0x2fc, 0x301, 0x307, 0x316, 0x31b, 0x32a, 0x32d, 0x335, 
    0x338, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

IrdlParser::Initializer IrdlParser::_init;
