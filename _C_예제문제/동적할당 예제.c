#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	�޸��Ҵ� Malloc & free �Լ� ����, �׽�Ʈ.

*/

#define test 2

#if test==1
int main()
{
				//casting �����ص� �Ǳ���.
	float * ptr = malloc(sizeof(float));			// Heap ������ ������ ����.
	*ptr = 3.14;

	printf("float size is : %d \n", sizeof(float));
	printf("Data is %f \n ", *ptr);
	printf("Address is %p \n \n", ptr);

	free(ptr);										//	Heap ������ ������ ����

	printf("After free() Data is %f \n", *ptr);
	printf("After Address is %p \n", ptr);			//	�ּҴ� �׵���?
	/*
	*ptr = 1.23;
	printf("After free() Data is %f \n", *ptr);
	printf("After Address is %p \n", ptr);
	*/
	return 0;
}
#endif

void Customized_String_Copy(char * dst, char * src)	//	destination, source
{
	do
	{
		*dst++ = *src++;		//	source�� �ڵ带 destination �ڵ忡 �Ѱܶ�
	} while (*src);				//	source�� '\0' �� ������ ������.
	*dst = '\0';				//	destination �� ���ڿ� �������� '\0'�� ����.
}

int main()
{
	char ch[4] = { 'A','B','C','\0'};	//	�迭�� ���� �׻� \0�� �����صα�
	char st[4] = { "ABC\0" };
	char * ptr = "ABC";					//	�����ʹ� '\0'�� �ڵ����� �����ǹǷ� ���ʿ� ����.

					  //casting		// '\0'�� �� ���� ����
	char * ptrMalloc = (char *)malloc(strlen(ptr)+1);	//	ptr�� ���̸�ŭ Heap������ �޸� �Ҵ�. �� �޸��� �ּҸ�  ptrMalloc �����Ͱ� ����Ŵ.
	Customized_String_Copy(ptrMalloc, ptr);			//	ptr�� ���ڿ��� Heap������ �Ҵ��� ptrMalloc�� ����.

	printf("character[0]: %c \n", ch[0]);
	printf("string[0]: %c \n", st[0]);
	printf("ptr�� ù��°: %c \n",*(ptr+0));								//	�������� ù��° ����.
	printf("\n");

	printf("���ڿ���� ch: %s \n", ch);
	printf("���ڿ���� st: %s \n", st);
	printf("���ڿ���� pointer String: %s \n", ptr);
	printf("\n");
	printf("���� �Ҵ��Ų �޸��� ���ڿ� ���: %s \n", ptrMalloc);


	free(ptrMalloc);								//	�����Ҵ� �޸� ����

	return 0;
}







