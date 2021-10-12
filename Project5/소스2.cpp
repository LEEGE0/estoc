#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
using namespace std;

int main2(void)
{
    int array1[] = { 0,0 }, array2[2] = { 0,0 };

    printf("2개의 좌표를 입력하세요 : \n");
    scanf_s("%d %d", &array1[0], &array1[1]);
    printf("다음 2개의 좌표를 입력하세요 : \n");
    scanf_s("%d %d", &array2[0], &array2[1]);

    printf("덧셈 : (%d,%d) \n뺼셈 : (%d,%d) \n내적 : (%d) \n외적 : (Z: %d)",
        array1[0] + array2[0], array1[1] + array2[1],
        array1[0] - array2[0], array1[1] - array2[1],
        array1[0] * array2[0] + array1[1] * array2[1],
        array1[0] * array2[1] - array1[1] * array2[0]);

    return 0;
}