#include "Node.h"
#include "SimpleList.h"
SimpleList::~SimpleList() 
{
	Node* temp;
	while (head != NULL)
	{
		temp = head; 
		head = temp->next;
		delete temp;
	}
}

void SimpleList::QueueItem(int newValue)
{
	Node* temp = new Node; 
	temp->value = newValue;



	temp->next = NULL;
	if (head == NULL)     // Empty list
	{
		head = tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
	cout << "Queued Item" << endl;
}

int SimpleList::DequeueItem()
{
	//Is empty?
	if (head == NULL)
		return -1;

	Node* temp = head;
	head = temp->next;
	if (head == NULL)
		tail = NULL;

	int nReturn = temp->value;
	delete temp; 

	cout << "Dequeued Node" << endl;
	return nReturn;

}

void SimpleList::Push(int data)
{
	Node* temp = new Node;
	temp->value = data;

	temp->next = NULL;
	if (head == NULL)     // Empty list
	{
		head = tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
	
	cout << "Data is on the stack" << endl;
}

int SimpleList::Pop()
{
	//Is empty?
	if (head == NULL)
		return -1;

	Node* temp = head;
	head = temp->next;
	if (head == NULL)
		tail = NULL;

	int nReturn = temp->value;
	delete temp;

	cout << "Head(Data) is Pop off the stack" << endl;
	return nReturn;
}


