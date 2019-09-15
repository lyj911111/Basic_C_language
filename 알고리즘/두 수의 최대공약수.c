/*
	�ִ����� ���ϱ� �˰���
	2�� �� �Է�, �ִ� ����� ��� �Լ�

	�˰���:
		1. v�� u���� ũ�� v�� u���� �ٲ۴�.
		2. u = u - v
		3. u�� 0�̸� v�� �ִ�����. �ƴϸ� �ٽ� ó������ ���ư���.
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

	while(1)
	{
		if (v > u) {
			temp = u;
			u = v;			// 1. v�� u���� ũ�ٸ�, v�� u���� �ٲ۴�.
			v = temp;

			u = u - v;		// 2. 
		}
		else {
			u = u - v;
		}

		if (u == 0)
		{
			result = v;		// 3. u�� 0�̸� v�� �ִ�����
			break;
		}
	}
	return result;
}

int main(void)
{
	int result;
	result = GCD();
	printf("�ִ�������: %d", result);

	return 0;
}