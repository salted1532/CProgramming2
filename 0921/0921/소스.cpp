#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i;
	int a;
	int rnum = 0;
	int ran1, ran2, cnt;
	int jak, hol;
	srand((unsigned)time(NULL)); // 중요하네 난수 생성!
	time_t seconds;
	cnt = 0;
	jak = 0;
	hol = 0;
	scanf_s("%d %d", &ran1,&ran2);

	if (ran1 > ran2) {
		for (i = 0; i < 20; i++) {
			rnum = rand() % (ran1 - ran2 + 1) + ran2;
			printf("%d\t", rnum);
			cnt++;
			if (rnum % 2 == 0) {
				jak++;
			}
			else {
				hol++;
			}
			if (cnt == 5) {
				printf("\n");
				cnt = 0;
			}
		}
	}
	else {
		for (i = 0; i < 20; i++) {
			rnum = rand() % (ran2 - ran1 + 1) + ran1;
			printf("%d\t", rnum);
			cnt++;
			if (rnum % 2 == 0) {
				jak++;
			}
			else {
				hol++;
			}
			if (cnt == 5) {
				printf("\n");
				cnt = 0;
			}
		}
	}
	printf("짝 : %d 홀 : %d", jak, hol);

	scanf_s("%d", &i);

	void aigonan();

	switch (i/10)
	{
	case 10: printf("A+\n"); break;
	case 9: printf("A0\n"); break;
	case 8: printf("B+\n"); break;
	case 7: printf("B\n"); break;
	case 6: printf("C+\n"); break;
	case 5: printf("C\n"); break;
	case 4: printf("D\n"); break;
	case 3: printf("F\n"); break;
	case 2: printf("F\n"); break;
	case 1: printf("F\n"); break;
	default : break;
	}

	printf("단을 입력 : ");
	scanf_s("%d", &a);

	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n",a, i, i * a);
	}
	aigonan();
}

void aigonan() {
	printf_s("아이고난!\n");
}