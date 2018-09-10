#include <stdio.h>
#include <stdlib.h>

/*
	Linked List 기초
*/

struct Node
{
	int data;
	struct Node *nextPointer;	//	자기 자신을 포인터로 정함 (link를 건다)
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
	//포인터 변수 선언
	struct Node *onePointer = NULL;
	struct Node *twoPointer = NULL;
	struct Node *threePointer = NULL;
	
	onePointer = malloc(sizeof(struct Node));	//	메모리 동적할당.
	twoPointer = malloc(sizeof(struct Node));
	threePointer = malloc(sizeof(struct Node));

	// 실제 값을 넣는 구간
	onePointer->data = 1;
	twoPointer->data = 2;
	threePointer->data = 3;

	// 각 노드를 연결 (링크를 만듦)
	onePointer->nextPointer = twoPointer;
	onePointer->nextPointer->nextPointer = threePointer;
	onePointer->nextPointer->nextPointer->nextPointer = NULL;

	//첫 헤더 노드포인터 주소 할당.
	headPointer = onePointer;

	struct Node *currentPointer = headPointer;

	printf("\n [headpointer]->");
	
	while (currentPointer != NULL)	//	Null을 만날때까지 출력 진행.
	{
		printf(" %d -> ", currentPointer->data);
		currentPointer = currentPointer->nextPointer;
	}
	printf("[NULL] \n");
}