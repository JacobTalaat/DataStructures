#pragma once
class ArrayListLec4
{
private:
	int* arr;
	int size, count;
	void Expand();
public:

	ArrayListLec4();

	void Append(int val);

	void insertAt(int pos, int val);

	int At(int pos);

	void deleteAt(int pos);

	int Length();

};

