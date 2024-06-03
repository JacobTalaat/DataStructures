#pragma once
enum Order {
	INORDER = 0,
	PREORDER = 1,
	POSTORDER = 2,
	XOrder = 3
};
template <class T>
class Node
{
public:
	T value;
	Node<T>* left, * right;
	Node();
	Node(T val);
};
template <class T>
class BSTLec6and7
{
	Node<T>* root;
	Node<T>* findNode(T val);
public:

	BSTLec6and7();

	bool contains(T val);


	void insert(T val);

};

