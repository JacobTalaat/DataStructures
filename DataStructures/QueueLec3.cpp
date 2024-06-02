#include "QueueLec3.h"
QueueLec3::QueueLec3() {
	size = 5;
	count = 0;
	front = back = 0;
	arr = new int[size];
}
void QueueLec3::enqueue(int val) {
	if (count == 0)
		front = 0;
	back = (back + 1) % size;
	arr[back] = val;
	count++;
}

void QueueLec3::dequeue() {
	if (count == 1)
		front = back = -1;
	else
		front = (front + 1) % size;
	count--;
	
}
int QueueLec3::Front() {
	return arr[front];
}
bool QueueLec3::empty() {
	return (count == 0);
}
int QueueLec3::length() {
	return count;
}