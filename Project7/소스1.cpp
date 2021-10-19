#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	srand(unsigned(time(NULL)));//컴퓨터의 랜덤한 패턴을 유발하기 위해 순간마다 변하는 시간값을 사용

	int choose = 0, choose1 = 0, choose2 = 0, CPU = 0, CPU1 = 0, CPU2 = 0, Win = 0, Lose = 0, Draw = 0, Round = 3;//선택하는 변수,컴퓨터의 변수,이긴횟수,진 횟수,비긴횟수,전체 라운드수
	int whoiswin = 0; int quit = 0;//매판마다 누가 이겻는지 판단하는 변수, 나가기 확인용 변수

	while (0 < Round)//라운드 수만큼 반복
	{
		printf("\n가위바위보 하나빼기를 시작합니다.\n 1. 가위 2. 바위 3. 보 4. 포기(2번 입력)\n 숫자를 2개 입력하세요 : ");//가위바위보 하나빼기 시작
		scanf_s("%d %d", &choose1, &choose2);//사용자가 무엇을 선택하는지 확인

		if (4 == choose1 && 4 == choose2)//4번일 경우 아래 코드 실행
		{
			printf_s("시합을 포기하시겠습니까? \n 1. 시합을 포기합니다\n 2. 시합을 재개합니다 :");// 게임 종료와 이어하기중 선택
			scanf_s("%d", &quit);
			if (1 == quit)
				break;//바로 종료
			if (2 == quit)
				continue;//다시 선택문으로 돌아가기
		}

		if (1 > choose1 || 4 < choose1 && 1 > choose2 || 4 < choose2)//1~4 사이의 수가 아닐때 다시 선택문으로
		{
			continue;
		}

		if (choose1 == choose2)
		{
			printf("\n두개가 같습니다 다시 선택해 주세요\n");
			continue;
		}
		while (CPU1 == CPU2)// 컴퓨터가 낸 것이 같으면 다시 및 처음 실행할 때 작동
		{
			CPU1 = rand() % 3 + 1; //랜덤 함수 지정 1~3까지 
			CPU2 = rand() % 3 + 1; //랜덤 함수 지정 1~3까지 
		}
		printf("\n 상대는\t");// 게임진행 상태를 보기위한 출력
		{
			if (1 == CPU1)
				printf("가위와 ");
			else if (2 == CPU1)
				printf("바위와 ");
			else
				printf("보와 ");
		}
		{
			if (1 == CPU2)
				printf("가위!!\n");
			else if (2 == CPU2)
				printf("바위!!\n");
			else
				printf("보!!\n");
		}

		printf("\n자신이 낸 ");//자신이 냇던 손을 가시적으로 보기 위한 출력
		{
			if (1 == choose1)
				printf("가위와 ");
			else if (2 == choose1)
				printf("바위와 ");
			else
				printf("보와 ");
		}
		{
			if (1 == choose2)
				printf("가위 중 하나를 선택해 주세요\n");
			else if (2 == choose2)
				printf("바위 중 하나를 선택해 주세요\n");
			else
				printf("보 중 하나를 선택해 주세요\n");
		}
		{
			if (1 == choose1)
				printf("1. 가위\n");
			else if (2 == choose1)
				printf("1. 바위\n");
			else
				printf("1. 보\n");
		}
		{
			if (1 == choose2)
				printf("2. 가위\n:");
			else if (2 == choose2)
				printf("2. 바위\n:");
			else
				printf("2. 보\n:");
		}

		scanf_s("%d", &choose);//사용자가 마지막으로 하나빼기를 한 손을 최종 가위바위보 값으로 변경하여 누가 이겻는지 계산할수 있게함
		if (1 == choose)
		{
			choose = choose1;
		}
		if (2 == choose)
		{
			choose = choose2;
		}

		CPU = rand() % 2;//컴퓨터가 둘중 하나를 랜덤으로 하나빼기 할수 있도록 하여 최종 가위바위보 값으로 변경하는 과정
		if (CPU == 0)
			CPU = CPU1;
		else if (CPU == 1)
			CPU = CPU2;

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
		else
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