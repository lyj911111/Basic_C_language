#include <stdio.h>

/*
	2���� �迭�� ũ�� sizeof�� ���ؼ�.
*/

int main()
{
	// 2���� �迭�� sizeof ũ�� ���غ���.

	int arr1[3][4];
	int arr2[7][9];

	printf("����3 ����4: %d \n", sizeof(arr1));
	/*
	int���̹Ƿ� ���� 4�� ����.
	[ ] [ ] [ ] [ ] 4x4 = 16
 	[ ] [ ] [ ] [ ] 4x4 = 16
	[ ] [ ] [ ] [ ] 4x4 = 16
	16+16+16 = 48
	��, arr1[3][4]�� 2���� �迭�� ũ��� 48 byte

	*/


	printf("����7 ����9: %d \n", sizeof(arr2));

	return 0;
}