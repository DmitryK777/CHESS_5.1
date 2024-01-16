#include <iostream>
using namespace std;

//#define VERSION_1
#define VERSION_2

void main()
{
	setlocale(LC_ALL, "");

	int n; // Размер доски в клетках по ширине и высоте
	cout << "Please input size of board: "; cin >> n;
	cout << endl;

#if defined VERSION_1
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
#endif

#if defined VERSION_2
	string BLACK_STRING;
	string WHITE_STRING;
	
	switch (n)
	{
	case 2:
		BLACK_STRING = "* *";
		WHITE_STRING = "   ";
		break;
	case 3:
		BLACK_STRING = "* * *";
		WHITE_STRING = "     ";
		break;
	case 4:
		BLACK_STRING = "* * * *";
		WHITE_STRING = "       ";
		break;
	case 5:
		BLACK_STRING = "* * * * *";
		WHITE_STRING = "         ";
		break;
	case 6:
		BLACK_STRING = "* * * * * *";
		WHITE_STRING = "           ";
		break;
	case 7:
		BLACK_STRING = "* * * * * * *";
		WHITE_STRING = "             ";
		break;
	case 8:
		BLACK_STRING = "* * * * * * * *";
		WHITE_STRING = "               ";
		break;
	case 9:
		BLACK_STRING = "* * * * * * * * *";
		WHITE_STRING = "                 ";
		break;
	case 10:
		BLACK_STRING = "* * * * * * * * * *";
		WHITE_STRING = "                   ";
		break;
	default:
		cout << "With this size of board we won’t be able to do anything!";
		break;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (i % 2 == k % 2) cout << BLACK_STRING;
				else cout << WHITE_STRING;
			}
			cout << endl;
		}
		cout << endl;
	}
#endif
}