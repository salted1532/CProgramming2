#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {
	char name[10];
	int kor;
	int eng;
	int tot;
	int rank;
};
struct student s[5];

void Sungjukinput();
void SungjukOutput();
void SungjukSort();

void main() {
	student.name = "ȫ�浿";
	Sungjukinput();
	SungjukOutput();
	SungjukSort();
	SungjukOutput();
}

void Sungjukinput() {
	int i, j;
	srand((unsigned)time(NULL));
	for (i = 1; i < 5; i++) {
		printf("������ �Է��ϼ��� :");
		scanf_s("%s", s[i].name, sizeof(s[i].name));
		//scanf_s("%d%d", &s[i].kor, &s[i].eng);
		s[i].kor = rand() % (99 - 55 + 1) + 55;
		s[i].eng = rand() % (99 - 55 + 1) + 55;
		printf("���� = %d, ���� = %d\n", s[i].kor, s[i].eng);
		s[i].tot = s[i].kor + s[i].eng;
	}

	for (i = 0; i < 5; i++) {
		s[i].rank = 1;
		for (j = 0; j < 5; j++) {
			if (s[i].tot < s[j].tot) {
				s[i].rank++;
			}
		}
	}
}

void SungjukOutput() {
	int i;
	printf("===================================================\n");
	printf("����\t����\t����\t����\n");
	printf("---------------------------------------------------\n");
	for (i = 0; i < 5; i++) {
		printf("%s\t%3d\t%3d\t%3d\t%3d\n", s[i].name, s[i].kor, s[i].eng, s[i].tot, s[i].rank);
	}
	printf("---------------------------------------------------\n");
}

void SungjukSort() {
	int i, j;
	struct student tmp;
	//��Ʈ��Ű��
	printf("�ƹ�Ű�� ������ ��Ʈ�� �˴ϴ�.\n");
	system("pause");

	for (i = 0; i < 4; i++) {
		for (j = i; j < 5; j++) {
			if (s[i].tot < s[j].tot) {
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
		}
	}
}