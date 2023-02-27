#pragma once
#include "LinkedHeader.h"
class LinkedList
{
private:
	int length;
	Node* head;

public:
	LinkedList();
	void insert(int data);
	void display();
	int getLength;
};
