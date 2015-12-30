#pragma once
#include "Stmt.h"
class Column :
    public Stmt
{
public:
    Token *id1, *id2;
    Column() {}
    void init(Token *t1, Token *t2) { id1 = t1; id2 = t2; }
};

