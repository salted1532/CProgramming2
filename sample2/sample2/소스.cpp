#include <iostream>
#define TEXT "Welcome to C++ Programming!!"
using namespace std;
int main()
{
	int age;
	cout << TEXT;

	cin >> age;
	cout << "당신의 나이는" << age;
	int a = 10;
	int b = 100;


	cout << "숫자 10을 10진수로 표현하면 " << a << "이며, " << b << endl;

	cout << hex;

	cout << "숫자 10을 16진수로 표현하면 " << a << " 입니다." << b;
	cout << oct;

	cout << "숫자 10을 8진수로 표현하면 " << a << "이며, " << b << endl;

	cout << hex;

	cout << "숫자 10을 16진수로 표현하면 " << a << " 입니다.";
	cout << "숫자 10을 8진수로 표현하면 " << b << "이며, " << b << endl;

	return 0;
}
