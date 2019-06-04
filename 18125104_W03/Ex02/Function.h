#ifndef FUNCTION_H_
#define FUNCTION_H_

#include<iostream>
#include<fstream>
using namespace std;

struct Node
{
	int data, pos;
	Node *left, *right;
};

void BST(Node* &root, int data);
void deleteBST(Node* &root);
void input(Node* &root);

void Print(Node* root);
int Height(Node* root);
void topView(Node * root, int height, int pos, int &max, int &min);
void topViewX(Node *root, int max, int min);

#endif // !FUNCTION_H_

