#include"Function8.h"

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

//Node* FindX(Node* root, int x)
//{
//	if (root->data == x && root != NULL)
//		return root;
//	if (root->data > x && root->left != NULL)
//		return FindX(root->left, x);
//	if (root->data < x && root->right != NULL)
//		return FindX(root->right, x);
//}

Node* Successor(Node* root, int x)
{
	Node* origin = root;
	while (root->data != x)
	{
		if (root->data < x)
			root = root->right;
		else if (root->data > x)
			root = root->left;
	}
	if (root->right != NULL)
	{
		root = root->right;
		while (root->left != NULL)
			root = root->left;
		return root;
	}
	else
	{
		Node* successor = NULL;
		while (origin->data != x)
		{
			if (origin->data > x)
			{
				successor = origin;
				origin = origin->left;
			}
			else
				origin = origin->right;
		}
		return successor;
	}
}