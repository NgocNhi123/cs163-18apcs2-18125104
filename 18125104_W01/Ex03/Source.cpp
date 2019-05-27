#include "Function.h"

int main()
{
	LinearProbingHashtable table;
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