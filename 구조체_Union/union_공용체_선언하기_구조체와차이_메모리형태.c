#include <stdio.h>

/*
	����ü��?

	�� �׵��� ������ �޸� ������ ����, ���� �Ѵ�.
	����ü�� ����ü�� ����.

*/

//���� ����� struct�� ����. (typedef�� �̿�.)
typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
}UBox;

typedef struct sbox	//	union�� ���ϱ� ���� ����.
{
	int mem1;
	int mem2;
	double mem3;
}SBox;

/*
int main()
{
	SBox sbx;
	UBox ubx;

	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);	//	�ּҰ��� int�� 4��, double�� 8�� ����.
	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);	//	�ּҰ��� ��� ����!!!
	printf("%d %d \n", sizeof(SBox), sizeof(UBox));			//	union�� ���� �ڷ����� ���캸��, ����ū �޸�(���⼭ double��)�� �Ҵ���.

	return 0;
}*/

// ����.  union�� �޸� ����.
int main()
{
	UBox ubx;
	ubx.mem1 = 20;		//	int�� ����
	printf("%d \n", ubx.mem2);	//	mem1 �� ���� �־��µ� mem2�� ���� ���� ���´�!!  ���� �ּҰ��� ������ ����, �ڷ��� ��ġ�ؼ� ��� ����.

	ubx.mem3 = 7.12;	//	double�� ����.
	printf("%d \n", ubx.mem1);	//	�ڷ����� ���� �ʱ� ������ ������ ���� ���
	printf("%d \n", ubx.mem2);	//	�ڷ����� ���� �ʱ� ������ ������ ���� ���
	printf("%g \n", ubx.mem3);	//	double�� �� ���

	return 0;
}