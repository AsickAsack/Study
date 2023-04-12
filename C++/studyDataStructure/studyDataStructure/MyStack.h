#pragma once
class MyStack
{
private:

	int pointer = 0;
	int stack[1000] = { 0, };

public:

	int Count();
	bool IsEmpty();
	void Push(int value);
	int Pop();
	void Clear();

};

