#ifndef _FUNCTION8_H_
#define _FUNCTION8_H_

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
Node* Successor(Node* root, int x);
void deleteBST(Node* &root);

#endif // !_FUNCTION8_H_
#pragma once
