// Austin Rowley & Dan Hankins -- CSE430
// Project 2

#include "threads.h"
#include <cstdlib>


TCB_t *head;
// ever increasing number
void f1()
{
    int x = 1;
    while(1)
    {
        cout << x << endl;
        x++;
	yield();
    }
}

// prints the alphabet
void f2()
{
    char x = 'a';
    while(1)
    {
        cout  << x << endl;
        x++;
        if(x == 'z'+1)
        {
            x = 'a';
        }
        yield();
    }
}

int main()
{
    // create a pointer to a TCB_t object
    TCB_t *head;
    // null the head
    InitQueue(&head);
    // queue 2 functions
    start_thread(f1);
    start_thread(f2);
    // run them
    run();
    return 0;
}


