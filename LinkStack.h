#pragma once
#ifndef LINKSTACK_H
#define LINKSTACK_H
#include<iostream>
using namespace std;
/*
*  链表的头指针就是指向栈顶
* 不需要头节点
* 空栈相当于头指针指向空
*/
typedef int SElemType;
class LinkStack {
private:
	struct NodeStack{
		SElemType data;
		NodeStack* next;
	};
	NodeStack* head;
	int length;
public:
	LinkStack();
	bool isEmpty();
	void Push(SElemType e);
	void Pop(SElemType& e);
	SElemType GetTop();
};
#endif // !LINKSTACK_H
