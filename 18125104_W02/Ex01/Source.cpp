#include"Function.h"

int main()
{
	Node* root = NULL;
	input(root);
	PreOrder(root);
	cout << endl;
	deleteBST(root);
	system("pause");
	return 0;
}