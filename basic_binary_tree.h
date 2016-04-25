#include "node.h"
#include "node.cpp"

template <class T>
class basic_binary_tree
{
private:
	node<T> *root;
	int size;
public:
	template <int n> basic_binary_tree(int a[n]);
	preorder_traversal(void *);
	postorder_traversal(void *);
	inorder_traversal(void *);
};
