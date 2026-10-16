#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 0;
	int k = 0;
	int j = 0;
	while (i >= 0)
	{
		cin >> i;
		k += i;
		if (i == 0)
		{
			break;
		}
		if (i < 0)
		{
			continue;
		}
		if (i >= 5)
		{
			j++;
		}
	}
	cout << k << endl;
	cout << j << endl;
	return 0;
}