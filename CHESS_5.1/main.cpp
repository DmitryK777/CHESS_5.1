#include <iostream>
using namespace std;

#define SPACE "\t\t\t"

void main()
{
	setlocale(LC_ALL, "");

	int n; // ������ ����� � ������� �� ������ � ������
	cout << "������� ������ �����: "; cin >> n;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (i % 2 == k % 2) for (int m = 0; m < n; m++) cout << "* ";

				else for (int m = 0; m < n; m++) cout << "  ";
			}
			cout << endl;
		}
	}
}