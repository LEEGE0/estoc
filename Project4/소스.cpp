#include <stdio.h>
#include <stdlib.h>
#include<cstdlib>
#include<ctime>
#include<math.h>
#define SIZE 6

int main(void)
{
	srand((unsigned int)time(NULL));

	int freq[SIZE] = { 0 };
	int i;
	int a = 0;
	printf("주사위를 몇번 던질지 선택하세요 : \n");
	scanf_s("%d", &a);
	
	for (i = 0; i <= a; i++) ++freq[rand() % 6];
	
	printf("--------------------------------------------------------\n");
	printf("\t눈금수	       해당눈금이나온횟수          확률\n");
	printf("--------------------------------------------------------\n");

	for (i = 0; i < SIZE; i++)
		printf("\t%3d \t\t\t%d \t\t%.3f%% \n", i + 1, freq[i],(float)freq[i]/a*100);

	return 0;
}