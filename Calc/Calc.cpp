// Калькулятор 
#include<iostream>
using namespace std;
//#define IF_CALC

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef IF_CALC
	double a, b; //Числа вводимые с клавиатуры
	char s;   //Sign - знак операции
	do
	{
		cout << "Введите простое арифметическое выражение: "; cin >> a >> s >> b;
		// cout << a << s << b << endl;

		if (s == '+')
		{
			cout << a << " + " << b << " = " << a + b << endl;
		}
		else if (s == '-')
		{
			cout << a << " - " << b << " = " << a - b << endl;
		}
		else if (s == '*')
		{
			cout << a << " * " << b << " = " << a * b << endl;
		}
		else if (s == '/')
		{
			cout << a << " / " << b << " = " << a / b << endl;
		}
		else
		{
			cout << " Ошибка: нет оператора";
		}
	} while (true);
#endif
	double a, b; //Числа вводимые с клавиатуры
	char s;   //Sign - знак операции
	cout << "Введите простое арифметическое выражение: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
}
