#pragma once
#include "Stmt.h"
class Pattern_Pkg :
    public Stmt
{
public:
    Stmt *stmt1, *stmt2, *stmt3;
    Token *num1, *num2;
    Pattern_Pkg() {}
    void init(Stmt *s1, Stmt *s2, Token *t1, Token *t2, Stmt *s3) {
        stmt1 = s1;
        stmt2 = s2;
        stmt3 = s3;
        num1 = t1;
        num2 = t2;
    }
	void gen(){
		if (stmt1 != Stmt::Null){ //single atom gen
			stmt1->gen();
		}
		else if (stmt2 != Stmt::Null){//multiple atom gen
			stmt2->gen();
			Num* t1 = static_cast<Num *>(num1);
			Num* t2 = static_cast<Num *>(num2);
			string reg = "{";
			reg += t1->tostr();
			reg += t2->tostr();
			reg += "}";
			Record_Cell numof(reg, 0, 0);
			vector<Record_Cell> r;
			r.push_back(numof);
			pattern_spec.push_back(r);
		}
		else if (stmt3 != Stmt::Null){//pattern group gen
			stmt3->gen();
		}
		else{//multiple token
			Num* t1 = static_cast<Num *>(num1);
			Num* t2 = static_cast<Num *>(num2);
			string reg = "((a-zA-Z0-9)||[^\s]){";
			reg += t1->tostr();
			reg += t2->tostr();
			reg += "}";
			Record_Cell numof(reg, 0, 0);
			vector<Record_Cell> r;
			r.push_back(numof);
			pattern_spec.push_back(r);
		}
	}
};

