#ifndef _FUNCTION_H_
#define _FUNCTION_H_

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
void deleteBST(Node* &root);
void Output(Node* root);

void DelX(Node* &root, int x);

#endif // !_FUNCTION_H_
#pragma once
