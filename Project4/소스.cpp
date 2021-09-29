#include <stdio.h>
#include <stdlib.h>
#include<cstdlib>
#include<ctime>
#define SIZE 6

int main(void)
{
	srand((unsigned int)time(NULL));

	int freq[SIZE] = { 0 };
	int i;
	int a = 0;
	printf("주사위를 몇번 던질지 선택하세요 : \n");
	scanf_s("%d", &a);
	
	for (i = 0; i <= a; i++)
		++freq[rand() % 6];
	
	printf("---------------------------------\n");
	printf(" 눈금수	       해당눈금이나온횟수\n");
	printf("---------------------------------\n");

	for (i = 0; i < SIZE; i++)
		printf("%3d	%16d\n", i + 1, freq[i]);

	return 0;
}