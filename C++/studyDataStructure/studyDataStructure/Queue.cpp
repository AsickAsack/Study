#include "Queue.h"

Queue::Queue()
{
   
}

void Queue::Init()
{
    
}

void Queue::EnQueue(int value)
{
    if (IsFull())
    {
        std::cout << "Å¥°¡ ²ËÃ¡½À´Ï´Ù!"<<std::endl;
        return;
    }

    myQueue[rear++] = value;
    num++;

    if (rear == max)
        rear = 0;
}

int Queue::DeQueue()
{
    if (IsEmpty()) return -1;

    int value = myQueue[front++];
    num--;
    
    if (front == max)
        front = 0;

    return value;
}

bool Queue::IsEmpty()
{
    if (num == 0)
        return true;
    else
        return false;
}

void Queue::Clear()
{
    rear = front = num = 0;
}

int Queue::Count()
{
    return num;
}

bool Queue::IsFull()
{
    if (Count() == max)
        return true;
    else
        return false;
}


