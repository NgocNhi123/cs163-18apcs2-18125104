#ifndef _FUNCTION6_H_
#define _FUNCTION6_H_

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
Node* MinValue(Node* root);
void deleteBST(Node* &root);

#endif // !_FUNCTION6_H_
#pragma once
#pragma once
