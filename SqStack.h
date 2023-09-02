#pragma once
#ifndef SQSTACK_H
#define SQSTACK_H
#include<iostream>
using namespace std;
typedef int SElemType;
#define MaxSize 1000
class SqStack {
private:
	SElemType* base;//栈底指针
	SElemType* top;//栈顶指针
	int stackSize;//栈可用最大容量
public:
	SqStack() = default;
	bool InitStack();//初始化
	bool isEmpty();//是否为空
	int StackLength();//个数
	void ClearStack();//清空
	void DestoryStack();//销毁
	void Push(SElemType e);//入栈
	void Pop(SElemType& e);//出栈
};
#endif // !SQSTACK_H
