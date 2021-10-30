#include <stdio.h>   
#include <stdlib.h> 

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i[100];
	int e[100];
	int o[200];
	int* arrA = i;
	int* arrB = e;
	int* arrC = o;
	int nSize = 0;

	printf("배열의 크기를 입력해 주세요 : \n");//배열 크기 정하기
	scanf_s("%d", &nSize);

	for (int a = 0; a < nSize; a++)//첫번째 배열만들기
	{
		printf("첫번째 배열의 정수를 입력해 주세요(하나씩입력): \n");
		scanf_s("%1d", &i[a]);
	}
	for (int b = 0; b < nSize; b++)//두번째 배열 만들기
	{
		printf("두번째 배열의 정수를 입력해 주세요(하나씩입력) : \n");
		scanf_s("%1d", &e[b]);
	}

	int x, y = 0;//배열합치기 (3번째 배열)
	for (x = 0; x < nSize; x++)
	{
		o[x] = i[x];
	}
	for (x = 0, y = nSize; y < nSize * 2; x++, y++)
	{
		o[y] = e[x];
	}
	for (int i = 0; i < nSize * 2 - 1; i++)
	{
		for (int j = 0; j < nSize * 2 - i - 1; j++)
		{
			if (o[j] > o[j + 1])
			{
				int temp = o[j];
				o[j] = o[j + 1];
				o[j + 1] = temp;
			}
		}
	}
	printf("\n합쳐진요소:");
	
	for (int z = 0; z < 2 * nSize; z++)
	{
		printf("%d ", o[z]);
	}

	return 0;
}