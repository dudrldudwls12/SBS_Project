#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ViewHP(int health)
{
	for (int i = 0; i < health; i++)
	{
		printf("♥");
	}

	printf("\n");
}

int main()
{
#pragma region Rand() 함수

	// time(NULL) : UCT 기준으로 1970년 1월 1일 0시 0분 0초부터
	// 경과된 시간을 초(sec)로 반환하는 함수입니다.

	// srand(time(NULL));  // 난수 발생기를 초기화 하는 함수입니다.
	// 
	// for (int i = 0; i < 10; i++)
	// {
	// 	int result = rand() % 10 + 1;  // 0 ~ 32767 사이의 난수를 생성하는 함수입니다
	//

	// 	printf("result 변수의 값 : %d\n", result);
	//
	// }

#pragma endregion

#pragma region Up - Down Game

	// int computer = 0;
	// int answer = 0;
	// int chance = 5;
	// 
	// srand(time(NULL));
	// 
	// computer = rand() % 31;
	// 
	// while (chance > 0)
	// {
	// 	printf("남은기회 %d 번\n", chance--);
	// 	printf("숫자를 맟혀보세요 (1~30: ");
	// 	scanf_s("%d", &answer);
	// 	ViewHP(chance);
	// 	system("cls");
	// 
	// 	if (answer < computer)
	// 	{
	// 		printf("컴퓨터가 가지고 있는 값보다 작습니다.\n");
	// 		chance--;
	// 	}
	// 	else if (answer > computer)
	// 	{
	// 		break;
	// 	}
	// 	
	// }
	// 
	// if (chance <= 0)
	// {
	// 	printf("패배하였습니다.\n");
	// 	chance --;
	// }
	// else
	// {
	// 	printf("승리하였습니다.\n");
	// }

#pragma endregion


	return 0;
}