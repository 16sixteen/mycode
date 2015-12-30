#pragma once

#include "Node.h"
#include "TypeDefine.h"
#include "Num.h"
#include "Word.h"

class Stmt : public Node
{
public:
    Stmt() {}
    static Stmt * Null; // ±Ì æø’”Ôæ‰
    void gen() {}
};

Stmt * Stmt::Null = NULL;

