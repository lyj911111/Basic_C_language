#include <stdio.h>

/*
	배열을 함수의 인자로 전달.


	참고사항,
		배열내부 index 갯수를 구하는 방법
		-> sizeof(arr1)/sizeof(int)   이런식으로 구하면 된다.
*/

// 배열인자를 받아 배열 내부를 표시해주는 함수 (포인터를 이용)
void ShowArayElem(int * param, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

// 배열을 인자로 받는 다른 방법.
// 인자로 배열을 전달 받는다는 느낌을 강하게 어필하기 위해.
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

						//	배열내부의 index 갯수를 구하는 방법.
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}