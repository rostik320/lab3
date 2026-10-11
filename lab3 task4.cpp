#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int days;
	cout << "Введите количество дней от 1 до 7" << endl;
	cin >> days;
	if (days > 7 || days < 1)
	{
		cout << "Давай по нормальному" << endl;
		return 1;
	}
	int calls;
	cout << "Введите количество звонков от 1 до 7" << endl;
	cin >> calls;
	if (calls > 7 || calls < 1)
	{
		cout << "Давай по нормальному" << endl;
		return 1;
	}
	int all = 0;
	for (int i = 1; i <= days; i++)
	{
		for (int j = 1; j <= calls; j++) {
			cout << i << " - " << j << endl;
			all = all + j;
		}
	}
	cout << "Всего: " << all << endl;
	return 0;
}