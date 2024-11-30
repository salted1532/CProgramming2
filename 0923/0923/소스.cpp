#include <stdio.h>

int main(void) {

	int num [7] = {12,54,72,80,63,7,55};
	int tmp;
	int i, j;
	//strcmp(s1,s2) -> (s1 - s2) =,<,> 0
	//strcpy(s1,s2) -> s1 = s2
	for (j = 0; j < 7; j++) {
		for (i = 0; i < 7; i++) {
			if (num[j] < num[i]) {
				tmp = num[j];
				num[j] = num[i];
				num[i] = tmp;
			}
		}
	}

	for (i = 0; i < 7; i++) {
		printf("%d\t", num[i]);
	}
}