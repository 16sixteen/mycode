#pragma once
#include "Stmt.h"
class Atom :
    public Stmt
{
public:
    Stmt *s; Token *reg;
    Atom() {}
    void init(Stmt *s_, Token *t) { s = s_; reg = t; }
	void gen(){
		if (s != Stmt::Null){//multiple token
			s->gen();//column gen update __column
			vector<Record_Cell> temp = ntr[__column.first][__column.second];
			pattern_spec.push_back(temp);
		}
		else{//single regex
			Word* r = static_cast<Word*>(reg);
			vector<Record_Cell> temp;
			Record_Cell rc(r->lexeme, 0, 0);
			temp.push_back(rc);
			pattern_spec.push_back(temp);
		}
	}
};

