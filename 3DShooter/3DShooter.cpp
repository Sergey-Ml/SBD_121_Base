// 3DShooter
#include<iostream>
#include<conio.h>
using namespace std;
//��������� #define ���������� ���_�������� ��� ��������
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
			//����� � ���� ������
		case 'w': case 'W': case UpArrow: cout << "������" << endl; break;
		case 's': cout << "�����" << endl; break;
		case 'S': cout << "�����" << endl; break;
		case DownArrow: cout << "�����" << endl; break;
		case 'a': cout << "�����" << endl; break;
		case 'A': cout << "�����" << endl; break;
		case LeftArrow: cout << "�����" << endl; break;
		case 'd': cout << "������" << endl; break;
		case 'D': cout << "������" << endl; break;
		case RigthArrow: cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case 13: cout << "�������" << endl; break;
		default: if (key != -32) cout << "Error" << endl;
		}
	} while (key != Escape);
}
