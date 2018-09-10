#include <stdio.h>
#include <string.h>

/*
	�޸� ���� �Լ���.
	memcpy( a , b , sizeof() )  :  �޸� b�� a�� ����. �޸��� ������ ���� �������־����.
	memcmp( a , b , sizeof() )  :  �޸� a�� b�� ��, ������ 0�� ���. �޸� ����� �����ؾ� ��.
	memset( a , 0 , sizeof() )  :  �޸� a�� 0���� �ʱ�ȭ �Ǵ� ������� �ʱ�ȭ ��ų �� ����. �޸� ����� �����ؾ���.
*/
int main()
{
	char mems1string[12];
	char mems2string[12] = "Sky is blue";
	
	//memory copy, mem2�� �ִ� ���ڿ� �ּҰ����� mem1�� �ű�. (���ڿ� '\0'���� (char��)12���� ���޵�)
	memcpy(mems1string, mems2string, sizeof(mems1string));
	printf("%s \n",mems1string);

	//memory compare, �� (�񱳴��1, �񱳴��2, �޸�ũ��(size) )
	//���� ���� ��, 0���� ���.
	printf("%d \n", memcmp( mems2string, mems2string, sizeof(mems2string)));

	//memory set (Destination, '�ʱ�ȭ��', ������)
	//�� �պ��� 4�ڸ����� 'x'�� ä����.
	//���� �޸� �ʱ�ȭ�� ����. 0�� �����ؼ�.
	printf("%s \n", memset( mems2string,'x',5));
	printf("%s \n", memset( mems2string,0, sizeof(mems2string)));	// <- �̿Ͱ��� ����.
	return 0;
}