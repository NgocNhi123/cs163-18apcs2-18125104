#include"Function6.h"

int main()
{
	Node* root = NULL;
	input(root);
	cout << MinValue(root)->data << endl;
	deleteBST(root);
	system("pause");
	return 0;
}