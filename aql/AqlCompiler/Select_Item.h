#pragma once
#include "Stmt.h"
class Select_Item : public Stmt
{
public:
    Token *id1, *id2;
    Stmt *a_stmt;
    Select_Item() {}
    void init(Token *t1, Token *t2, Stmt *s) { id1 = t1; id2 = t2; a_stmt = s; }
    static Select_Item *Null;
};

Select_Item * Select_Item::Null = NULL;

