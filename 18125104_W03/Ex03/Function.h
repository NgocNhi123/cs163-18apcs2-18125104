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
void input(Node* &root);
void deleteBST(Node* &root);

int Height(Node* root);
void PrintLevelOrder(Node* root);
void PrintEachLevel(Node* root, int level);

void Print(Node* root);

#endif // !FUNCTION_H_