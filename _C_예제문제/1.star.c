#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#if 1
/* �Է¹��� �� ��ŭ ��ǥ ��� */
int main(void)
{
	int input = 0;
	int i = 0, j = 0, k = 0;

	printf("���μ� �Է� : ");
	scanf("%d", &input);

	i = input;
	for (i; i > 0; i--)
	{
		j = i - 1;
		for (j ; j>0  ;j--)
		{
			printf("0");
		}

		k = 2 * (input - i) + 1;
		for (k ; k>0  ;k-- )
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

#elif 0
/* Programming ���� 5 */
int main(void)
{
	int input = 0;
	int i = 0, j = 0, k = 0;

	printf("���μ� �Է� : ");
	scanf("%d", &input);

	for (i = 0; i < input; i++)
	{
		for (j = 0; j < input - 1; j + 1)
		{
			printf(" ");
		}
		for (j = 0; j < i * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#endif