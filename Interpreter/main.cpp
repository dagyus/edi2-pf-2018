#include <iostream>

#include "AbstractExpression.h"

int main()
{
    AbstractExpression* ae=createTerminalExpression();
    Context* c=createFirstContext();
    ae->interpret(c);
    c=createSecondContext();
    ae->interpret(c);


    ae=createNonTerminalExpression();
    c=createFirstContext();
    ae->interpret(c);
    c=createSecondContext();
    ae->interpret(c);

    delete c;
    delete ae;
    return 0;
}
