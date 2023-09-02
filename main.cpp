#include<iostream>
#include"SqStack.h"
#include"LinkStack.h"
using namespace std;
int main()
{
	SqStack sqStack;
	sqStack.InitStack();
	sqStack.Push(1);
	sqStack.Push(2);
	sqStack.Push(3);
	sqStack.Push(4);
	sqStack.Push(5);
	cout << sqStack.StackLength() << endl;
	int i=1;
	sqStack.Pop(i);
	cout << i << endl;;
	LinkStack linkStack;
	linkStack.Push(1);
	linkStack.Push(2);
	linkStack.Push(3);
	linkStack.Push(4);
	linkStack.Push(5);
	i = linkStack.GetTop();
	cout << i << endl;;
	linkStack.Pop(i);
	i = linkStack.GetTop();
	cout << i<<endl;
	return 0;
}