#include<iostream>
#include<conio.h>
using namespace std;
#define Escape      27
#define UP_ARROW    72
#define DOWN_ARROW  80
#define LEFT_ARROW  75
#define RIGHT_ARROW 77
void main()
{
	setlocale(LC_ALL , "Ru");

	char key;
	do
	{
		key = _getch();

		if (key == 'w' || key == 'W'|| key == UP_ARROW)
		{
			cout << "������";
		}
		else if (key == 'w' || key == 'W' || key == DOWN_ARROW)
		{
			cout << "�����";
		}
		else if (key == 'w' || key == 'W' || key == LEFT_ARROW)
		{
			cout << "�����";
		}
		else if (key == 'w' || key == 'W' || key == RIGHT_ARROW)
		{
			cout << "������";
		}
		else if (key == ' ')
		{
			cout << "������";
		}
	} while (key!=Escape);

}