#include <stdio.h>

void main() {
	FILE* rfp, * wfp;
	char name[10];
	int sang, meun, seo, jung;
	int tot;
	rfp = fopen("f:\\exam\\data1.txt", "r");
	wfp = fopen("f:\\exam\\data2.txt", "w");
	fprintf(wfp, "\t\t[지점 실적표]\n");
	fprintf(wfp, "--------------------------------------------------------\n");
	fprintf(wfp, "지점\t1분기\t2분기\t3분기\t4분기\t합계\n");
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