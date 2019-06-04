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

void DelX(Node* &root, int x)
{
	if (root == NULL) return;
	else if (root->data < x)
	{
		DelX(root->right, x);
		return;
	}
	else if (root->data > x)
	{
		DelX(root->left, x);
		return;
	}
	if (root->left == nullptr)
		root = root->right;
	else if (root->right == nullptr)
		root = root->left;
	else
	{
		Node *tmp = root->right;
		while (tmp->left != nullptr)
			tmp = tmp->left;
		root->data = tmp->data;
		DelX(root->right, tmp->data);
	}
}

void Output(Node* root)
{
	ofstream fout("Save.txt", ios::app);
	if (root == nullptr)
		return;
	Output(root->left);
	fout << root->data << " ";
	fout.close();
	Output(root->right);
}
