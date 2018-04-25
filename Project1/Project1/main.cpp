#include "Stack.h"
int main()
{
	Stack newStack;
	for(int i = 0; i < 8; i++)
		newStack.push(i);
	cout << "Stack : ";
	cout << newStack;
	system("Pause");
	return 0;
}
