#include <stdio.h>
#include <stdlib.h>

/*
	heap�������� ���� ���� �޸��Ҵ� �⺻����
*/

int main(void)
{
	// heap������ �޸� �Ҵ��ϱ�.
	int * ptr1 = (int *)malloc(sizeof(int));		//	ptr1�� 4byte(int�޸�ũ��)�� �޸𸮸� �Ҵ�
	int * ptr2 = (int *)malloc(sizeof(int) * 7);	//	ptr2�� 4byte x 7= 28 byte�� �޸𸮸� �Ҵ�
	
	int i;

	*ptr1 = 20;			//	ptr1 �� ���� ����.

	for (i = 0; i < 7; i++)
	{
		ptr2[i] = i + 1;
	}
	printf("%d \n", *ptr1);

	for (i = 0; i < 7; i++)
	{
		printf("%d ", ptr2[i]);
	}

	free(ptr1);		//	�̼��� ptr1�� �޸𸮰� �Ҹ��.
	free(ptr2);

	// �޸� �Ҵ� ����뿡 ���� �ڵ�!!
	if (ptr1 == NULL)
	{ 
		// �̰��� �޸� �Ҵ� ���п� ���� ���� ó��...
		// �޸� �Ҵ��� �ϴٺ���, free�� �޸𸮸� �������־�� �ϴµ�,
		// �Ǽ��� ������ ������ ������, �޸𸮰� ���� �޸� ������ �߻��� �� ���ִ�.
		// �̸� �������ֱ� ���ؼ� malloc�Լ��� �����ϸ�, NULL�� ��ȯ�ϴµ�,
		// �� ���� �̿��� ������ ó���Ѵ�.
	}

	return 0;
}

/*
	free �Լ��� ȣ������ ������?
	 -> �Ҵ�� �޸� ������ resource�� ��� ������.

	malloc�Լ��� free�Լ��� �׻� ���� �̷�� ������ ������ �Ѵ�.

*/