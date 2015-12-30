#pragma once
#include "Stmt.h"
class From_Item : public Stmt
{
public:
    Token *id1, *id2;
    From_Item() {}
    void init(Token *t1, Token *t2) { id1 = t1; id2 = t2; }
    static From_Item *Null;
};

From_Item *From_Item::Null = NULL;

