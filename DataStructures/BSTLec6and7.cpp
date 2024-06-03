#include "BSTLec6and7.h"
template <class T>
Node<T>::Node() {
	left = right = nullptr;
}
template <class T>
Node<T>::Node(T val) {
	value = val;
	left = right = nullptr;
}
template <class T>
BSTLec6and7<T>::BSTLec6and7() {
	root = nullptr;
}
template <class T>
bool BSTLec6and7<T>::contains(T val) {
	Node<T>* tmp = findNode(val);
	retern(tmp != nullptr);
}
template <class T>
Node<T>* BSTLec6and7<T>::findNode(T val) {
	Node<T>* tmp = root;
	while (tmp !=nullptr)
	{
		if (tmp->value == val)
			return tmp;
		if (tmp->value > val)
			tmp = tmp->left;
		else
			tmp = tmp->right;
	}
	return tmp;
}
template <class T>
void BSTLec6and7<T>::insert(T val) {
	Node<T>* nodeToBeInserted = new Node<T>(val);
	if (root == NULL)
	{
		root = nodeToBeInserted;
	}
	else
	{
		Node<T>* temp = root;
		while (true)
		{
			if (temp->value > val)
			{
				//left
				if (temp->left == NULL)
				{
					temp->left = nodeToBeInserted;
					break;
				}
				else
				{
					temp = temp->left;
				}
			}
			else
			{
				//right
				if (temp->right == NULL)
				{
					temp->right = nodeToBeInserted;
					break;
				}
				else
				{
					temp = temp->right;
				}
			}
		}

	}
}
