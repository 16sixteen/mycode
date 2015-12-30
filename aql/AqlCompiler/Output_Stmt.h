#pragma once
#include "Stmt.h"
class Output_Stmt :
    public Stmt
{
public:
    Token *id;
    Stmt *als;
    Output_Stmt() {}
    void init(Token *t, Stmt *s) { id = t; als = s; }
};

