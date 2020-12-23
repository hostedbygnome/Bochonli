#include <iostream>
#include <random>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n; // кол-во бочонков
	srand(time(NULL));
	cout << "Введите кол-во бочонков: ";
	cin >> n;
	int* bag;
	bag = new int [n]; // динамический массив
	for (int i = 0; i < n; i++) // заполнение массива
	{
		bag[i] = i + 1;
	}
	int choice = 0; // номер выпавшего бочонка
	cout << endl;
	int i = -1; // переменная для счета бочонков
	while (i < n) // цикл для вывода 
	{
		i++;
		if (i == n) // проверка на кол-во оставшихся элементов
		{
			cout << endl;
			cout << "Бочонки закончились! До свидания.";
			break;

		}
		else
		{
			choice = rand() % n;
			cout << endl;
			if (bag[choice] == 0)
			{
				while (bag[choice] == 0)
				{
					choice = rand() % n;
				}
			}


			cout << "Выпал бочонок: " << bag[choice];
			bag[choice] = 0;
			cout << endl;

			cout << endl;
			system("pause");
		}
	}
	cout << endl;
	cout << endl;
	cout << endl;
	return 0;
}