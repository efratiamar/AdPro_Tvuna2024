#pragma once
#include <iostream>
using namespace std;

template <class T>
class Tree
{
protected:
    class Node //inner class
    {
    public:
        Node* left;
        Node* right;
        T value;

        Node(T val) : value(val), left(nullptr), right(nullptr) {}

        Node(T val, Node* l, Node* r)
            : value(val), left(l), right(r) {}
    }; //end of Node class 

    Node* root;

public:
    Tree() { root = nullptr; } // initialize tree
    virtual ~Tree();
    bool isEmpty() const;
    void clear() { clear(root); root = nullptr; }
    void preOrder() { preOrder(root); }
    void inOrder() { inOrder(root); }
    void postOrder() { postOrder(root); }

    virtual void process(T& val) { cout << val << " "; }
    virtual void add(T val) = 0;
    virtual bool search(T val) = 0;
    virtual void remove(T val) = 0;

    bool isHeap()
    {
        if (isHeapMax(root))
            return true;
        else if (isHeapMin(root))
            return true;
        else
            return false;

    }


private:
    void  clear(Node* current);
    void  preOrder(Node* current);
    void  inOrder(Node* current);
    void  postOrder(Node* current);
    //bool isHeapMax(Node* current);
    //bool isHeapMin(Node* current);
};

//template <class T>
//bool Tree<T>::isHeapMax(Node* current)
//{
//    if (!current)
//        return true;
//
//    if (current->left)
//        if (current->value < current->left->value)
//            return false;
//
//    if (current->right)
//        if (current->value < current->right->value)
//            return false;
//
//    return isHeapMax(current->left) && isHeapMax(current->right);
//
//}

template <class T>
Tree<T>::~Tree() // deallocate tree
{
    if (root != nullptr)
        clear(root);
}

template <class T>
void Tree<T>::clear(Node* current)
{
    if (current)
    {  // Release memory associated with children
        if (current->left)
            clear(current->left);
        if (current->right)
            clear(current->right);
        delete current;
    }
}

template <class T>
bool Tree<T>::isEmpty() const
{
    return  root == nullptr;
}

// preOrder processing of tree rooted at current
template <class T>
void Tree<T>::preOrder(class Tree<T>::Node* current)
{    // visit Node, left child, right child
    if (current)
    {
        // process current Node
        process(current->value);
        // then visit children
        preOrder(current->left);
        preOrder(current->right);
    }
}

// postOrder processing of tree rooted at current
template <class T>
void Tree<T>::postOrder(class Tree<T>::Node* current)
{    // visit left child, right child, node
    if (current)
    {
        postOrder(current->left);
        postOrder(current->right);
        process(current->value);
    }
}

// inOrder processing of tree rooted at current
template <class T>
void Tree<T>::inOrder(class Tree<T>::Node* current)
{    // visit left child, Node, right child
    if (current)
    {
        inOrder(current->left);
        process(current->value);
        inOrder(current->right);
    }
}

