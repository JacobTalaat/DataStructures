#include "ArrayListLec4.h"
ArrayListLec4::ArrayListLec4() {
	size = 5;
	arr = new int[size];
	count = 0;
}
void ArrayListLec4::Append(int val) {
	if (count == size)
		Expand();
	arr[count] = val;
	count++;
}
void ArrayListLec4::Expand() {
	size *= 2;
	int* tmp = new int[size];
	for (int i = 0; i < count; i++)
		tmp[i] = arr[i];
	delete arr;
	arr = tmp;
}
void ArrayListLec4::insertAt(int pos,int val) {
	if (count == size)
		Expand();
	for (int i = count; i > pos; i--) 
		arr[i] = arr[i - 1];
	arr[pos] = val;
	count++;
}
int ArrayListLec4::At(int pos) {
	return arr[pos];
}
void ArrayListLec4::deleteAt(int pos) {
	for (int i = pos; i < count - 1; i++)
		arr[i] = arr[i + 1];
	count--;
}
int ArrayListLec4::Length() {
	return count;
}