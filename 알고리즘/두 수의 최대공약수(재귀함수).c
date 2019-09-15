/*
	�ִ����� ���ϱ� �˰���(Recursive Function ��� (����Լ�))
	2�� �� �Է�, �ִ� ����� ��� �Լ�

	�˰���:
		1. v�� 0�� �ƴϸ�,
			1.1. u = u % v
			1.2. u�� v�� ��ȯ
			1.3. 1���� ���ư�.
		2. v�� 0�̸� u�� �ִ�����
*/

#include<stdio.h>

int GCD_recursion(int u, int v) {
	
	if (v == 0)
		return u;
	else
		return GCD_recursion(v, u % v);
}

int main(void)
{
	int u, v, result;
	
	printf("2���� ���� �Է��Ͻÿ�.\n");
	printf("a:");
	scanf_s("%d", &u);
	printf("b:");
	scanf_s("%d", &v);

	result = GCD_recursion(u, v);
	printf("�ִ�������: %d", result);

	return 0;
}