#include <iostream>
#include <random>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n; // ���-�� ��������
	srand(time(NULL));
	cout << "������� ���-�� ��������: ";
	cin >> n;
	int* bag;
	bag = new int [n]; // ������������ ������
	for (int i = 0; i < n; i++) // ���������� �������
	{
		bag[i] = i + 1;
	}
	int choice = 0; // ����� ��������� �������
	cout << endl;
	int i = -1; // ���������� ��� ����� ��������
	while (i < n) // ���� ��� ������ 
	{
		i++;
		if (i == n) // �������� �� ���-�� ���������� ���������
		{
			cout << endl;
			cout << "������� �����������! �� ��������.";
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


			cout << "����� �������: " << bag[choice];
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