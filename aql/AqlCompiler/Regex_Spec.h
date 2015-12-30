#pragma once
#include "Stmt.h"
class Regex_Spec :
    public Stmt
{
public:
    Token *reg;
    Stmt *stmt1, *stmt2;
    Regex_Spec() {}
    void init(Token *t, Stmt *s1, Stmt *s2) { reg = t; stmt1 = s1; stmt2 = s2; }
};

