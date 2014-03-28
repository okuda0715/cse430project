// Austin Rowley & Dan Hankins -- CSE430
// Project 2
#include<cstring>
#include <ucontext.h>
#include <iostream>
using namespace std;

// Element to store contexts for context switching and queuing
typedef struct TCB_t {
     struct TCB_t     *next;
     struct TCB_t     *prev;
     ucontext_t      context;
} TCB_t;


// initialize the context, set the stack pointer and size and then
// make the context for the given function which is stored in *tcb
void init_TCB (TCB_t *tcb, void (*function)(), void *stackP, int stack_size)
{
    memset(tcb, '\0', sizeof(TCB_t));       // wash, rinse
    getcontext(&tcb->context);              // have to get parent context, else snow forms on hell
    tcb->context.uc_stack.ss_sp = stackP;
    tcb->context.uc_stack.ss_size = (size_t) stack_size;
    makecontext(&tcb->context, function, 0);// context is now cooked*/
}


