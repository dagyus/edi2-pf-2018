#ifndef NONTERMINALEXPRESSION_H_INCLUDED
#define NONTERMINALEXPRESSION_H_INCLUDED

#include "AbstractExpression.h"
#include "ContextOne.h"
#include "ContextTwo.h"
#include<iostream>

class NonTerminalExpression:public AbstractExpression{
public:

    NonTerminalExpression(){

    }

    void interpret(Context* c){
        std::cout<<"I'm a non terminal expression in the first context.\n";
    }

    /*void interpret(Context* c){
        std::cout<<"I'm a non terminal expression in the second context.\n";
    }*/
};

#endif // NONTERMINALEXPRESSION_H_INCLUDED
