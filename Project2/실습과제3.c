#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUM 100000000
/* made by leegeo
*/

int main(void)
{
	int anw[] = { 0 };
	int n = 0;
	int i = 0;
	printf("정수를 입력하세요 : \n");
	scanf_s("%d", &n);

	printf("");

	for (i = 2; i <= n; i++);
	{
		if (n % i == 0)break;
	}

	return 0;
};
