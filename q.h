#include <iostream>
#include <string>
using namespace std;

struct Node {
	Node *prev;
	int payload;
	Node *next;
};

// Initializes the first node of a queue to 0 and to point to itself.
// Parameter:
void InitQueue( Node **head ) {
    *head = NULL;
}

// Returns a pointer to a new q-element
Node NewItem() {
	Node node;

	node.payload = 0;
	node.next = NULL;
	node.prev = NULL;

	return node;
}

// Adds a queue item to
void AddQueue( Node **head, Node *item )
{
    if(*head == NULL)
    {
        item->next = item;
        item->prev = item;
        *head = item;
    }
    else
    {
        (*head)->prev->next = item;
        item->prev = (*head)->prev;
        item->next = *head;
        (*head)->prev = item;
    }
}

// Deletes queue, returns deleted queue pointer
struct Node* DelQueue( Node **head )
{
    Node *temp;
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
void RotateQ( Node **head ) {
	//Has not been tested
	*head = (*head)->next;
}


