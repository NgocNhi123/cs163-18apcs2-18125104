#include"Function.h"

int main()
{
	Node* root = NULL;
	input(root);
	int x;
	cout << "Enter x to delete: ";
	cin >> x;

	DelX(root, x);
	Output(root);

	deleteBST(root);
	system("pause");
	return 0;
}