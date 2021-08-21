//Цикл FOR
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n; //Кол-во итераций
	cout << "Введите кол-во итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
}
