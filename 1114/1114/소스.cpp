#include <stdio.h>

int main(void) {
	int a =0, b=0 ,c=0;
    int max = 0, min = 0;
    printf("a�� �Է� : ");
    scanf_s("%d", &a);
    printf("b�� �Է� : ");
    scanf_s("%d", &b);
    printf("c�� �Է� : ");
    scanf_s("%d", &c);

    max = maxm(a, b, c);
    min = minm(a, b, c);
    printf("����   ū �� : %d\n", max);
    printf("���� ���� �� : %d\n", min);
}

void maxm (int a, int b, int c) {
    int max;

    if (a > b) {
        if (a > c) {
            max = a;
        }
    }
    else if (b > c) {
        max = b;
    }
    else {
        max = c;
    }
    return max;
}
void minm(int a, int b, int c) {
    int min;

    if (a < b) {
        if (a < c) {
            min = a;
        }
    }
    else if (b < c) {
        min = b;
    }
    else {
        min = c;
    }
    return min;
}