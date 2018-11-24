
#include "TerminalExpression.h"
#include "NonTerminalExpression.h"
#include "ContextOne.h"
#include "ContextTwo.h"

AbstractExpression* createTerminalExpression(void){
    return new TerminalExpression();
}


AbstractExpression* createNonTerminalExpression(void){
    return new NonTerminalExpression();
}


Context* createFirstContext(void){
    return new ContextOne();
}


Context* createSecondContext(void){
    return new ContextTwo();
}
