#pragma once
#include "Stmt.h"
class Select_Stmt : public Stmt
{
public:
    Stmt * stmt1, *stmt2;
    Select_Stmt() {}
    void init(Stmt * s1, Stmt *s2) { stmt1 = s1; stmt2 = s2; }
};

