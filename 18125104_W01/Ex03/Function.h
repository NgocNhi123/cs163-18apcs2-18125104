#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include<iostream>
using namespace std;

class LinearProbingHashtable
{
private:
	int size = 23;
	int *a;
public:
	LinearProbingHashtable();
	void add(int x);
	bool exist(int x);
	void print();
	void deleteAll();
};

#endif // !_FUNCTION_H_

