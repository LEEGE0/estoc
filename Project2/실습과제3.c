#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by leegeo
*/
int main(void)
{
	int a;
	int b;

	printf("좌표의 x, y값을 입력하십시오: \n");
	scanf_s("%d %d", &a, &b);

	{
		if (a > 0 && b > 0)

			printf("1사분면 입니다");

		else if (a > 0 && b < 0)

			printf("2사분면 입니다");

		else if (a < 0 && b > 0)

			printf("3사분면 입니다");

		else if (a < 0 && b < 0)

			printf("4사분면 입니다");

		else
			printf
			("원점입니다");
	}
	return 0;
};