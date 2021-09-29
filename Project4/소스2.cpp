#include<iostream>
#include<stdio.h>
using namespace std;

int Factorial(int num) 
{
    if (num == 0) return 1;

    int result = 1;

    for (int i = num; i >= 1; i--) 
    {
        result *= i;
    }

    return result;
}


int main2(void) 
{

    int n, k = 0;
    printf("n값을 입력해 주세요 : ");
    scanf_s("%d", &n);
    printf("k값을 입력해 주세요 : ");
    scanf_s("%d", &k);

    cout << Factorial(n) / (Factorial(k) * Factorial(n - k)) << " ";

    return 0;
}