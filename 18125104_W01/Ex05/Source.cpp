#include "Function.h"

//74 12 217 36 61 77 286 153 337 93 121 47 463 248 146 0

int main()
{
	DoubleHashingHashtable table;
	cout << "Enter the array" << endl;
	int input;
	cin >> input;
	while (input != 0)
	{
		table.add(input);
		cin >> input;
	}
	table.print();

	int x;
	cout << endl << "Enter what you want to find? ";
	cin >> x;
	if (table.exist(x)) cout << "YES" << endl;
	else cout << "NO" << endl;

	table.deleteAll();
	system("pause");
	return 0;
}