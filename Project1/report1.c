#include <stdio.h>

int main(void)
{
	char ch;

	printf("�����Է� : ");
	scanf_s (" %c", &ch, sizeof(ch)); 
	
	printf(" %d\n", ch); 

	return 0; 
}