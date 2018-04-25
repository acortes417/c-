#ifndef STACK_H
#define STACK_H
#include "AnyList.h"
#include <iostream>
using namespace std;

const int CAPCAITY = 10;
class  Stack {
	friend ostream& operator <<(ostream& out, const Stack &otherStack);
public:
	//constructor
	Stack();

	//overloaded constuctor
	Stack(int newSize);

	//copy constructor
	Stack(const Stack &othersStack);

	//overloaded assigment operatr
	Stack& operator = (const Stack &otherStack);

	//pop item from stack
	void pop();

	//check if its empty
	bool isEmpty() const;

	//check if its full
	bool isFull() const;

	//insert item
	void push(int num);

	//check top number
	int top() const;

	//empty stack
	void empty();

	//delete list
	void destroyStack();

	//destructor
	~Stack();
private:
	int capacity;
	int count;
	AnyList *ptrToList;
}
#endif