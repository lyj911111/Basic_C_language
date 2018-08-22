#include <stdio.h>

/*
	2차원 배열의 크기 sizeof에 대해서.
*/

int main()
{
	// 2차원 배열의 sizeof 크기 구해보기.

	int arr1[3][4];
	int arr2[7][9];

	printf("세로3 가로4: %d \n", sizeof(arr1));
	/*
	int형이므로 간격 4씩 차이.
	[ ] [ ] [ ] [ ] 4x4 = 16
 	[ ] [ ] [ ] [ ] 4x4 = 16
	[ ] [ ] [ ] [ ] 4x4 = 16
	16+16+16 = 48
	즉, arr1[3][4]의 2차원 배열의 크기는 48 byte

	*/


	printf("세로7 가로9: %d \n", sizeof(arr2));

	return 0;
}