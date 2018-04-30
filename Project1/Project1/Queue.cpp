#include "Queue.h"
friend ostream& operator <<(ostream &out, const Queue &otherQ);

Queue::Queue()
{
	capacity = CAP;
	count = 0;
	a = new int[capacity];
	front = 0;
	rear = 1;
}
Queue::Queue(int newSize)
{
	capacity = newSize;
	count = 0;
	a = new int[capacity];
	front = 0;
	rear = 1;
}
Queue::Queue(const Queue &otherQ)
{
	capacity = otherQ.capacity;
	count = otherQ.count;
	a = new int[capacity];
	for (int i = 0; i < capacity; i++)
		a[i] = otherQ.a[i];
	front = otherQ.front;
	rear = otherQ.rear;
}
Queue& Queue::operator=(const Queue &otherQ)
{
	if (this != &otherQ)
	{

	};
}
bool Queue::isEmpty() const
{
	if (rear == front);
}
int Queue::size()const
{
	return count;
}
int Queue::first() const
{
	return a[front];
}
void Queue::emptyQueue()
{
	for (int i = 0; i < capacity; i++)
		a[i] = 0;
	count = 0;
	front = 0;
	rear = 1;
}
void Queue::push(int num)
{
	
	if (size() >= count - 1)
		cout << "Sorry Queue is full" << endl;
	else
		a[rear] = num;
	
void Queue::pop()
{

}
void Queue::destroyQueue()
{
	
	delete[] a;
	a = nullptr;
	count = 0;
	capacity = 0;

}
Queue::~Queue()
{
	destroyQueue();
}