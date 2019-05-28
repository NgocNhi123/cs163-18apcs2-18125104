#include"Function9.h"

int main()
{
	Node* root = NULL;
	input(root);
	int x;
	cout << "Enter x: ";
	cin >> x;
	cout << Predecessor(root, x)->data << endl;
	deleteBST(root);
	system("pause");
	return 0;
}