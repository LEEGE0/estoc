#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by leegeo
*/
int main(void)
{
	int a;
	int b;

	printf("��ǥ�� x, y���� �Է��Ͻʽÿ�: \n");
	scanf_s("%d %d", &a, &b);

	{
		if (a > 0 && b > 0)

			printf("1��и� �Դϴ�");

		else if (a > 0 && b < 0)

			printf("2��и� �Դϴ�");

		else if (a < 0 && b > 0)

			printf("3��и� �Դϴ�");

		else if (a < 0 && b < 0)

			printf("4��и� �Դϴ�");

		else
			printf
			("�����Դϴ�");
	}
	return 0;
};