#include <stdio.h>
#include <stdlib.h>

/*
	Linked List ����
*/

struct Node
{
	int data;
	struct Node *nextPointer;	//	�ڱ� �ڽ��� �����ͷ� ���� (link�� �Ǵ�)
};

struct Node *headPointer;

void creadNode(void);

int main()
{
	creadNode();
	return 0;
}

void creadNode(void)
{
	//������ ���� ����
	struct Node *onePointer = NULL;
	struct Node *twoPointer = NULL;
	struct Node *threePointer = NULL;
	
	onePointer = malloc(sizeof(struct Node));	//	�޸� �����Ҵ�.
	twoPointer = malloc(sizeof(struct Node));
	threePointer = malloc(sizeof(struct Node));

	// ���� ���� �ִ� ����
	onePointer->data = 1;
	twoPointer->data = 2;
	threePointer->data = 3;

	// �� ��带 ���� (��ũ�� ����)
	onePointer->nextPointer = twoPointer;
	onePointer->nextPointer->nextPointer = threePointer;
	onePointer->nextPointer->nextPointer->nextPointer = NULL;

	//ù ��� ��������� �ּ� �Ҵ�.
	headPointer = onePointer;

	struct Node *currentPointer = headPointer;

	printf("\n [headpointer]->");
	
	while (currentPointer != NULL)	//	Null�� ���������� ��� ����.
	{
		printf(" %d -> ", currentPointer->data);
		currentPointer = currentPointer->nextPointer;
	}
	printf("[NULL] \n");
}