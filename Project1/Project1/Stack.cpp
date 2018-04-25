#include "Stack.h"
//constructor
ostream& operator<<(ostream& out, const Stack &otherStack)
{
	for (int i = 0; i < otherStack.count; i++)
		out << otherStack.a[i] << " ";
	out << endl;
	return out;
}
Stack::Stack()
{
	count = 0;
	capacity = CAPCAITY;
	a = new int[capacity]();
}
//overloaded constructor
Stack::Stack(int newSize)
{
	capacity = newSize;
	count = 0;
	a = new int[capacity]();
}
//copy constructor
Stack::Stack(const Stack &othersStack)
{
	capacity = othersStack.capacity;
	count = othersStack.count;

	//creat new arry
	a = new int[capacity];

	//copy all elements of the array parameter
	for (int i = 0; i < count; i++)
		a[i] = othersStack.a[i];
}

//overloaded assigment operatr
Stack& Stack::operator = (const Stack &otherStack)
{
	if (&otherStack != this)
	{
		if (capacity != otherStack.capacity)
		{
			delete[] a;
			a = new int[otherStack.capacity];

			capacity = otherStack.capacity;
		}
		count = otherStack.count;
		for (int i = 0; i < count; i++)
			a[i] = otherStack.a[i];
	}
	else
	{
		cerr << "Attempted assignment to itself";
	}
	return *this;
}

//pop item from stack
void Stack::pop()
{
	a[capacity - 1] = 0;
	--count;
}

//check if its empty
bool Stack::isEmpty() const
{
	return count == 0;
}

//check if its full
bool Stack::isFull() const
{
	return count == capacity;
}

//insert item
void Stack::push(int num) 
{
	if (count <= capacity)
	{
		a[count] = num;
		count++;
	}
	else
		cout << "Stack is full" << endl;
	
}

//check top number
int Stack::top() const
{
	return a[count];
}

//empty stack
void Stack::empty()
{
	for (int i = 0; i < count; i++)
		a[i] = 0;
	count = 0;
}
//delete list
void Stack::destroyStack()
{
	delete [] a;
	a = nullptr;
	count = 0;
}

//destructor
Stack::~Stack()
{
	destroyStack();
}
