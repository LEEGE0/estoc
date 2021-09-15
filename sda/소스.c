#include <stdio.h>
/* made by leegeo
*/

int main(void)
{

		int a = 0;
		int b = 0;
		char c;

		printf("사칙연산 입력(정수)\n");
		scanf_s("%d%c%d", &a, &c, &b);

		switch (c)
		{
		case '+':
			printf("%d\n", a + b);
			break;
		case '-':
			printf("%d\n", a - b);
			break;
		case '*':
			printf("%d\n", a * b);
			break;
		case '/':
			printf("%d\n", (double) a / b);
			break;
		default:
			printf("다시 입력하세요 :"); break;
		}

		return 0;
}