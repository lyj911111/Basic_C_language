#include <stdio.h>

#define HIT_NUM 7		//	<=  �� ������ ������ ������.

/*

	#elif ��� ���. 
	#if�� �ش�!!!!!!!!!!

*/

int main()
{
#if HIT_NUM == 5
	puts("��� 5�� �����϶�");
#elif HIT_NUM == 6
	puts("��� 6�� �����϶�");
#elif HIT_NUM == 7			//	<= HIT_NUM �� 7 �̹Ƿ� ���⸸ ��������.
	puts("��� 7�� �����϶�");
#else
	puts("��� 8�� �����϶�");
#endif


	return 0;
}

/*
	#ifndef ADD
	#elif
	#elif
	#endif
	������ ������, ���ڿ�������......
*/