#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	srand(unsigned(time(NULL)));//컴퓨터의 랜덤한 패턴을 유발하기 위해 순간마다 변하는 시간값을 사용

	int choose = 0, CPU = 0, Win = 0, Lose = 0, Draw = 0, Round = 2;//선택하는 변수,컴퓨터의 변수,이긴횟수,진 횟수,비긴횟수
	int whoiswin = 0; int quit = 0;//매판마다 누가 이겻는지 판단하는 변수, 나가기 확인용 변수
	int attack=0;

	while ( Round > 0 )//라운드 수만큼 반복
	{
		
		printf("\n묵찌빠를 시작합니다 시합 시작.\n 1. 찌 2. 묵 3. 빠 4. 포기\n 숫자를 입력하세요 : ");//가위바위보 시작
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

		whoiswin = choose - CPU; // 가위바위보의 수를 계산하여 결과값에 따라 승리인지 공격인지 수비인지 결정됨

		if (1 == choose)
			printf("\n당신의 선택은 찌!!\n");
		else if (2 == choose)
			printf("\n당신의 선택은 묵!!\n");
		else
			printf("\n당신의 선택은 빠!!\n");

		if (1 == CPU)
			printf("\n상대방의 선택은? 찌!!\n");
		else if (2 == CPU)
			printf("\n상대방의 선택은? 묵!!\n");
		else 
			printf("\n상대방의 선택은? 빠!!\n");

		if (0 == whoiswin)
		{
			printf("\n\t비겻습니다 다시 시작합니다\n\n");
			continue;
		}
		//비기지 않고 승부할 경우시작//
		while (0<Round)
		{
			if (-2 == whoiswin || 1 == whoiswin)//사용자의 선공
			{
				printf("\n\t당신의 공격 입니다!\n\n");
				printf("\n묵찌빠를 선택하세요.\n 1. 찌 2. 묵 3. 빠 4. 포기\n 숫자를 입력하세요 : ");//공격 시작
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

				whoiswin = choose - CPU; // 가위바위보의 수를 계산하여 결과값에 따라 승리인지 공격인지 수비인지 결정됨

				
				if (1 == choose)
					printf("\n찌!!\n");
				else if (2 == choose)
					printf("\n묵!!\n");
				else
					printf("\n빠!!\n");

				if (1 == CPU)
					printf("\n상대: 찌!!\n");
				else if (2 == CPU)
					printf("\n상대: 묵!!\n");
				else
					printf("\n상대: 빠!!\n");

				if (0 == whoiswin)//같은 손을내 비길경우
				{
					if (1 > attack)
					{
						printf("\n\t당신의 승리 입니다!!\n\n");
						++Win;
						break;
					}

					if (0 < attack)
					{
						printf("\n\tCPU의 승리 입니다!!\n\n");
						++Lose;
						--attack;
						break;
					}
				}
				else if (-2 == whoiswin || 1 == whoiswin)//사용자가 이겨 다시 할경우
					{
						continue;
					}
				else
					{
						continue; //컴퓨터가 이겨 다시 할 경우 다시함
					}
			}

			if (-1 == whoiswin || 2 == whoiswin)//CPU의 선공
				{
					++attack;
					printf("\n\tCPU의 공격 입니다!\n\n");
					printf("\n묵찌빠를 선택하세요.\n 1. 찌 2. 묵 3. 빠 4. 포기\n 숫자를 입력하세요 : ");//공격 시작
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

						whoiswin = choose - CPU; // 가위바위보의 수를 계산하여 결과값에 따라 승리인지 공격인지 수비인지 결정됨


						if (1 == choose)
							printf("\n찌!!\n");
						else if (2 == choose)
							printf("\n묵!!\n");
						else
							printf("\n빠!!\n");

						if (1 == CPU)
							printf("\n상대: 찌!!\n");
						else if (2 == CPU)
							printf("\n상대: 묵!!\n");
						else
							printf("\n상대: 빠!!\n");

						if (0 == whoiswin)//같은 손을내 비길경우
							{
								if (attack < 1)
									{
										printf("\n\t당신의 승리 입니다!!\n\n");
										++Win;
										break;
									}
								if (attack > 0)
									{
										printf("\n\tCPU의 승리 입니다!!\n\n");
										++Lose;
										--attack;
										break;
									}
							}
	
						else if (-2 == whoiswin || 1 == whoiswin)//사용자가 이겨 다시 할경우
							{
								--attack;
								continue;
							}

						else
							{
								continue;//컴퓨터가 이겨 다시 할 경우
							}
				
			}
		}
		--Round;
		if (0 < Round)//라운드가 남으면 게임재개
		{
			continue;
		}
	}
	printf("\n\n\t승: %d, 패: %d, 무: %d\n\n", Win, Lose, Draw);// 승패무 결과 표시
	return 0;
}