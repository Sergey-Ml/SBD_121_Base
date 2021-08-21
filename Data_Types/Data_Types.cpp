#// Размер типов переменных
include<iostream>
using namespace std;
#define BOOLEAN
#define INTEGRAL_TYPES
void main()
{
	setlocale(LC_ALL, "Russian");
#if defined BOOLEAN
	cout << "datatypes" << endl;
	cout << true << endl;
	cout << false << endl;

#endif
#if defined INTEGRAL_TYPES
	cout << "SHORT:\n";
	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "\t" << SHRT_MAX << endl;
	cout << "Long long INT\n";
	cout << sizeof(long long) << endl;
	cout << 0 << "..." << ULLONG_MAX << endl;
#endif
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "\t" << FLT_MAX << endl;
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;
}