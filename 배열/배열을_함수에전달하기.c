#include <stdio.h>

/*
	�迭�� �Լ��� ���ڷ� ����.


	�������,
		�迭���� index ������ ���ϴ� ���
		-> sizeof(arr1)/sizeof(int)   �̷������� ���ϸ� �ȴ�.
*/

// �迭���ڸ� �޾� �迭 ���θ� ǥ�����ִ� �Լ� (�����͸� �̿�)
void ShowArayElem(int * param, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

// �迭�� ���ڷ� �޴� �ٸ� ���.
// ���ڷ� �迭�� ���� �޴´ٴ� ������ ���ϰ� �����ϱ� ����.
void otherway(int param[], int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

int main()
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };

						//	�迭������ index ������ ���ϴ� ���.
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}