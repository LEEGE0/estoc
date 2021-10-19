#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main1(void)
{
	srand(unsigned(time(NULL)));//컴퓨터의 랜덤한 패턴을 유발하기 위해 순간마다 변하는 시간값을 사용

	int choose = 0, CPU = 0, Win = 0, Lose = 0, Draw = 0, Round = 3;//선택하는 변수,컴퓨터의 변수,이긴횟수,진 횟수,비긴횟수,전체 라운드수
	int whoiswin = 0; int quit = 0;//매판마다 누가 이겻는지 판단하는 변수, 나가기 확인용 변수

	while (0 < Round)//라운드 수만큼 반복
	{
		printf("\n가위바위보를 시작합니다 시합은 3판2선승제 입니다.\n 1. 가위 2. 바위 3. 보 4. 포기\n 숫자를 입력하세요 : ");//가위바위보 시작
		scanf_s("%d", &choose);//사용자가 무엇을 선택하는지 확인

		if (4 == choose)//4번일 경우 아래 코드 실행
		{
			printf_s("시합을 포기하시겠습니까? \n 1. 시합을 포기합니다\n 2. 시합을 재개합니다 :");// 게임 종료와 이어하기중 선택
			scanf_s("%d", &quit);
			if (1 == quit)
				break;//바로 종료
			if (2 == quit)
				continue;//다시 선택문으로 돌아가기
		}

		if (1 > choose || 4 < choose)//1~4 사이의 수가 아닐때 다시 선택문으로
		{
			continue;
		}

		CPU = rand() % 3 + 1; //랜덤 함수 지정 1~3까지 

		whoiswin = choose - CPU; // 가위바위보의 수를 계산하여 결과값에 따라 승패무가 결정됨

		if (1 == choose)
			printf("\n당신의 선택은 가위!!\n");
		else if (2 == choose)
			printf("\n당신의 선택은 바위!!\n");
		else
			printf("\n당신의 선택은 보!!\n");

		if (1 == CPU)
			printf("\n상대방의 선택은? 가위!!\n");
		else if (2 == CPU)
			printf("\n상대방의 선택은? 바위!!\n");
		printf("\n상대방의 선택은? 보!!\n");

		if (0 == whoiswin)
		{
			printf("\n\t무승부!\n\n");
			++Draw;
		}
		else if (-2 == whoiswin || 1 == whoiswin)
		{
			printf("\n\t승리!\n\n");
			++Win;
		}
		else
		{
			printf("\n\t패배!\n\n");
			++Lose;
		}
		--Round;// 라운드수를 하나 차감하고 다시 처음부터 실행
	}
	printf("\n\n\t승: %d, 패: %d, 무: %d\n\n", Win, Lose, Draw);// 승패무 결과 표시
	return 0;
}