#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

int main()
{
#pragma region ASSCII �ڵ�
	// �̱� ���� ��ȯ ǥ�غ�ȣ(ASCII)�� 7��Ʈ�� ���ڸ�
	// ǥ���ϴ� ǥ�� �ڵ��Դϴ�.

	// for (int i = 0; i < 26; i++)
	// {
	// 	printf("%c ", 'A' + i);
	// }
#pragma endregion

#pragma region �ڱ� ���� ����ü
	// struct Node node1 = { 10, NULL };
	// struct Node node2 = { 20, NULL };
	// struct Node node3 = { 30, NULL };
	// 
	// node1.next = &node2;
	// node2.next = &node3;
	// node3.next = NULL;
	// 
	// struct Node* currentPtr = &node1;
	// while (currentPtr != NULL)
	// {
	// 		printf("%d ", currentPtr->data);
	//		currentPtr = currentPtr->next;
	// }

#pragma endregion

	return 0;
}