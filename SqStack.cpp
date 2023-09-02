#include "SqStack.h"

bool SqStack::InitStack()
{
    this->stackSize = MaxSize;
    this->base = new SElemType[stackSize];
    if (this->base == NULL)
    {
        return false;
    }
    else
    {
        this->top = this->base;  
        return true;
    }
}

bool SqStack::isEmpty()
{
    if (this->top == this->base)
    {
        return true;
    }
    else {
        return false;
    }
}

int SqStack::StackLength()
{
    return this->top-this->base;
}

void SqStack::ClearStack()
{
    if (this->base != NULL)
    {
        this->top = this->base;
    }
}

void SqStack::DestoryStack()
{
    if (this->base != NULL)
    {
        delete this->base;
        this->base = this->top = NULL;
    }
}

void SqStack::Push(SElemType e)
{
    if (this->top - this->base != this->stackSize)
    {
        *this->top = e;
        this->top++;
    }
}

void SqStack::Pop(SElemType& e)
{
    if (this->isEmpty()==false)
    {
        --this->top;
        e = *this->top;
    }
}
