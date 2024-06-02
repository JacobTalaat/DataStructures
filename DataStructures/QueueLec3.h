#pragma once
class QueueLec3
{
private:
	int* arr;
	int count, size, front, back;
public:

	QueueLec3();

	void enqueue(int val);

	void dequeue();

	int Front();

	bool empty();

	int length();

};

