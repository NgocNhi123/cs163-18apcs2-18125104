#ifndef FUNCTION_H_
#define FUNCTION_H_

#include<iostream>
using namespace std;

struct LinkedList
{
	int data;
	LinkedList* pNext = nullptr;
};

class ChainingHashtable
{
private:
	int size = 23; //
	LinkedList* a[23]; //
public:
	ChainingHashtable();
	void add(int x);
	bool exist(int x);
	void print();
	void deleteAll();
};

#endif // !FUNCTION_H_

