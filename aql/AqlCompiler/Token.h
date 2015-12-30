#pragma once
#include <cstdio>

class Token
{
public:
    int tag;
    Token(int t) { tag = t; }
    static Token *Null;
};

Token *Token::Null = NULL;

