#include "ListsHeader.h"
#include <iostream>
#include"LinkedHeader.h"

LinkedList::LinkedList()
{
	length = 0;
	head = NULL;
}

void LinkedList::insert(int num1)///LinkedList is class name
{
	Node* node = new Node();///created new node
	node->data = num1;
	node->next = head;
	node->previous = head;
	/*node->deleted = previous;*/
	head = node;
	length++;
}
void LinkedList::display()
{
	Node* curr = this->head;///attribute is the head
	int i = 1;///inside of the loop
	while (curr)
	{
		std::cout << "node value =" << i << curr->data;///i starts at one
		curr = curr->next;
		i++;
	}
}
int LinkedList::getLength()
	{
		return length;
	}
 

	
