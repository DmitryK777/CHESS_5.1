#include <iostream>
using namespace std;

//#define VARIANT_1
#define VARIANT_2

//#define BLACK_STRING "* * * * *" 
//#define WHITE_STRING "         "

void main()
{
	setlocale(LC_ALL, "");

	int n; // –азмер доски в клетках по ширине и высоте
	cout << "¬ведите размер доски: "; cin >> n;
	cout << endl;

#if defined VARIANT_1
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
		cout << "— таким размером доски у нас ни чего не получитс€!";
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

}