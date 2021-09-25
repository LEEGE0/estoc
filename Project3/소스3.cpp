#include<stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
	int a = 0;
	int p(0);
	int n(0);
	int t(0);

	printf("몇항까지 출력 할까요? : ");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		p = 0;
		n = 1;

		for (int j = 1; j <= i; j++)
		{

			t = n;
			n += p;
			p = t;
		}
		cout << n << " ";
	}

	return 0;
}