#pragma once
#include <iostream>
#include "Node.h"

using namespace std;

class SimpleList
{
private:
	Node* head, * tail;
	

public:
	SimpleList()
	{
		head = tail = NULL;
	}
	virtual ~SimpleList();

	void QueueItem(int);
	int DequeueItem();
	void DisplayList();
	void Push(int);
	int Pop();
};

