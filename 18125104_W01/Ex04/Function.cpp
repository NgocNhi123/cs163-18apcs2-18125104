#include "Function.h"

QuadraticProbingHashtable::QuadraticProbingHashtable()
{
	a = new int[size];
	for (int i = 0; i < size; i++)
		a[i] = 0;
}

void QuadraticProbingHashtable::add(int x)
{
	int hashing = x % size;
	if (a[hashing] == 0)
		a[hashing] = x;
	else
	{
		int i = hashing;
		int j = 1;
		while (a[i] != 0)
		{
			i = hashing + j * j;
			j++;
			if (i >= size) i = i - (size - hashing);
			if (i == hashing) return;
		}
		a[i] = x;
	}
}

bool QuadraticProbingHashtable::exist(int x)
{
	int hashing = x % size;
	if (a[hashing] == x)
		return true;
	else
	{
		int i = hashing;
		int j = 1;
		while (a[i] != x && a[i] != 0)
		{
			i = hashing + j * j;
			j++;
			if (i >= size) i = i - (size - hashing);
			if (i == hashing) return false;
		}
		if (a[i] == x) return true;
		if (a[i] == 0) return false;
	}
	return false;
}

void QuadraticProbingHashtable::print()
{
	for (int i = 0; i < size; i++)
		cout << i << "	" << a[i] << endl;
}

void QuadraticProbingHashtable::deleteAll()
{
	delete[] a;
}