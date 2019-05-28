#include"Function7.h"

int main()
{
	Node* root = NULL;
	input(root);
	cout << MaxValue(root)->data << endl;
	deleteBST(root);
	system("pause");
	return 0;
}