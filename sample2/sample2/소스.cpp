#include <iostream>
#define TEXT "Welcome to C++ Programming!!"
using namespace std;
int main()
{
	int age;
	cout << TEXT;

	cin >> age;
	cout << "����� ���̴�" << age;
	int a = 10;
	int b = 100;


	cout << "���� 10�� 10������ ǥ���ϸ� " << a << "�̸�, " << b << endl;

	cout << hex;

	cout << "���� 10�� 16������ ǥ���ϸ� " << a << " �Դϴ�." << b;
	cout << oct;

	cout << "���� 10�� 8������ ǥ���ϸ� " << a << "�̸�, " << b << endl;

	cout << hex;

	cout << "���� 10�� 16������ ǥ���ϸ� " << a << " �Դϴ�.";
	cout << "���� 10�� 8������ ǥ���ϸ� " << b << "�̸�, " << b << endl;

	return 0;
}
