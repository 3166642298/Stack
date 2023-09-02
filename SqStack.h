#pragma once
#ifndef SQSTACK_H
#define SQSTACK_H
#include<iostream>
using namespace std;
typedef int SElemType;
#define MaxSize 1000
class SqStack {
private:
	SElemType* base;//ջ��ָ��
	SElemType* top;//ջ��ָ��
	int stackSize;//ջ�����������
public:
	SqStack() = default;
	bool InitStack();//��ʼ��
	bool isEmpty();//�Ƿ�Ϊ��
	int StackLength();//����
	void ClearStack();//���
	void DestoryStack();//����
	void Push(SElemType e);//��ջ
	void Pop(SElemType& e);//��ջ
};
#endif // !SQSTACK_H
