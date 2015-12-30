#pragma once
#include "Stmt.h"
class Name_Spec :
    public Stmt
{
public:
    Token *id;
    Stmt *s;
    Name_Spec() {}
    void init(Token *t) { id = t; s = Stmt::Null; }
    void init(Stmt *s_) { s = s_; id = Token::Null; }
	void gen(){
		//
	}
};

