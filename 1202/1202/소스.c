#include <stdio.h>

/*int main(void) {
	FILE* fp; //1�ܰ�

	fp = fopen("�ּ�"); //2�ܰ�

	fgets(str, 9, fp); //3�ܰ�

	fclose(fp); //4�ܰ�
}*/

/*int main(void) {
	char str[100];
	FILE* rfp; // 1�ܰ�
	rfp = fopen("D:\\b-ban\\win.ini", "r");// 2�ܰ�
	while (1) {
		fgets(str, 99, rfp);
		if (feof(rfp)) {
			break;
		}
		printf("%s\n", str);
	}
	fclose(rfp);
}*/

/*int main(void) {
	int num,num1, sum = 0;
	FILE* rfp; // 1�ܰ�

	rfp = fopen("D:\\b-ban\\data2.txt","r");
	while (1) {
		fscanf(rfp, "%d%d", &num, &num1);
		
		sum += num;
		if (feof(rfp)) {
			break;
		}
		printf("%d + %d = %d\n", num, num1, num + num1);
	}
	printf("�հ� : %d\n", sum);
	fclose(rfp);
}*/

int main(void) {
	char str[20];
	FILE* wfp;
	wfp = fopen("D:\\b-ban\\data3.txt", "w");//w ����� ����, a �״�� �߰�, r �б⸸
	while (1) {
		printf("���ڿ� �Է� : ");
		scanf("%s", str);
		if (strcmp(str, "0") == 0) {
			break;
		}
		fputs(str, wfp);
		fputs("\n", wfp);
	}
	fclose(wfp);
}

