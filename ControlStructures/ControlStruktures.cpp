//ControlStructures - ���� If
#include<iostream>
using namespace std;
//#define IF_SIMPLE_CONDITION
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef IF_SIMPLE_CONDITION
	int temperature;
	cout << "������� ����������� �������:"; cin >> temperature;
	if (temperature > 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� ����� �������" << endl;
	}
#endif //IF_SIMPLE_CONDITION
}
