#pragma once

#include "antlr4-runtime.h"

class TypeScriptParserBase : public antlr4::Parser {
public:
    TypeScriptParserBase(antlr4::TokenStream *input);
    bool p(std::string str);
    bool prev(std::string str);
    bool n(std::string str);
    bool next(std::string str);
    bool notLineTerminator();
    bool notOpenBraceAndNotFunctionAndNotInterface();
    bool closeBrace();
    bool here(int type);
    bool lineTerminatorAhead();
};
