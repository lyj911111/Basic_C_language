#include <stdio.h>

/*
	��ũ�� ������. (��ũ�θ� ��������� ����)
	1.	#
	2.	##

	����.
*/

#define STR(ABC)		#ABC	//	���� ABC�� -> "ABC"�� ���ڿ��� ġȯ�϶�.

// ����1. #������.
#define STRING_JOB(A,B)	#A "�� ������ " #B "�Դϴ�."

int main()
{
	printf("%s \n", STRING_JOB(�̵���, ������));
	printf("%s \n", STRING_JOB(�ѻ��, ��ɲ�));

	return 0;
}