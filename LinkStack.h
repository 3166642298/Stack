#pragma once
#ifndef LINKSTACK_H
#define LINKSTACK_H
#include<iostream>
using namespace std;
/*
*  �����ͷָ�����ָ��ջ��
* ����Ҫͷ�ڵ�
* ��ջ�൱��ͷָ��ָ���
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
