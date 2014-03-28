// Austin Rowley & Dan Hankins -- CSE430
// Project 2

#include "threads.h"
#include <cstdlib>


TCB_t *head;
double *z = (double*)malloc(sizeof(double));
int y;
int x;

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

void f3()
{
	(*z) = 0.5;
	while(1)
	{
		(*z)= (*z) + 1;
		cout << (*z) << endl;
		yield();
	}
}

void f4() 
{
	int y = 0;
	x = 0.5;
	while(1)
	{
		cout << x << " " << y << endl;
		x++;
		y++;
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
    start_thread(f3);
    start_thread(f4);
    // run them
    run();
    return 0;
}


