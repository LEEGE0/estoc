#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    double d;

    printf("ù ��° ��ǥ(x, y)�� x ���� y ���� �Է� �ϼ��� : ");
    scanf_s("%d %d", &x1, &y1);

    printf("�� ��° ��ǥ(x, y)�� x ���� y ���� �Է� �ϼ��� : ");
    scanf_s("%d %d", &x2, &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("��Ŭ����� �Ÿ��� %.3f �Դϴ�! \n", d);

    return 0;
}