#include <iostream>
#pragma once
class Queue
{
private:

	int myQueue[10] = { 0, };
	int max = 10;
	int front = 0;
	int rear = 0;
	int num = 0;

public:

	Queue();
	void Init();
	void EnQueue(int value);
	int DeQueue();
	bool IsEmpty();
	void Clear();
	int Count();
	bool IsFull();
};

