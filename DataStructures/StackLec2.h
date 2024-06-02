#pragma once
class StackLec2
{
private:
	int capacity;
	int elements;
	int* arr;
	void Expand();
public:
	StackLec2();
	bool IsEmpty();
	int length();
	void push(int val);
	void pop();
	int top();
	
};

