#include <stdio.h>

/*

	�������� �����Ϳ� ���� ����.
	������ �ּҰ��� �����ϱ� ���ؼ� * �� �߰� �ϱ⸸ �ϸ� �ȴ�.

*/

int main()
{
	double num = 3.14;
	double * ptr = &num;
	double* * dptr = &ptr;
 //	�����ͺ��� * dptr�� (double*)Ÿ���� ���� �� �ִ�.
	double* * *tptr = &dptr;
	double * ptr2 = NULL; // ������ ����� �ʱⰪ�� �ƹ��͵� �Ⱦ��� �� ����. NULL�� ���� �����ϴ�.

/*
	���� �������� ���Ǹ� ����, (��������)
	tptr -> dptr -> ptr -> num  �̷������� �����Ͱ� ����Ű�� �ִ�.
*/
	printf("%9p %9p %9p %9p \n", num, ptr, *dptr, **tptr); // * �� �ֱ⶧���� ����Ű�� �ִ� ����� �ּҰ� ����, ��� �������� ����Ű�� �����Ƿ� ���� �ּҰ� ���
	printf("%9g %9g \n", num, ***tptr);

	ptr2 = **tptr;	//	tptr�� dptr�ּҸ� ����, dptr�� ptr�ּҰ��� ���´�.
					//	(*tptr = dptr), (*dptr = ptr), (ptr�� �ڷ����� double * �̹Ƿ� ptr2�� ���� �� �ִ�.)

	ptr2 = *dptr;	//	dptr�� *�� �������ν� ptr�� �ȴ�. ��, (*dptr = ptr�̶� ��. dptr�� ptr�� �ּҰ��� ������ �����Ƿ�. *dptr = ptr �̶� ��) 
	

	*ptr2 = 13.22;	// *ptr2�� ����Ű�� ��� �����ؼ� ���� ����.

	printf("%g %g %g \n", num, **dptr, ***tptr);


	return 0;
}