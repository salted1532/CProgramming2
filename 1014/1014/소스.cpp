#include <stdio.h>

void main()
{
	int num;
	int *p;
	char ch = 'A';

	char *s;

	s = &ch;

	printf("%c\n", *s);
	num = 10;
	p = &num;

	printf("num �ּ� : %p\n", &num);
	printf("p �ּ� : %p\n", &p);
	printf("p�� �� : %p\n", p);
	printf("num�� �� : %d\n", num);

	printf("p�� ��� : %d\n", *p);

	num = *p * 10;
	*p = 200;
	printf("%d %d", num, *p);
}