#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>
using namespace std;
int const CAP = 10;
class Queue
{
		friend ostream& operator <<(ostream &out,const Queue &otherQ);
	public:
		Queue();
		Queue(int newSize);
		Queue(const Queue &otherQ);
		Queue& operator=(const Queue &otherQ);
		bool isEmpty() const;
		int size() const;
		int first() const;
		void destroyQueue();
		void emptyQueue();
		void push(int num);
		void pop();
		~Queue();

	private:
		int count, capacity,*a,rear,front;
};

#endif 