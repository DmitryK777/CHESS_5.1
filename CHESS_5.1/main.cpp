#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");

	int n; // ������ ����� � ������� �� ������ � ������
	cout << "������� ������ �����: "; cin >> n;
	cout << endl;


	for (int i = 0; i < n*n; i++)
	{
		for (int j = 0; j < n*n; j++)
		{
			if ((i / n) % 2 == (j / n) % 2) cout << "* ";
			else cout << "  ";
		}
		cout << endl;
	}
}