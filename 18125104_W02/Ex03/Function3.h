#ifndef _FUNCTION3_H_
#define _FUNCTION3_H_

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
void Decending(Node* root);
void deleteBST(Node* &root);

#endif // !_FUNCTION3_H_
#pragma once
