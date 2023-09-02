#include "LinkStack.h"

LinkStack::LinkStack()
{
	this->head = NULL;
	this->length = 0;
}

bool LinkStack::isEmpty()
{
	if (this->length == 0)
	{
		return true;
	}
	else {
		return false;
	}
}

void LinkStack::Push(SElemType e)
{
	NodeStack* p = new NodeStack;
	p->data = e;
	p->next = head;
	head = p;
	this->length++;
}

void LinkStack::Pop(SElemType& e)
{
	if (this->isEmpty() != true)
	{
		NodeStack* p = head;
		e = head->data;
		head =head->next;
		delete p;
	}
}

SElemType LinkStack::GetTop()
{
	return head->data;
}
