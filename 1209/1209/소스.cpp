#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*void main()
{
	FILE* rfp, * wfp;
	char str[100];
	char rfname[100];
	char wfname[100];

	printf("입력파일 이름 : ");
	scanf("%s", rfname);
	printf("출력파일 이름 : ");
	scanf("%s", wfname);

	rfp = fopen(rfname, "r");
	wfp = fopen(wfname, "w");

	while (1)
	{
		fgets(str, 99, rfp);
		if (feof(rfp)) {
			break;
		}
		fputs(str, wfp);
	}
	fclose(rfp);
	fclose(wfp);
}*/

/*void main() {
	FILE* wfp;
	char name[10];
	int age;
	float eye;

	wfp = fopen("d:\\b-ban\\data6.txt", "w");
	while (1) {
		printf("이름 / 나이 / 시력 : ");
		scanf("%s%d%f", name, &age, &eye);
		if (age == 0) {
			break;
		}
		fprintf(wfp, "%s\t%d\t%.1f\n", name, age, eye);
	}

	fclose(wfp);
}*/

/*void main() {

	FILE* wfp;
	char name[10];
	int guk, yung, su;

	srand((unsigned)time(NULL));

	wfp = fopen("d:\\b-ban\\data7.txt", "w");

	while (1) {
		printf("이름 : ");
		scanf("%s", name);

		if (strcmp(name,"0")==0) {
			break;
		}

		guk = rand() % (99 - 55 + 1) + 55;
		yung = rand() % (99 - 55 + 1) + 55;
		su = rand() % (99 - 55 + 1) + 55;
		printf("%s\t%d\t%d\t%d\n", name, guk, yung, su);
		fprintf(wfp, "%s\t%d\t%d\t%d\n", name, guk, yung, su);
	}
	fclose(wfp);
}*/

void main() {
	FILE* rfp, * wfp;
	char name[10];
	int kor, eng, mat, tot;
	float avg;

	rfp = fopen("d:\\b-ban\\data7.txt", "r");
	wfp = fopen("d:\\b-ban\\data8.txt", "r");
		printf("========================================================\n");
	while (1) {
		fscanf(rfp, "%s%d%d%d", name, &kor, &eng, &mat);
		if (feof(rfp)) {
			break;
		}
		fscanf(wfp, "%s%d%f", name, &tot, &avg);
		if (feof(wfp)) {
			break;
		}
		printf("%s\t%d\t%d\t%d\t%d\t%.2f\n", name, kor, eng, mat, tot, avg);
	}
	printf("--------------------------------------------------------\n");
	fclose(rfp);
	fclose(wfp);
}

/*void main() {
	FILE* rfp, * wfp;
	char name[10];
	char name1[10];
	int kor, eng, mat, tot;
	float avg;

	rfp = fopen("d:\\b-ban\\data7.txt", "r");
	
	printf("========================================================\n");
	while (1) {
		fscanf(rfp, "%s%d%d%d", name, &kor, &eng, &mat);
		if (feof(rfp)) {
			break;
		}
		printf("%s\t%d\t%d\t%d\n", name, kor, eng, mat);
		wfp = fopen("d:\\b-ban\\data8.txt", "r");
		while (1) {
			fscanf(wfp, "%s%d%f", name, &tot, &avg);
			if (feof(wfp)) {
				printf("데이터 없음\n");
				break;
			}
			if (strcmp(name, name1) == 0) {
				printf("%d\t%.2f\n", tot, avg);
				break;
			}
		}
		fclose(wfp);
	}
	printf("--------------------------------------------------------\n");
	fclose(rfp);
}*/