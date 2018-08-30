#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* 100 x100 배열을 선언후, N을 입력받아 N x N의 배열을 난수로 채운 후,
행을 기준으로의 정렬과 열을 기준으로의 정렬을 각각 수행하시오.
난수는 0에서 99까지. */


void get_ran_num(char arr[][100], int N)
{
	int i = 0, j = 0;

	printf("===난수로 배열 채운 결과===\n");
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

	printf("===== 행 정렬 결과 =====\n");
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

	printf("===== 열 정렬 결과 =====\n");
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

	printf("배열의 크기를 입력하세요 : ");
	scanf("%d", &N);

	get_ran_num(arr, N);
	sort_row(arr, N);
	sort_column(arr, N);

	return 0;
}