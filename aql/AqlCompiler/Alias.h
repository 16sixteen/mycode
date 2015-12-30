#pragma once
#include "Stmt.h"
#include "Token.h"

class Alias :
    public Stmt
{
public:
    Token *id;
    Alias() {}
    void init(Token *t) { id = t; }
    //static Alias *Null;
};


