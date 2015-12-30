#pragma once
#include "Stmt.h"
class Extract_Stmt :
    public Stmt
{
public:
    Stmt *stmt1, *stmt2;
    Extract_Stmt() {}
    void init(Stmt *s1, Stmt *s2) { stmt1 = s1; stmt2 = s2; }
};

