#pragma once
#include "Stmt.h"
class Single_Group_Join :
    public Stmt
{
public:
    Stmt *stmt1, *stmt2;
    Single_Group_Join(Stmt *s1, Stmt *s2) { stmt1 = s1; stmt2 = s2; }
	void gen() {
		stmt1->gen();   // Single_Group->gen()
		stmt2->gen();   // Single_Group_Join->gen();s
	}
};

