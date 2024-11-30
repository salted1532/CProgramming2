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

	printf("num 주소 : %p\n", &num);
	printf("p 주소 : %p\n", &p);
	printf("p의 값 : %p\n", p);
	printf("num의 값 : %d\n", num);

	printf("p의 대상 : %d\n", *p);

	num = *p * 10;
	*p = 200;
	printf("%d %d", num, *p);
}