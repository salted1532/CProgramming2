#include <stdio.h>
#include <string.h>

void line(char ch, int cnt);

int main(void) {
	int jum[5][5] = { {85,75,73,99,73},{75,88,64,98,64} };
	char name[][10] = { "������","������","��ù�","�̼���","ȫ�浿"};
	int rank[5];
	int i, j;
	int search;
	bool chk;

	for (i = 0; i < 5; i++) {
		jum[2][i] = jum[0][i] + jum[1][i];
		jum[3][i] = jum[2][i] / 2;
	}

	for (i = 0; i < 5; i++) {
		rank[i] = 1;
		for (j = 0; j < 5; j++) {
			if (jum[3][i] < jum[3][j]) {
				rank[i]++;
			}
		}
	}
	line('=', 44);
	printf("����\t�߰�\t�⸻\t����\t���\t����\n");
	line('-', 44);
	for (i = 0; i < 5; i++) {
		printf("%s\t", name[i]);
		for (j = 0; j < 4; j++) {
			printf("%3d\t", jum[j][i]);
		}
		printf("%d\n", rank[i]);
	}
	line('#', 44);

	while (1) {
		chk = true;
		printf("�˻��ϰ��� �ϴ� ���� (0:����) : ");
		scanf_s("%d", &search);
		if (search == 0) {
			break;
		}
		for (i = 0; i < 5; i++) {
			if (search == rank[i]) {
				printf("%s\t", name[i]);
				for (j = 0; j < 4; j++) {
					printf("%3d\t", jum[j][i]);
				}
				printf("%d\n", rank[i]);
				chk = false;
			}
		}
		if (chk) {
			printf("�׷� ����� �����ϴ�.\n");
		}
	}
	char str[10];
	if (strcmp(str, name[i]) == 0) {}
	if (strcmp(str,"0") == 0) {}
}
void line(char ch, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++) {
		printf("%c", ch);
	}
	printf("\n");
}