#ifndef _FUNCTION7_H_
#define _FUNCTION7_H_

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
Node* MaxValue(Node* root);
void deleteBST(Node* &root);

#endif // !_FUNCTION7_H_
#pragma once
