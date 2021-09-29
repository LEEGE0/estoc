#include<iostream>
#include<stdio.h>
using namespace std;

int Factorial1(int num) 
{
    if (num == 1 || num == 0) 
    {
        return 1;

    }
    else 
    {
        return Factorial1(num - 1) * num;
    }

}

int main3(void) 
{

    int n, k = 0;
    printf("n값을 입력해 주세요 : ");
    scanf_s("%d", &n);
    printf("k값을 입력해 주세요 : ");
    scanf_s("%d", &k);

    cout << Factorial1(n) / (Factorial1(k) * Factorial1(n - k)) << " ";

    return 0;
}