#include "Tree.h"

template <class T>
class SearchTree : public Tree<T>
{
public:
	// protocol for search trees
	void add(T value);
	bool search(T value);
	void remove(T value);
private:
	void add(class Tree<T>::Node* current, T val);
	bool search(class Tree<T>::Node* current, T val);
	void remove(class Tree<T>::Node*& current, T val);
};

template <class T>
void SearchTree<T>::add(T value)
{
	if (this->root == nullptr)
		this->root = new class Tree<T>::Node(value);
	else
		add(this->root, value);
}
template <class T>
void SearchTree<T>::add(class Tree<T>::Node* current, T val)
{
	if (current->value > val)
	{
		if (current->left == nullptr)
		{
			current->left = new class Tree<T>::Node(val);
		}
		else
			add(current->left, val);
	}
	else 
	{
		if (current->right == nullptr)
		{
			current->right = new class Tree<T>::Node(val);
		}
		else
			add(current->right, val);
	}

}

template <class T>
bool SearchTree<T>::search(T value)
{
	if (this->isEmpty())
		return false;
	else
		return search(this->root, value);
}

template <class T>
bool SearchTree<T>::search(class Tree<T>::Node* current, T val)
{

	if (!current)
		return false;
	if (current->value == val)
		return true;

	if (current->value > val)
	{
			return search(current->left, val);
	}
	else
	{
		return search(current->right, val);
	}
}


//public
template <class T>
void SearchTree<T>::remove(T value)
{
	if (search(this->root, value))
		remove(this->root, value);
}

template <class T>
void SearchTree<T>::remove(class Tree<T>::Node*& current, T val)
{
}


//
//
//
//
//
//
//
//
////public
//template <class T>
//bool SearchTree<T>::search(T value)
//{
//	return search(root, value);
//}
//
////private
//template <class T>
//bool SearchTree<T>::search(class Tree<T>::Node* current, T val)
//{
//	// see if argument value occurs in tree
//	if (!current)
//		return false;	// not found
//	if (current->value == val)
//		return true;
//	if (current->value < val)
//		return search(current->right, val);
//	else
//		return search(current->left, val);
//}
//
////public
//template <class T>
//void SearchTree<T>::add(T val)
//{
//	// Add value to binary search tree 
//	if (!root)
//	{
//		root = new class Tree<T>::Node(val);
//		return;
//	}
//	add(root, val);
//}
//
////private
//
//template <class T>
//void SearchTree<T>::add(class Tree<T>::Node* current, T val)
//{
//	if (current->value < val) // Add to right subtree
//		if (!current->right)
//		{
//			current->right = new class Tree<T>::Node(val);
//			return;
//		}
//		else
//			add(current->right, val);
//	else  // Add to left subtree
//		if (!current->left)
//		{
//			current->left = new class Tree<T>::Node(val);
//			return;
//		}
//		else
//			add(current->left, val);
//}

