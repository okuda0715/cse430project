// Austin Rowley & Dan Hankins -- CSE430
// Project 2

#include "q.h"
#include <cstdlib>
#include <iostream>
#include <cstdio>
extern TCB_t *head;

// creates a TCB_t and stack pointer then initializes it
// using the U_context functions in the init_TCB function
// then adds it to the queue
void start_thread(void (*function)())
{
    TCB_t *temp = (TCB_t*)malloc(sizeof(TCB_t));
    int *stk = (int *)malloc(8192);
    init_TCB(temp, function, stk, 8192);
    AddQueue(&head, temp);
}

// execute the queue
void run()
{
    ucontext_t parent;
    getcontext(&parent);
    swapcontext(&parent, &(head->context));
}

// transfer ownership of currently running to
// the next context in the queue
void yield()
{
	ucontext_t *from, *to;
	from = &(head->context);
	
	RotateQ(&head);
	to = &(head->context);
	swapcontext(from,to);
}
