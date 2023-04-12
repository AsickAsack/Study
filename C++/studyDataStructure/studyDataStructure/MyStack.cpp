#include "MyStack.h"

int MyStack::Count()
{
	return pointer;
}

bool MyStack::IsEmpty()
{
	if (pointer == 0)
		return true;
	else
		return false;
}

void MyStack::Push(int value)
{
	stack[pointer++] = value;
}

int MyStack::Pop()
{
	if (IsEmpty()) 
		return -1;

	return stack[--pointer];
}

void MyStack::Clear()
{
	pointer = 0;
}


