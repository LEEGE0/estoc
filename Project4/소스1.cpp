#include<stdio.h>

int main1(void)
{
    int rec_func(int n);

    printf("%d \n", rec_func(1));

    return 0;
}

int rec_func(int n)
{
    if (n == 10)
        return 10;

    return n + rec_func(n + 1);
}