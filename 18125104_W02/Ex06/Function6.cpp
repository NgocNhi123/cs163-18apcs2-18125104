#include"Function6.h"

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

Node* MinValue(Node* root)
{
	if (root->left == NULL)
		return root;
	else
		MinValue(root->left);
}