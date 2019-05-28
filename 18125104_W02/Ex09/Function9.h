#ifndef _FUNCTION9_H_
#define _FUNCTION9_H_

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
Node* Predecessor(Node* root, int x);
void deleteBST(Node* &root);

#endif // !_FUNCTION9_H_
#pragma once
