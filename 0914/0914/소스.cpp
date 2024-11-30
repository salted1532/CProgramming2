#include <stdio.h>

void main() {
	int num1 = 10, num2 = 4;
	char ch = 'A';
	printf_s("%d / %10d = %5.1f\n", num1, num2, (float)num1 / num2);
	printf_s("%c\n", ch);
	scanf_s("%c", &ch);
	printf_s("%c\n", ch);
}