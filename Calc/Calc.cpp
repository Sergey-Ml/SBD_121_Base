// ����������� 
#include<iostream>
using namespace std;
//#define IF_CALC

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef IF_CALC
	double a, b; //����� �������� � ����������
	char s;   //Sign - ���� ��������
	do
	{
		cout << "������� ������� �������������� ���������: "; cin >> a >> s >> b;
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
			cout << " ������: ��� ���������";
		}
	} while (true);
#endif
	double a, b; //����� �������� � ����������
	char s;   //Sign - ���� ��������
	cout << "������� ������� �������������� ���������: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
}
