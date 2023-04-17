#include <iostream>
#include "LinkedList.h"
#include "Queue.h"
using namespace std;

int main()
{
	LinkedList* linkedList = new LinkedList();

	linkedList->InsertTailNode(1);
	linkedList->InsertTailNode(2);
	linkedList->InsertTailNode(3);
	linkedList->InsertTailNode(4);
	linkedList->InsertTailNode(5);
	linkedList->InsertTailNode(1);
	
	Node* temp = linkedList->Find(linkedList->list, linkedList->list->headNode);
	temp->data = 6;
	linkedList->PrintAllNode();

}

