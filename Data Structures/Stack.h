#pragma once
#include<iostream>

class Stack
{
public:
	Stack(int size);
	~Stack();
	bool IsEmpty() const;
	bool IsFull() const;
	int Peek() const;
	void Push(int num);
	int Pop();
	void Print() const;
private:
	int top = -1;
	int SIZE;
	int* pStack;
};