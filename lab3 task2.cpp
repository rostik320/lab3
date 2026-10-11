#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 0;
	int k = 0;
	while (i>=0)
	{
		cin >> i;
		k += i;
		if (i == 0)
		{
			break;
		}
	}
	cout << k;
	return 0;
}