#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define problem 3

#if problem == 1
// ������ little endian ����, Big endian���� �˾ƺ��� ���α׷�.
// => ��Ʋ�����
int main()
{
	int x = 0x12345678;
	unsigned char * xp = (char*)&x;

	printf("����Ʈ ������ %x,%x,%x,%x", xp[0], xp[1], xp[2], xp[3]);


	return 0;
}
#endif

#if problem == 2
// 2���� ������ �հ� ���� ���ÿ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ �϶�.
void set_sum_diff(int x, int y, int * p_sum, int * p_diff)
{
	int sum=0; int diff=0;
	sum = x + y;
	diff = x - y;

	*p_sum = sum;
	*p_diff = diff;
}

int main()
{
	int x, y;
	int p_s = 0;
	int p_d = 0;

	printf("2���� ���ڸ� �Է��Ͻÿ�. \n");
	scanf("%d %d", &x, &y);

	set_sum_diff(x,y, &p_s , &p_d);

	printf("����: %d, ����: %d \n", *(&p_s), *(&p_d));

	return 0;
}
#endif

#if problem == 3
// �����迭�� �޾Ƽ� ���ҵ��� ������ ä��� �Լ��� �ۼ��Ϸ� �׽�Ʈ�϶�.
void array_fill(int * A, int size)
{
	for (int i = 0; i < size; i++)
	{

	}
}

int main()
{
	srand((unsigned)time(NULL));	//	�����Լ� ����

	char input = 0;


	return 0;
}
#endif