#include"Function2.h"

int main()
{
	Node* root = NULL;
	input(root);
	Ascending(root);
	cout << endl;
	deleteBST(root);
	system("pause");
	return 0;
}