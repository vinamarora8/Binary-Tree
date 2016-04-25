#include "node.h"

template <typename T>
node<T>::node(T element, node *leftchild, node *rightchild)
{
	data = element;
	left = leftchild;
	right = rightchild;
}
