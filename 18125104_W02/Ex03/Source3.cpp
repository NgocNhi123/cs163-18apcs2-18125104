#include"Function3.h"

int main()
{
	Node* root = NULL;
	input(root);
	Decending(root);
	cout << endl;
	deleteBST(root);
	system("pause");
	return 0;
}