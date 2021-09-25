#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    double d;

    printf("첫 번째 좌표(x, y)의 x 값과 y 값을 입력 하세요 : ");
    scanf_s("%d %d", &x1, &y1);

    printf("두 번째 좌표(x, y)의 x 값과 y 값을 입력 하세요 : ");
    scanf_s("%d %d", &x2, &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("유클리디안 거리는 %.3f 입니다! \n", d);

    return 0;
}