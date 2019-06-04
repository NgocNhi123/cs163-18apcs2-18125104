#include"Function.h"

void BST(Node* &root, int data)
{
	if (root == NULL)
	{
		root = new Node;
		root->data = data;
		root->pos = 0;
		root->left = NULL;
		root->right = NULL;
	}
	else
	{
		if (root->data > data)
		{
			BST(root->left, data);
			root->left->pos = root->pos - 1;
		}
		if (root->data < data)
		{
			BST(root->right, data);
			root->right->pos = root->pos + 1;
		}
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

void Print(Node* root)
{
	if (root == NULL) return;
	Print(root->left);
	cout << root->data << " " << root->pos << endl;
	Print(root->right);
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

void topView(Node * root, int height, int pos, int &max, int &min)
{
	if (root == nullptr) return;
	if (height == 1)
	{
		if (pos > max)
		{
			max = pos;
			cout << root->data << " ";
		}
		else if (pos < min)
		{
			min = pos;
			cout << root->data << " ";
		}
		return;
	}
	topView(root->left, height - 1, pos - 1, max, min);
	topView(root->right, height - 1, pos + 1, max, min);
}

void topViewX(Node *root, int max, int min)
{
	int height = Height(root);
	for (int i = 1; i <= height; i++)
		topView(root, i, 0, max, min);
}