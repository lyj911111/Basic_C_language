#include <stdio.h>
#include <conio.h>
#include <ctype.h>   //  �ƽ�Ű�ڵ� �Լ� _toascii�� ��������
#include <string.h>  //  string ���� ���ڰ˻��� ����ϱ� ����

#define no9

#ifdef no9
int main()
{
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�.\n");

}
#endif


#ifdef no7

int get_response(char prompt[]);
int main()
{
	char prompt[] = "Do you wanna play continously? [yes] or [no]";
	
	int ch=get_response(prompt);    //  �Լ��� ����

	if (ch == 1)
	{
		printf("positive\n");
	}
	else if (ch == 2)
	{
		printf("negative\n");
	}
	else
	{
		printf("unknown\n");
	}

	return 0;
}

int get_response(char prompt[])  //  answer�� ����. (����� �Է°�)
{
	
	char answer[4];
	puts(prompt);         // �������
	scanf("%s", &answer);    // yes or no

	if (strcmp("yes", answer) == 0)
		return 1;
	else if (strcmp("no", answer) == 0)
		return 2;
	else
		return 0;
}


#endif 


#ifdef no5
int main()
{
	int ch='\n',CH;


	while (1)
	{
		printf("\nTo Make lower case or upper case of Alphabet\n");
		printf("please input the word(only in Eng):\n");
		ch = getchar();                        // int�� ���� ����. int ch = getchar() �̷�������.
		
		if (ch >= 'a' || 'z' <= ch)
		{
			CH = toupper(ch);
			putchar(CH);
			printf("\n");
			while ((ch = getchar()) != '\n');  //  getchar�� ���۸� ����.
		}
		else if (ch >= 'A' || 'Z' <= ch)
		{
			CH = tolower(ch);
			putchar(CH);
			printf("\n");
			while ((ch = getchar()) != '\n');  //  getchar�� ���۸� ����.
		}
		else
		{
			printf("\nWARN ! Do NOT type the words except in English\n");
			while ((ch = getchar()) != '\n');  //  getchar�� ���۸� ����.
		}

		
	}
	return 0;
}
#endif 


#ifdef no3;

int str_chr(char s[], int c);

int main(void)
{
	char s[21];
	int c=0;  //  ������ �� ����.
	

	printf("[���� 20�� ]���ڿ��� �Է��Ͻÿ�.\n");
	gets(s);                                      //  ���ڿ��� �Է�.
	printf("�Է��� ����:");
	puts(s);
	printf("\n");

	printf("������ �� ���ڸ� �Է��Ͻÿ�:");
	scanf("%c", &c);
	

	c = str_chr(s, c);

	printf("[%s]�� ���ڿ��� ������:%d �Դϴ�.\n", s, c);
	

	return 0;
}


int str_chr(char s[], int c)
{
	
	int count = 0;
	
	for (int i = 0; s[i]!=0 ; i++)  //  �Է� ���� ������ŭ ȸ��.
	{
		if (s[i] == c)
			count++;
	}
	


	return count;
}
#endif

//strchr(s, c);     //  s[] string����  c���ڸ� ã��.  �Լ����! 
				  // ����: strchr( s, c ) s<=ã�����ϴ� ���ڿ�, c<= ã���� �ϴ� ������ "�ּҰ�"�� ����, ���н� NULL
				  //		printf("%d", &c);


#ifdef no1
int main(void)
{
	char input;
	int exit = 0;

	while (1)
	{
		printf("�ƽ�Ű�ڵ�� ��ȯ (����: ctrl + Z 3��) \n");
		printf("���ڸ� �Է��Ͻÿ�.(1���� ���ڸ�):");
		exit = scanf(" %c", &input);                // EOF�� �Է��ϱ� ���ؼ��� Exit��� ������ ���� ����.

		if (exit == EOF)
		{
			break;
		}

		printf("�ƽ�Ű �ڵ��[%d]�Դϴ�.\n\n", toascii(input));
		//getch();

	}
	return 0;
}
#endif