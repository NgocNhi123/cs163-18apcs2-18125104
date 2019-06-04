#include"Function.h"

int main()
{
	Node* root = NULL;
	input(root);
	topViewX(root, -1, 0);
	cout << endl;
	deleteBST(root);
	system("pause");
	return 0;
}