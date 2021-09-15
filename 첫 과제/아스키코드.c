#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by leegeo
*/
int main(void)
{
	int a;
	int b;

	printf("2개의 숫자를 띄어쓰기를 통해 입력해 주십시오 \n");
	scanf_s("%d %d", &a, &b);

	if (a % b == 0)
	{
		printf("두번째 수가 첫번째 수의 약수 입니다");
	}
	else
		printf("두번쨰 수가 첫번째 수의 약수가 아닙니다");

	return 0;
}