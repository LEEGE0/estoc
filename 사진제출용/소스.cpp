#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by leegeo
*/
int plus(int a, int b) 
{
	return a + b;
}
int minus(int a, int b) 
{
	return a - b;
}
int mu(int a, int b) 
{
	return a * b;
}
int di(int a, int b)
{
	return a / b;
}

int main()
{

	while (1)
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
			printf("%d\n",(double) a / b); 
			break;
		default:
			printf("�ٽ� �Է��ϼ��� :"); break;
		}
		
	}
}