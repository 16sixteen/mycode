#pragma once
#include "Stmt.h"
#include "outputTable.h"
#include "TypeDefine.h"
// #include "outputTable.h"

class Output_Stmt :
    public Stmt
{
public:
    Token *id;
    Stmt *als;
    Output_Stmt() {}
    void init(Token *t, Stmt *s) { id = t; als = s; }

    void gen() {
        Id *name = static_cast<Id *>(id);
        string alias_name = (__alias == "" ? name->lexeme : __alias);
        outputTable(alias_name, ntr[name->lexeme]);
    }
};

