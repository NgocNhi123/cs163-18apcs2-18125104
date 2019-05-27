#include "Function.h"

ChainingHashtable::ChainingHashtable()
{
	for (int i = 0; i < size; i++)
	{
		a[i] = new LinkedList;
		a[i]->data = 0;
		a[i]->pNext = nullptr;
	}
}

void ChainingHashtable::add(int x)
{
	int hashing = x % size;
	if (a[hashing]->data == 0)
	{
		a[hashing]->data = x;
		a[hashing]->pNext = nullptr;
	}
	else
	{
		LinkedList *p = a[hashing];
		LinkedList *insert = new LinkedList;
		insert->data = x;
		insert->pNext = nullptr;
		while (p->pNext != nullptr)
			p = p->pNext;
		p->pNext = insert;
	}
}

bool ChainingHashtable::exist(int x)
{
	int hashing = x % size;
	if (a[hashing]->data == x)
		return true;
	else
	{
		LinkedList*p = a[hashing];
		while (p != nullptr)
		{
			if (p->data == x)
				return true;
			p = p->pNext;
		}
	}
	return false;
}

void ChainingHashtable::print()
{
	for (int i = 0; i < size; i++)
	{
		cout << i << "	" << a[i]->data << " ";
		LinkedList*p = a[i]->pNext;
		while (p != nullptr)
		{
			cout << p->data << " ";
			p = p->pNext;
		}
		cout << endl;
	}
}

void ChainingHashtable::deleteAll()
{
	for (int i = 0; i < size; i++)
		delete[] a[i];
	delete[] a;
}