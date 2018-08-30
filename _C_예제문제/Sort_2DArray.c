#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* 100 x100 �迭�� ������, N�� �Է¹޾� N x N�� �迭�� ������ ä�� ��,
���� ���������� ���İ� ���� ���������� ������ ���� �����Ͻÿ�.
������ 0���� 99����. */


void get_ran_num(char arr[][100], int N)
{
	int i = 0, j = 0;

	printf("===������ �迭 ä�� ���===\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			arr[i][j] = rand() % 100;
			printf("%3d ", arr[i][j]);
		}

		printf("\n");
	}
}

void sort_row(char arr[][100], int N)
{
	int i = 0, j = 0, k = 0, temp = 0;

	for (i = 0; i < N; i++)
	{
		for (k = 1; k < N; k++)
		{
			for (j; j < N - k; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					temp = arr[i][j + 1];
					arr[i][j + 1] = arr[i][j];
					arr[i][j] = temp;
				}
			}
			j = 0;
		}
		k = 0;
	}

	printf("===== �� ���� ��� =====\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}


}

void sort_column(char arr[][100], int N)
{
	int i = 0, j = 0, k = 0, temp = 0;

	for (i = 0; i < N; i++)
	{
		for (k = 1; k < N; k++)
		{
			for (j; j < N - k; j++)
			{
				if (arr[j][i] > arr[j + 1][i])
				{
					temp = arr[j + 1][i];
					arr[j + 1][i] = arr[j][i];
					arr[j][i] = temp;
				}
			}
			j = 0;
		}
		k = 0;
	}

	printf("===== �� ���� ��� =====\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

}


int main(void)
{
	char arr[100][100] = { 0 };
	int N = 0;

	srand((unsigned)time(NULL));

	printf("�迭�� ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &N);

	get_ran_num(arr, N);
	sort_row(arr, N);
	sort_column(arr, N);

	return 0;
}