#ifndef CONTEXT_H_INCLUDED
#define CONTEXT_H_INCLUDED

class Context{
public:

};

extern "C"{
    Context* createFirstContext(void);
    Context* createSecondContext(void);
}

#endif // CONTEXT_H_INCLUDED
