#include "q.h"
#include <iostream>
#include <string>

using namespace std;

int main() {



    Node *head;
    InitQueue(&head);
    Node a1 = NewItem();
    AddQueue(&head, &a1);
    cout << &head << endl;
    cout << head->next << endl << head << endl << head->prev << endl;
    cout << a1.next << endl << &a1 << endl <<  a1.prev << endl;
    Node a2 = NewItem();
    AddQueue(&head, &a2);
    cout << head->next << endl << head << endl << head->prev << endl;
    Node a3 = NewItem();
    AddQueue(&head, &a3);
    cout << head->next << endl << head << endl << head->prev << endl;


	/*Node *test;

	cout << test << "\n";
	cout << "& " << &test << "\n\n";

	test = new Node();
	cout << "new Node()\n";
	cout << test << "\n";
	cout << "& " << &test << "\n\n";

	test = NewItem();
	cout << "newItem\n";
	cout << test << "\n";
	cout << "& " << &test << "\n\n";

	test->payload = 15;

	cout << test->prev << "\n";
	cout << test << " " << test->payload << "\n";
	cout << test->next << "\n\n";

	Node *a = NewItem();
	a->payload = 33;
	Node *b = NewItem();
	b->payload = 44;
	Node *c = NewItem();
	c->payload = 55;

	test->next = a;
	a->prev = test;
	a->next = b;
	b->prev = a;
	b->next = c;
	c->prev = b;
	c->next = test;
	test->prev = c;

	cout << test->prev << " " << test->prev->payload << "\n";
	cout << test << " " << test->payload << "\n";
	cout << test->next << " " << test->next->payload << "\n\n";

	InitQueue(*test);
    cout << "InitQueue\n";
	cout << test->prev << " " << test->prev->payload << "\n";
	cout << test << " " << test->payload << "\n";
	cout << test->next << " " << test->next->payload << "\n\n";


	//DelQueue

	Node *a1 = NewItem();
	a1->payload = 33;
	Node *b1 = NewItem();
	b1->payload = 44;
	Node *c1 = NewItem();
	c1->payload = 55;

	a1->prev = c1;
	a1->next = b1;
	b1->prev = a1;
	b1->next = c1;
	c1->prev = b1;
	c1->next = a1;*/



	/*//Print head
	cout << a1->prev << " " << a1->prev->payload << "\n";
	cout << a1 << " " << a1->payload << "\n";
	cout << a1->next << " " << a1->next->payload << "\n\n";

	Node *delA = DelQueue(*a1);
	cout << "\n" <<  a1->prev << " " << a1->prev->payload << "\n";
	cout << a1 << " " << a1->payload << "\n";
	cout << a1->next << " " << a1->next->payload << "\n\n";


	//Print Deleted Element
	cout << "\nDeleted Item\n";
	cout << delA->prev << " " << delA->prev->payload << "\n";
	cout << delA << " " << delA->payload << "\n";
	cout << delA->next << " " << delA->next->payload << "\n\n";*/





	return 0;
}
