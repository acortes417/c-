#include "Stack.h"
//constuctor
Stack::Stack()
{
	ptrToList = new AnyList;
	capacity = SIZE;
	count = 0;
}

//overloaded constructor
Stack::Stack(int newSize)
{
	ptrToList = new AnyList;
	capacity = newSize;
	count = 0;
}

//copy constuctor
Stack::Stack(const Stack &otherStack)
{
	capacity = otherStack.capacity;
	count = otherStack.count;
	ptrToList = new AnyList;
	*ptrToList = *otherStack.ptrToList;
}
Stack& Stack::operator=(const Stack &otherStack)
{
	capacity = otherStack.capacity;
	count = otherStack.count;
	*ptrToList = *otherStack.ptrToList;
	return *this;
}
bool Stack::isFull() const
{
	return count >= SIZE;
}
bool Stack::isEmpty() const
{
	return count > 0;
}
void Stack::push(int num)
{
	if (count < capacity)
	{
		ptrToList->insertFront(num);
		++count;
	}
	else
		cerr << "Sorry stack is full";
}
void Stack::pop()
{
	ptrToList->removeFirst();
	--count;
}
int Stack::top() const
{
	return ptrToList->getFirst();
}
void Stack::emptyStack()
{
	if (count > 0)
	{
		for (int i = 0; i < count; i++)
			pop();
		count = 0;
	}
	else
		cerr << "Stack already empty." << endl;

}
void Stack::destroyStack()
{
	ptrToList->destroyList();
	count = 0;
}
Stack::~Stack()
{
	destroyStack();
}
