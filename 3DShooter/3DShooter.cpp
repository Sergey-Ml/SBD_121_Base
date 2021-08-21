// 3DShooter
#include<iostream>
#include<conio.h>
using namespace std;
//Директива #define показывает ЧТО_ЗАМЕНИТЬ ЧЕМ ЗАМЕНИТЬ
#define Escape 27
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RigthArrow 77


void main()
{
	setlocale(LC_ALL, "Russian");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
			//можно в одну строку
		case 'w': case 'W': case UpArrow: cout << "Вперед" << endl; break;
		case 's': cout << "Назад" << endl; break;
		case 'S': cout << "Назад" << endl; break;
		case DownArrow: cout << "Назад" << endl; break;
		case 'a': cout << "Влево" << endl; break;
		case 'A': cout << "Влево" << endl; break;
		case LeftArrow: cout << "Влево" << endl; break;
		case 'd': cout << "Вправо" << endl; break;
		case 'D': cout << "Вправо" << endl; break;
		case RigthArrow: cout << "Вправо" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		case 13: cout << "Выстрел" << endl; break;
		default: if (key != -32) cout << "Error" << endl;
		}
	} while (key != Escape);
}
