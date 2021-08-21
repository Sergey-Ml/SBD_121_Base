//ControlStructures - Цикл If
#include<iostream>
using namespace std;
//#define IF_SIMPLE_CONDITION
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef IF_SIMPLE_CONDITION
	int temperature;
	cout << "Введите температуру воздуха:"; cin >> temperature;
	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "На улице холодно" << endl;
	}
#endif //IF_SIMPLE_CONDITION
}
