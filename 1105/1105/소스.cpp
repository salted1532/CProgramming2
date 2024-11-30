#include <stdio.h>
#include <string.h>
void main(void)
{
    int track[12] = { 0 };
    char point[12][8] = { "1","2", "3", "4", "5", "6", "7", "8", "9", "10","11" ,"12" };  // 트랙의 깃발 이름
    char gameobjecttag[8];  //  통과한 깃발 입력 (여기서는 1 부터 12까지)
    int sum = 0, inx = 0, i;
    while (inx < 12)
    {
        printf("통과위치 입력 (1,2,3...12 까지) : ");
        scanf_s("%s", gameobjecttag);
        if (track[0] == 0 && strcmp(gameobjecttag, point[0]) == 0)  // 너 코드하고 같게 만들어 보려고 만든 것.
        {
            track[0] = 1;
            inx++;
        }
        else if (strcmp(gameobjecttag, point[inx]) == 0)
        {
            sum = 0;
            for (i = 0; i < inx; i++)
                sum += track[i];
            printf("\n");
            if (sum == inx)
            {
                track[inx] = 1;
                inx++;
            }
        }
        else {
            printf("\n=====> 이전 트랙의 깃발을 통과하지 못했습니다\n");
        }
        printf("트랙상황 : ");
        for (i = 0; i < 12; i++)
        {
            printf("%d   ", track[i]);
        }
        printf("\n통과위치 : %d \n", sum + 1);
    }
    printf("\n\n다 통과 했습니다.\n");
}