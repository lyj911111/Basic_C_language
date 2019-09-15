/*
	�ִ����� ���ϱ� �˰���(���� ���� ���)
	2�� �� �Է�, �ִ� ����� ��� �Լ�

	�˰���:
		1. v�� 0�� �ƴϸ�,
			1.1. u = u % v
			1.2. u�� v�� ��ȯ
			1.3. 1���� ���ư�.
		2. v�� 0�̸� u�� �ִ�����
*/

#include<stdio.h>

int GCD(void) {
	int u = 0;
	int v = 0;
	int temp = 0;
	int result = 0;

	printf("2���� ���� �Է��Ͻÿ�.\n");
	printf("a:");
	scanf_s("%d", &u);
	printf("b:");
	scanf_s("%d", &v);

	while(v != 0)	// v�� 0�� �ƴϸ� ���� �ݺ�
	{
		u = u % v;	// 1.1.
		temp = v;	// 1.2.
		v = u;
		u = temp;
	}
	result = u;		// 2.

	return result;
}

int main(void)
{
	int result;
	result = GCD();
	printf("�ִ�������: %d", result);

	return 0;
}