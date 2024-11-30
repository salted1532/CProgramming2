#include <stdio.h>

void rankclac(int arr[5], int rank[5]);
void output(int arr[5], int rank[5]);

int main(void) {
	int arr[5] = { 99, 75, 88, 74, 95 };
	int rank[5];
	rankclac(arr, rank);
	output(arr, rank);
}

void rankcalc(int arr[5], int rank[5]) {

	int i, j;

	for (i = 0; i < 5; i++) {

		rank[i] = 1;

		for (j = 0; j < 5; j++) {

			if (arr[i] < arr[j]) {

				rank[i]++;

			}

		}

	}

}



void output(int arr[5], int rank[5]) {

	int i;

	printf("성적 : ");

	for (i = 0; i < 5; i++) {

		printf("%d\t", arr[i]);

	}
	printf("\n");

	printf("순위 : ");

	for (i = 0; i < 5; i++) {

		printf("%d\t", rank[i]);

	}

	printf("\n");

}