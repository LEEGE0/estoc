#include<stdio.h>

int main(void)
{
    int n, a, b, c = 0, aw = 0;

    printf("정수를 입력하세요 :   ");
    scanf_s("%d", &n);

    for (a = 1; a <= n; a++)
    {

        for (b = 1; b <= a; b++)
        {
            if (a % b == 0)
            {
                aw++;
            }
        }

        if (aw == 2)
        {

            printf("%5d", a);
            c++;
            if (c % 5 == 0)
                printf("\n");

        }
        aw = 0;

    }

    return 0;
}