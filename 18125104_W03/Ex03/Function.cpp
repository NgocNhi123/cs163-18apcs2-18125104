#include"Function.h"

void BST(Node* &root, int data)
{
	if (root == NULL)
	{
		root = new Node;
		root->data = data;
		root->left = NULL;
		root->right = NULL;
	}
	else
	{
		if (root->data > data)
			BST(root->left, data);
		if (root->data < data)
			BST(root->right, data);
	}
}

void input(Node* &root)
{
	ifstream fin;
	fin.open("input.txt");
	if (fin.is_open())
	{
		int n;
		fin >> n;
		while (n != 0)
		{
			BST(root, n);
			fin >> n;
		}
		cout << "Input success" << endl;
	}
	else
		cout << "Can't open input.txt" << endl;
	fin.close();
}

void deleteBST(Node* &root)
{
	if (root != NULL)
	{
		deleteBST(root->left);
		deleteBST(root->right);
		delete root;
	}
}

int Height(Node* root)
{
	if (root == nullptr) return 0;
	int LeftHeight = Height(root->left);
	int RightHeight = Height(root->right);
	if (LeftHeight > RightHeight)
		return LeftHeight + 1;
	return RightHeight + 1;
}

void PrintLevelOrder(Node* root)
{
	int MaxHeight = Height(root);
	for (int i = 1; i <= MaxHeight; i++)
		PrintEachLevel(root, i);
}

void PrintEachLevel(Node* root, int level)
{
	if (root == NULL) return;
	if (level == 1)
	{
		cout << root->data << " ";
		return;
	}
	PrintEachLevel(root->left, level - 1);
	PrintEachLevel(root->right, level - 1);
}