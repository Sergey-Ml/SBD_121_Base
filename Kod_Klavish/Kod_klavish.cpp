//�������� ��� ������ -Loops 
#include<iostream>
#include<conio.h>
using namespace std;
//#define WHILE
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WHILE
	int n; //���������� ��������
	int i = 0; //������� �����
	cout << "������� ���-�� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << "Hello World" << endl;
	}

#endif //WHILE
	char key; //����� ������� ��� �������
	do
	{
		key = _getch();
		if (key != 32)
			cout << (int)key << "\t" << key << endl;
		else
			cout << "������";
	} while (key != 27);
}

