#include <stdio.h>

int main(void) {
	int a =0, b=0 ,c=0;
    int max = 0, min = 0;
    printf("a값 입력 : ");
    scanf_s("%d", &a);
    printf("b값 입력 : ");
    scanf_s("%d", &b);
    printf("c값 입력 : ");
    scanf_s("%d", &c);

    max = maxm(a, b, c);
    min = minm(a, b, c);
    printf("가장   큰 수 : %d\n", max);
    printf("가장 작은 수 : %d\n", min);
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