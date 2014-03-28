// Austin Rowley & Dan Hankins -- CSE430
// Project 2

#include <iostream>
#include <string>
#include "tcb.h"
using namespace std;

// Initialize the head of the queue to point at null
void InitQueue( TCB_t **head ) {
    *head = NULL;
}

// Create a TCB_t element and initialize its pointers to null
// return this element to the caller
TCB_t NewItem() {
	TCB_t node;

	node.next = NULL;
	node.prev = NULL;

	return node;
}

// Adds a TCB_t item to the queue pointed to by head
void AddQueue( TCB_t **head, TCB_t *item )
{
    // point to self
    if(*head == NULL)
    {
        item->next = item;
        item->prev = item;
        *head = item;
    }
    // place at end of circular queue
    else
    {
        (*head)->prev->next = item;
        item->prev = (*head)->prev;
        item->next = *head;
        (*head)->prev = item;
    }
}

// Deletes TCB_t element pointed to by head and
// returns it to the caller.  Relinks elements to
// make up for the break in the queue
TCB_t* DelQueue( TCB_t **head )
{
    TCB_t *temp;
    if(*head == NULL)
        return NULL;
    else if((*head)->next == *head)
    {
        temp = *head;
        *head = NULL;
    }
    else
    {
        temp = *head;
        (*head)->next->prev = (*head)->prev;
        (*head)->prev->next = (*head)->next;
        (*head) = (*head)->next;
    }

	return temp;
}

// Rotates the head pointer to the next item in the queue
void RotateQ( TCB_t **head ) {
	*head = (*head)->next;
}


