#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	int k = 0; //сумма
	cout << "Введите количество месяцев от 1 до 12" << endl;
	cin >> n;
	if (n != 1 && n != 2 && n != 3 && n != 4 && n != 5 && n != 6 && n != 7 && n != 8 && n != 9 && n != 10 && n != 11 && n != 12)
	{
		cout << "Ты совсем дебил. Давай по нормальному" << endl;
		return 1;
	}
	for (int i = 1; i < n + 1; i++)
	{
		k = k + 15;
		if (i % 3 == 0)
		{
			k = k - 3;
		}
	}
	cout << "Итого: " << k;
	return 0;
}