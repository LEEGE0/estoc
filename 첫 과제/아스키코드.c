#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* made by leegeo
*/
int main(void)
{
	int a;
	int b;

	printf("2���� ���ڸ� ���⸦ ���� �Է��� �ֽʽÿ� \n");
	scanf_s("%d %d", &a, &b);

	if (a % b == 0)
	{
		printf("�ι�° ���� ù��° ���� ��� �Դϴ�");
	}
	else
		printf("�ι��� ���� ù��° ���� ����� �ƴմϴ�");

	return 0;
}