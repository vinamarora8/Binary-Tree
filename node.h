template <class T>
class node
{
private:
	node *left, *right;
	T data;
public:
	node(T element = (T)0, node *leftchild = 0, node *rightchild = 0);
};
