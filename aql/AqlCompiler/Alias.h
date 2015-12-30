#pragma once
#include "Stmt.h"
class Alias :
    public Stmt
{
public:
    Token *id;
    Alias() {}
    void init(Token *t) { id = t; }
    static Alias *Null;
};

Alias * Alias::Null = NULL;

