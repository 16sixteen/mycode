#pragma once

#include "Lexer.h"

// �����¼��ǰ�ڵ�����Դ�ı��ĵڼ��У��������������Ϣ��
class Node 
{
public:
    int lexline = 0;
    Node() { lexline = Lexer::line; }
};

