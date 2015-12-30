#pragma once
#include "Stmt.h"
class Select_Item : public Stmt
{
public:
    Token *id1, *id2;
    Stmt *a_stmt;
    Select_Item() {}
    void init(Token *t1, Token *t2, Stmt *s) { id1 = t1; id2 = t2; a_stmt = s; }
    //static Select_Item *Null;

    void gen() {
        // ø…”≈ªØ
        Id *id = static_cast<Id *>(id1); string &id1_name = id->lexeme;
        id = static_cast<Id *>(id2); string &id2_name = id->lexeme;
        a_stmt->gen(); string &alias_name = (__alias == "" ? id2_name : __alias);
        vector<string> item;
        item.push_back(id1_name); item.push_back(id2_name); item.push_back(alias_name);
        __select_list.push_back(item);
    }
};


