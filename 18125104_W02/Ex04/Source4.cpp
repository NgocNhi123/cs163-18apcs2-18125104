#include"Function4.h"

int main()
{
	Node* root = NULL;
	input(root);
	PostOrder(root);
	cout << endl;
	deleteBST(root);
	system("pause");
	return 0;
}