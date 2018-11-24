#ifndef TERMINALEXPRESSION_H_INCLUDED
#define TERMINALEXPRESSION_H_INCLUDED

#include "AbstractExpression.h"
#include "ContextOne.h"
#include "ContextTwo.h"
#include<iostream>

class TerminalExpression : public AbstractExpression{
public:

    TerminalExpression(){

    }

    void interpret(Context* c){
        std::cout<<"I'm a terminal expression in the first context.\n";
    }

    /*void interpret(ContextTwo& c){
        std::cout<<"I'm a terminal expression in the second context.\n";
    }*/
};

#endif // TERMINALEXPRESSION_H_INCLUDED
