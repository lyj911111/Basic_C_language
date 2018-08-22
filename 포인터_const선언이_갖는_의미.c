#include <stdio.h>
/*
	������ ������ const����.


	case 1.
		const * int ptr �� ���ؼ�.
	case 2.
		int * const ptr �� ���ؼ�.

*/

#define case 3		//	���� �� ������ ����.

#if case == 1
int main()
{
	int num = 20;
	const int * ptr = &num;	//	ptr�� ��� num�� ����Ű�Ե�.
							//	�� �ǹ�: ptr�� ����� ���� ������ ������� �ʰڴٴ� �ǹ�.
							//	ptr�� �������� �ٶ������, num�� ���� ����̰� ��, ���� ������ �� ����. �� �ν�.
//	*ptr = 30;   ������ ����. ptr�� ����Ű�� ����� ����� �����ϹǷ�, ������ �Ұ����ϴٰ� ��.

	num = 40; // ������ ����.  ��, *ptr���� �����ϴ� ���� �ȵ�����, num ���� ������ ����

	return 0;
}
#endif

#if case == 2
int main()
{
	int num1 = 20;
	int num2 = 30;

	// ptr�� ����Ű�� ����� num1 ���� �����ϰڴٰ� ����.
	int * const ptr = &num1;

//	ptr = &num2;	������ ����! ��? ptr�� num1���� ����Ű�� �����ͷ� ���������Ƿ�.
	*ptr = 40;	//	ptr�� num1�� ����Ű���ְ�, �ּҿ� �����ؼ� ������ �� �� �ִ�.

	return 0;
}
#endif

#if case == 3
int main()
{
	int num = 1;
	
	// �� const������ ���ÿ� �ϴ� ���.
	const int * const ptr = &num;
	// ��, ptr�� ������ num�� ����Ű�� �ְ�, num�� ���� �ƹ��� ������ �� ���� ������ �����ϴ�...

}
#endif