//Цифровой код клавиш -Loops 
#include<iostream>
#include<conio.h>
using namespace std;
//#define WHILE
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WHILE
	int n; //Количество итераций
	int i = 0; //Счетчик цикла
	cout << "Введите кол-во итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "Hello World" << endl;
	}

#endif //WHILE
	char key; //Будет хранить код клавиши
	do
	{
		key = _getch();
		if (key != 32)
			cout << (int)key << "\t" << key << endl;
		else
			cout << "пробел";
	} while (key != 27);
}

