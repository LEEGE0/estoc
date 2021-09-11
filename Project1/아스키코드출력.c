#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자입력 : ");
	scanf_s (" %c", &ch, sizeof(ch)); 
	
	printf(" %d\n", ch); 

	return 0; 
}