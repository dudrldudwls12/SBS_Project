#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ViewHP(int health)
{
	for (int i = 0; i < health; i++)
	{
		printf("��");
	}

	printf("\n");
}

int main()
{
#pragma region Rand() �Լ�

	// time(NULL) : UCT �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ���
	// ����� �ð��� ��(sec)�� ��ȯ�ϴ� �Լ��Դϴ�.

	// srand(time(NULL));  // ���� �߻��⸦ �ʱ�ȭ �ϴ� �Լ��Դϴ�.
	// 
	// for (int i = 0; i < 10; i++)
	// {
	// 	int result = rand() % 10 + 1;  // 0 ~ 32767 ������ ������ �����ϴ� �Լ��Դϴ�
	//

	// 	printf("result ������ �� : %d\n", result);
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
	// 	printf("������ȸ %d ��\n", chance--);
	// 	printf("���ڸ� ���������� (1~30: ");
	// 	scanf_s("%d", &answer);
	// 	ViewHP(chance);
	// 	system("cls");
	// 
	// 	if (answer < computer)
	// 	{
	// 		printf("��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n");
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
	// 	printf("�й��Ͽ����ϴ�.\n");
	// 	chance --;
	// }
	// else
	// {
	// 	printf("�¸��Ͽ����ϴ�.\n");
	// }

#pragma endregion


	return 0;
}