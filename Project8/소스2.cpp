#include<stdio.h>
#include<string.h>

int main() 
{
    int i;
    char str[100];//임의의 문자열 길이입니다
    char ascii[127] = { 0, }; //아스키코드가 0~127번 까지 있어서 127 까지 입니다
    printf("문자열을 입력해주세요 : ");
    scanf("%s", str);//scanf_s로 했더니 정해진 길이가 없다는 오류때문에 비쥬얼프로젝트에서 scanf관련 수정을 하였습니다.

    for (i = 0; str[i]; i++)
    {
        ascii[str[i]]++;
    }

    for (i = 0; str[i]; i++)
    {
        if (ascii[str[i]] == 0)
        {
            continue;
        }
        else
        {
            printf("%c가 %d번\n", str[i], ascii[str[i]]);
            ascii[str[i]] = 0;
        }

    }
    printf("입니다.");
    return 0;
}