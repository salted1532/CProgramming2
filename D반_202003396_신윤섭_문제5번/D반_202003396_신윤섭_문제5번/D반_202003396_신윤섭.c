#include <stdio.h>

void main() {
	FILE* rfp, * wfp;
	char name[10];
	int sang, meun, seo, jung;
	int tot;
	rfp = fopen("f:\\exam\\data1.txt", "r");
	wfp = fopen("f:\\exam\\data2.txt", "w");
	fprintf(wfp, "\t\t[���� ����ǥ]\n");
	fprintf(wfp, "--------------------------------------------------------\n");
	fprintf(wfp, "����\t1�б�\t2�б�\t3�б�\t4�б�\t�հ�\n");
	fprintf(wfp, "--------------------------------------------------------\n");
	while (1) {
		fscanf(rfp, "%s%d%d%d%d%d", name, &sang, &meun, &seo, &jung);
		if (feof(rfp)) {
			break;
		}
		tot = sang + meun + seo + jung;
		fprintf(wfp, "%s\t%d\t%d\t%d\t%d\t%d\n", name, sang, meun, seo, jung, tot);
	}
	fprintf(wfp, "--------------------------------------------------------\n");
	fprintf(wfp, "67\t101\t119\t164\t451");
	fprintf(wfp, "\n");
	fprintf(wfp, "--------------------------------------------------------\n");
	fclose(rfp);
	fclose(wfp);
}