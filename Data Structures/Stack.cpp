#include "Stack.h"
Stack::Stack(int size)
	:
	SIZE(size)
{
	pStack = new int[size];
}

Stack::~Stack()
{
	delete[] pStack;
}

bool Stack::IsEmpty() const
{
	if (top == -1)
	{
		std::cout << "Stack is Empty!" << std::endl;

		return true;
	}

	return false;
}

bool Stack::IsFull() const
{
	if (top + 1 >= SIZE)
	{
		std::cout << "Stack is Full!" << std::endl;
		return true;
	}

	return false;
}

int Stack::Peek() const
{
	if (!IsEmpty())
	{
		return pStack[top];
	}
}

void Stack::Push(int num)
{
	if (!IsFull())
	{
		top++;
		pStack[top] = num;
	}
}

int Stack::Pop()
{
	if (!IsEmpty())
	{
		top--;

		return pStack[top];
	}
}

void Stack::Print() const
{
	if (!IsEmpty())
	{
		for (int i = 0; i <= top; i++)
		{
			std::cout << pStack[i] << std::endl;
		}
	}
}
