#ifndef _FUNCTION5_H_
#define _FUNCTION5_H_

#include<iostream>
#include<fstream>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

void BST(Node* &root, int data);
void input(Node* &root);
int maxDepth(Node* root);
int height(Node* left, Node* right);
void deleteBST(Node* &root);

#endif // !_FUNCTION5_H_
#pragma once
