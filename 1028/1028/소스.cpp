#include <stdio.h>

int main(void) {
	/*int x = 10;
	int* p = &x;

	printf_s("%p\n", *p);
	printf_s("%p\n", p);
	printf_s("%p\n", &p);
	printf_s("%p\n", &x);
	printf_s("%d\n", *p);*/

	int arr[5] = { 10,20,30,40,50 };
	int *p = arr;
	int inx;
	/*for (i = 0; i < 5; i++) {
		printf("arr[%d] == *(p+%d) => %d , %d\n", i, i, arr[i], *(p + i));
	}
	printf("찾고 싶은 위치 : ");
	scanf_s("%d", &inx, sizeof(inx));
	printf("%d    %d\n", arr[inx], *(p + inx));*/

	/*for (i = 0; i < 1000; i++) {
		printf("%c",*(p + i));
	}*/

	int j = 0;
	int i = 0;

	while (1) {
		j = 0;
		while (j <= i) 
		{
			if (j == 3) {
				break;
				printf(" j1 = %d\n", j);
			}
			j++;
			printf("j2 = %d\n", j);
		}

		if (i == 5) {
			break;
		}
		i++;
		printf("i = %d\n", i);
	}
}