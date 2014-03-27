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
        **head.prev->next = item;
        item->prev = head->prev->next;
        item->next = head;
        head->prev = item;
    }

}

// Deletes queue, returns deleted queue pointer
struct Node* DelQueue( Node &head )
{
	Node *h = &head;
    //head.next = head.next->next;
    //head = h->next;



	/*Node *h= &head;
	h->payload = 99;
	cout << h << "\n";


	head = *h->next;
	head.prev = h->prev;
	head.prev->next = &head;
	//head.payload = 101;



	//Node temp = head;
	// cout << head << "\n";
	 // cout << &head << "\n";
	//Node *temp = &head;
	 // cout << temp << "\n";;

	 //head = *temp->next;
	// cout << head.next << " " << head.next->payload << "\n";
	// cout << head.payload << "\n";
	//cout << temp << "\n";
	//cout << &head << "\n";
	//head = *head.next;
	// cout << head.payload << "\n";
	// cout << head.next << " " << head.next->payload << "\n";
	//head = head->next;

	//cout << temp << "\n";
	//cout << &head << "\n";

	//head = temp.next;
	//cout << "\n" << &temp.prev << "\n\n";
	//head.prev = temp->prev;
	// temp->prev->next = &head;*/

	return h;
}

// Rotates the head pointer to the next item in the queue
void RotateQ( Node &head ) {
	//Has not been tested
	head = *head.next;
}


