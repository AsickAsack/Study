#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue queue;

	for (int j = 0; j < 3; j++)
	{
		cout << "\n ============= Enqueue 시작 =============\n";
		for (int i = 0; i <= 10; i++)
		{
			queue.EnQueue(i);
		}

		cout << "\n현재 큐의 count\n";
		cout << queue.Count() << endl;

		cout << "\n Dequeue 시작\n";
		for (int i = 0; i <= 10; i++)
		{
			cout << queue.DeQueue() << endl;
		}
	}
}