#include <stdio.h>
#include <stdarg.h>
#include <math.h>

void Debug(int count, ...)
{
	// va_list : ���� ���� ����� �����ϴ� ����
	va_list list = NULL;

	// va_start : ���� ���� ����� ����ϱ� ���� �ʱ�ȭ�ϴ� �Լ�
	va_start(list, count);

	// va_arg : ���� ���� ��Ͽ��� ���� �������� Ư�� �ڷ����� ũ�⸸ŭ �̵��ϴ� �Լ�
	for (int i = 0; i < count; i++)
	{
		printf("%d ", va_arg(list, int));
	}
	// va_end : ���� ���� ����� ��� �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ�
	va_end(list);
}

struct Player
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};

double Add(double x, double y)
{
	return x + y;
}

double Substract(double x, double y)
{
	return x - y;
}

double Multiply(double x, double y)
{
	return x * y;
}

double Divide(double x, double y)
{
	return x / y;
}

void Calculator(double (*ptr)(double x, double y), double u, double v)
{
	printf("%lf\n", ptr(u, v));
}

int main()
{
#pragma region ���� ���� ���
	// �Ű� ������ ������ �������� ���� �Ű� ������ ���� ��
	// ����ϴ� �μ� �Դϴ�.

	// Debug(3, 10, 20, 30);
	// 
	// printf("\n");
	// 
	// Debug(5, 10, 20, 30, 40, 50);
#pragma endregion

#pragma region �� �� ������ �Ÿ�

	// printf("100�� ������ : %lf\n", sqrt(100));
	// printf("2�� 2�� : %lf\n", pow(2, 2));

	// struct Player player = {0, 0};
	// struct Monster monster = {5, 5};
	// 
	// int x = player.x - monster.x;
	// int y = player.y - monster.y;
	// 
	// double distance = sqrt(pow(x, 2) + pow(y, 2));
	// 
	// if (distance >= 5)
	// {
	// 	printf("���Ϳ� �÷��̾��� �Ÿ��� 5 �̻��Դϴ�.\n");
	// }
	// else
	// {
	// 	printf("���Ϳ� �÷��̾��� �Ÿ��� 5 �̸��Դϴ�.\n");
	// }
#pragma endregion

#pragma region �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� �����Դϴ�.

	// Calculator(Add, 10, 20);
	// Calculator(Substract, 10, 20);
	// Calculator(Multiply, 10, 20);
	// Calculator(Divide, 10, 20);

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ����
	// ��ġ�ؾ� �մϴ�.
#pragma endregion

	return 0;
}