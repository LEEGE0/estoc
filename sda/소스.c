#include <stdio.h>
/* made by leegeo
*/

int main(void)
{

		int a = 0;
		int b = 0;
		char c;

		printf("��Ģ���� �Է�(����)\n");
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
			printf("�ٽ� �Է��ϼ��� :"); break;
		}

		return 0;
}