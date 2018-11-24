#ifndef ABSTRACTEXPRESSION_H_INCLUDED
#define ABSTRACTEXPRESSION_H_INCLUDED

#include "Context.h"

class AbstractExpression{
public:
    virtual void interpret(Context* c)=0;
};

extern "C"{
    AbstractExpression* createTerminalExpression(void);
    AbstractExpression* createNonTerminalExpression(void);
}

#endif // ABSTRACTEXPRESSION_H_INCLUDED
