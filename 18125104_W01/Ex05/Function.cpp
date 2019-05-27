#include "Function.h"

DoubleHashingHashtable::DoubleHashingHashtable()
{
	a = new int[size];
	for (int i = 0; i < size; i++)
		a[i] = 0;
}

void DoubleHashingHashtable::add(int x)
{
	int hashing = x % size;
	if (a[hashing] == 0)
		a[hashing] = x;
	else
	{
		int i = hashing;
		int hashing2 = (x % (size - 1)) + 1;
		int j = 1;
		while (a[i] != 0)
		{
			i = hashing + j*hashing2;
			j++;
			if (i >= size) i = i % size;
			if (i == hashing) return;
		}
		a[i] = x;
	}
}

bool DoubleHashingHashtable::exist(int x)
{
	int hashing = x % size;
	if (a[hashing] == x)
		return true;
	else
	{
		int i = hashing;
		int hashing2 = (x % (size - 1)) + 1;
		int j = 1;
		while (a[i] != x && a[i] != 0)
		{
			i = hashing + j * hashing2;
			j++;
			if (i >= size) i = i % size;
			if (i == hashing) return false;
		}
		if (a[i] == x) return true;
		if (a[i] == 0) return false;
	}
	return false;
}

void DoubleHashingHashtable::print()
{
	for (int i = 0; i < size; i++)
		cout << i << "	" << a[i] << endl;
}

void DoubleHashingHashtable::deleteAll()
{
	delete[] a;
}