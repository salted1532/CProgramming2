#include <stdio.h>
#include <string.h>
void main(void)
{
    int track[12] = { 0 };
    char point[12][8] = { "1","2", "3", "4", "5", "6", "7", "8", "9", "10","11" ,"12" };  // Ʈ���� ��� �̸�
    char gameobjecttag[8];  //  ����� ��� �Է� (���⼭�� 1 ���� 12����)
    int sum = 0, inx = 0, i;
    while (inx < 12)
    {
        printf("�����ġ �Է� (1,2,3...12 ����) : ");
        scanf_s("%s", gameobjecttag);
        if (track[0] == 0 && strcmp(gameobjecttag, point[0]) == 0)  // �� �ڵ��ϰ� ���� ����� ������ ���� ��.
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
            printf("\n=====> ���� Ʈ���� ����� ������� ���߽��ϴ�\n");
        }
        printf("Ʈ����Ȳ : ");
        for (i = 0; i < 12; i++)
        {
            printf("%d   ", track[i]);
        }
        printf("\n�����ġ : %d \n", sum + 1);
    }
    printf("\n\n�� ��� �߽��ϴ�.\n");
}