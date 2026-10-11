#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 0;
	int k = 100;
	do
	{
		cin >> i;
	} while (i<=0 || i>=100);
	k -= i;
	cout << k;
	return 0;
}