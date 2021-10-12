#include <stdio.h>   
#include <stdlib.h>    
#include <time.h>     
#include <algorithm>    
#include <vector>      



void getRandomLottoWin(int* r) 
{
	std::vector<int> vv; 
	while (true) 
	{
		int temp = rand() % 45 + 1; 
		if (std::find(vv.begin(), vv.end(), temp) == vv.end()) 
		{ 
			vv.push_back(temp); 
			if (vv.size() == 7) break; 
		}
	}
	std::sort(vv.begin(), vv.begin() + 6); 
	std::copy(vv.begin(), vv.end(), r); 
}
void getRandomLotto(int* r) 
{
	std::vector<int> vv; 
	while (true) 
	{
		int temp;
		printf("1~42까지의 수를 입력하세요 : ");
		scanf_s("%d", &temp);

		if (std::find(vv.begin(), vv.end(), temp) == vv.end())
		{ 
			vv.push_back(temp); 
			if (vv.size() == 6) break; 
		}
	}
	std::sort(vv.begin(), vv.end()); 
	std::copy(vv.begin(), vv.end(), r);	
}
int checkWin(int* r1, int* r2)
{
	for (int i = 0; i < 7; i++) {
		if (r1[i] < 1 || 45 < r1[i]) return 0; 
		if (i == 6) break;
		for (int j = i + 1; j < 7; j++) 
		{
			if (r1[i] == r1[j]) return 0; 
		}
	}
	for (int i = 0; i < 6; i++) 
	{
		if (r2[i] < 1 || 45 < r2[i]) return 0; 
		if (i == 5) break;
		for (int j = i + 1; j < 6; j++) 
		{
		if (r2[i] == r2[j]) return 0; 
		}
	}
	int smallCount = 0, bonusCount = 0;
	for (int i = 0; i < 7; i++) 
	{
		for (int j = 0; j < 6; j++) 
		{
			if (r1[i] == r2[j]) 
			{
			if (i == 6) bonusCount++;
			else smallCount++;
			}
		}
	}
	int winLevel = 0;
	if (smallCount < 3) 
	{
	winLevel = 0;
	}
	else if (smallCount == 3) 
	{
	winLevel = 5;
	}
	else if (smallCount == 4) 
	{
	winLevel = 4;
	}
	else if (smallCount == 5 && bonusCount == 1) 
	{
	winLevel = 2;
	}
	else if (smallCount == 5 && bonusCount != 1) 
	{
	winLevel = 3;
	}
	else if (smallCount == 6) 
	{
	winLevel = 1;
	}
	return winLevel;
}
int main(int argc, char* argv[])
{
	srand((unsigned)time(NULL));
	int r1[7]; 
	int r2[6]; 
	for (int i = 0; i < 1; i++) 
	{
		getRandomLottoWin(r1);
		getRandomLotto(r2);
		int winLevel = checkWin(r1, r2);
		printf("%02d,%02d,%02d,%02d,%02d,%02d / %02d", r1[0], r1[1], r1[2], r1[3], r1[4], r1[5], r1[6]);
		printf("   :::   %02d,%02d,%02d,%02d,%02d,%02d", r2[0], r2[1], r2[2], r2[3], r2[4], r2[5]);
		if (1 <= winLevel && winLevel <= 5)
			printf("\t\t  %d", winLevel);
		else 
			printf("\t 당첨되지 않았습니다");
	}
	return 0;
}
