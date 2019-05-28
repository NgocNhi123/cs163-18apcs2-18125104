#ifndef _FUNCTION4_H_
#define _FUNCTION4_H_

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
void PostOrder(Node* root);
void deleteBST(Node* &root);

#endif // !_FUNCTION4_H_
#pragma once
