#include "Function.h"

LinearProbingHashtable::LinearProbingHashtable()
{
	a = new int[size];
	for (int i = 0; i < size; i++)
		a[i] = 0;
}

void LinearProbingHashtable::add(int x)
{
	int hashing = x % size;
	if (a[hashing] == 0)
		a[hashing] = x;
	else
	{
		int i = hashing;
		while (a[i] != 0)
		{
			i++;
			if (i == size) i = 0;
			if (i == hashing) return;
		}
		a[i] = x;
	}
}

bool LinearProbingHashtable::exist(int x)
{
	int hashing = x % size;
	if (a[hashing] == x)
		return true;
	else
	{
		int i = hashing;
		while (a[i] != x && a[i] != 0)
		{
			i++;
			if (i == size) i = 0;
			if (i == hashing) return false;
		}
		if (a[i] == x) return true;
		if (a[i] == 0) return false;
	}
	return false;
}

void LinearProbingHashtable::print()
{
	for (int i = 0; i < size; i++)
		cout << i << "	" << a[i] << endl;
}

void LinearProbingHashtable::deleteAll()
{
	delete[] a;
}