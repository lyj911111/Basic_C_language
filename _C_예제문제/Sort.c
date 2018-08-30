#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#if 1
/* 
	4�� 27�� 
	���� 1
	�Է¹��� 8�ڸ� ���� �������� �����ϱ�
*/
int main(void)
{
	char input = 0;							// input : rand�Լ��� ���� �Է¹޴� ��
	unsigned int sort_a = 0, sort_b = 0;	// sort_a : ���ĵ� ����, sort_b : �Է¹��� ����
	unsigned int a = 0, b = 0;				// a, b : 2���� ���� �� ����(a - ���� �ڸ���, b- a���� 1�ڸ� ���� �ڸ���)
	int i = 0, j = 0;						// i, j : for�� ���� ����
	int mask = 0x0000000f;					// mask : ���� �ڸ����� 0���� ä��� ���� ����ũ��

	srand((unsigned)time(NULL));

	/*0~9���� ������ ������ ������ �Է�*/
	for (i = 0 ;i<8 ;i++)
	{
		input = rand() % 10;
	
		sort_b = sort_b << 4;
		sort_b = sort_b + input;

		sort_a = sort_b;
		/*
		printf("%08x\n", sort_b);
		*/
	}

	/*
	printf("\n");
	*/

	/*4bit(nibble) ���ڸ��� �񱳸� ���� for�� */
	for (j = 6 ; j>=0 ;j-- )
	{
		/*������ �ڸ����� �� ���ڸ����� �̵����Ѽ� a�� b�� ����*/
		for (i = 0; i < j+1; i++)
		{
			a = (sort_a & (15 << i * 4));
			a = a >> i * 4;
			b = (sort_a & (15 << (i + 1) * 4));
			b = b >> (i + 1) * 4;

			/*
			printf("%08x\n", a);
			printf("%08x\n", b);
			*/

			/*a�� b�� ���� ���Ͽ� ���� �ڸ��� ���� ũ�� �� �ڸ��� ����*/
			if (a > b)
			{
				sort_a = sort_a & ~(mask << (i + 1) * 4);
				sort_a = sort_a | a << (i + 1) * 4;
				sort_a = sort_a & ~(mask << i * 4);
				sort_a = sort_a | b << i * 4;
			}

			/*
			printf("\n");
			printf("%08x\n", sort_b);
			printf("%08x\n", sort_a);
			*/

		}

		/*
		printf("\n");
		printf("%08x\n", sort_b);
		printf("%08x\n", sort_a);
		*/

	}

	printf("======================\n");
	printf("�Էµ� ���� : %08x\n", sort_b);
	printf("���ĵ� ���� : %08x\n", sort_a);
	printf("======================\n");

	return 0;
	
}


#elif 0
/*
	4�� 27��
	���� 2
	�Է¹��� 8�ڸ� ���� Ȧ��, ¦�� ������ �������� �����ϱ�
*/
int main(void)
{
	char input = 0;							// input : rand�Լ��� ���� �Է¹޴� ��
	unsigned int sort_a = 0, sort_b = 0;	// sort_a : ���ĵ� ����, sort_b : �Է¹��� ����
	unsigned int a = 0, b = 0;				// a, b : 2���� ���� �� ����(a - ���� �ڸ���, b- a���� 1�ڸ� ���� �ڸ���)
	int i = 0, j = 0;						// i, j : for�� ���� ����
	int mask = 0x0000000f;					// mask : ���� �ڸ����� 0���� ä��� ���� ����ũ��

	srand((unsigned)time(NULL));

	/*0~9���� ������ ������ ������ �Է�*/
	for (i = 0; i<8; i++)
	{
		input = rand() % 10;

		sort_b = sort_b << 4;
		sort_b = sort_b + input;

		sort_a = sort_b;
		printf("%08x\n", sort_b);
	}

	printf("\n");

	/*4bit(nibble) ���ڸ��� �񱳸� ���� for�� */
	for (j = 6; j >= 0; j--)
	{
		/*������ �ڸ����� �� ���ڸ����� �̵����Ѽ� a�� b�� ����*/
		for (i = 0; i < j + 1; i++)
		{
			a = (sort_a & (15 << i * 4));
			a = a >> i * 4;
			b = (sort_a & (15 << (i + 1) * 4));
			b = b >> (i + 1) * 4;

			/*
			printf("%08x\n", a);
			printf("%08x\n", b);
			*/

			/*a�� b�� Ȧ������ ¦������ �����Ͽ� Ȧ���̸� �������� �̵�*/
			if (a % 2 > b % 2)
			{
				sort_a = sort_a & ~(mask << (i + 1) * 4);
				sort_a = sort_a | a << (i + 1) * 4;
				sort_a = sort_a & ~(mask << i * 4);
				sort_a = sort_a | b << i * 4;
				/*printf("%08x\n", sort_a);*/
			}

			/*a�� b�� Ȧ�� �Ǵ� ¦���� ���� �� ������������ ����*/
			if (a % 2 == b % 2)
			{
				if (a > b)
				{
					sort_a = sort_a & ~(mask << (i + 1) * 4);
					sort_a = sort_a | a << (i + 1) * 4;
					sort_a = sort_a & ~(mask << i * 4);
					sort_a = sort_a | b << i * 4;
					/*printf("%08x\n", sort_a);*/
				}
			}
		}
	}

	printf("======================\n");
	printf("�Էµ� ���� : %08x\n", sort_b);
	printf("���ĵ� ���� : %08x\n", sort_a);
	printf("======================\n");

	return 0;

}

#endif