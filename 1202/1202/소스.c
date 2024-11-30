#include <stdio.h>

/*int main(void) {
	FILE* fp; //1단계

	fp = fopen("주소"); //2단계

	fgets(str, 9, fp); //3단계

	fclose(fp); //4단계
}*/

/*int main(void) {
	char str[100];
	FILE* rfp; // 1단계
	rfp = fopen("D:\\b-ban\\win.ini", "r");// 2단계
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
	FILE* rfp; // 1단계

	rfp = fopen("D:\\b-ban\\data2.txt","r");
	while (1) {
		fscanf(rfp, "%d%d", &num, &num1);
		
		sum += num;
		if (feof(rfp)) {
			break;
		}
		printf("%d + %d = %d\n", num, num1, num + num1);
	}
	printf("합계 : %d\n", sum);
	fclose(rfp);
}*/

int main(void) {
	char str[20];
	FILE* wfp;
	wfp = fopen("D:\\b-ban\\data3.txt", "w");//w 지우고 새로, a 그대로 추가, r 읽기만
	while (1) {
		printf("문자열 입력 : ");
		scanf("%s", str);
		if (strcmp(str, "0") == 0) {
			break;
		}
		fputs(str, wfp);
		fputs("\n", wfp);
	}
	fclose(wfp);
}

