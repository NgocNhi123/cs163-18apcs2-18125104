#include"Function.h"

int main()
{
	Node* root = NULL;
	input(root);
	PrintLevelOrder(root);
	deleteBST(root);
	system("pause");
	return 0;
}