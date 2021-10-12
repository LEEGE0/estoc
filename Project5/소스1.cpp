#include <stdio.h>

int main1(void)
{
    void CalcLcmGcd(int x, int y, int* pLcm, int* pGcd);
    {
        int x, y, xy, z, gcd, lcm = 0;
        printf("두 수를 입력하세요 : ");
        scanf_s("%d %d", &x, &y);
        xy = x * y;
        if (x > 0 && y > 0)
        {
            while (1)
            {
                z = x % y;
                if (!z)
                {
                    gcd = y;
                    lcm = xy / y;
                    break;
                }
                else
                {
                    x = y;
                    y = z;
                }
            }
            printf("최대공약수 = %d, 최소공배수 = %d\n", gcd, lcm);
        }
        else if (x != 0 || y != 0)
        {
            printf("양의 정수를 입력하세요. (Quit 0, 0)\n\n");
        }
        return 0;
    }
}