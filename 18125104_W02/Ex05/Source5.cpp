#include"Function5.h"

int main()
{
	Node* root = NULL;
	input(root);
	cout << maxDepth(root) << endl;
	deleteBST(root);
	system("pause");
	return 0;
}