#include <stdio.h>
#include <conio.h>
#include <ctype.h>   //  아스키코드 함수 _toascii를 쓰기위해
#include <string.h>  //  string 내의 문자검색을 사용하기 위해

#define no9

#ifdef no9
int main()
{
	printf("텍스트를 입력하시오.\n");

}
#endif


#ifdef no7

int get_response(char prompt[]);
int main()
{
	char prompt[] = "Do you wanna play continously? [yes] or [no]";
	
	int ch=get_response(prompt);    //  함수에 진입

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

int get_response(char prompt[])  //  answer가 들어옴. (사용자 입력값)
{
	
	char answer[4];
	puts(prompt);         // 내용출력
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
		ch = getchar();                        // int형 만을 받음. int ch = getchar() 이런식으로.
		
		if (ch >= 'a' || 'z' <= ch)
		{
			CH = toupper(ch);
			putchar(CH);
			printf("\n");
			while ((ch = getchar()) != '\n');  //  getchar의 버퍼를 지움.
		}
		else if (ch >= 'A' || 'Z' <= ch)
		{
			CH = tolower(ch);
			putchar(CH);
			printf("\n");
			while ((ch = getchar()) != '\n');  //  getchar의 버퍼를 지움.
		}
		else
		{
			printf("\nWARN ! Do NOT type the words except in English\n");
			while ((ch = getchar()) != '\n');  //  getchar의 버퍼를 지움.
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
	int c=0;  //  갯수를 샐 문자.
	

	printf("[제한 20자 ]문자열을 입력하시오.\n");
	gets(s);                                      //  문자열을 입력.
	printf("입력한 글자:");
	puts(s);
	printf("\n");

	printf("갯수를 셀 문자를 입력하시오:");
	scanf("%c", &c);
	

	c = str_chr(s, c);

	printf("[%s]의 문자열내 갯수는:%d 입니다.\n", s, c);
	

	return 0;
}


int str_chr(char s[], int c)
{
	
	int count = 0;
	
	for (int i = 0; s[i]!=0 ; i++)  //  입력 문자 갯수만큼 회전.
	{
		if (s[i] == c)
			count++;
	}
	


	return count;
}
#endif

//strchr(s, c);     //  s[] string내의  c글자를 찾음.  함수사용! 
				  // 설명서: strchr( s, c ) s<=찾고자하는 문자열, c<= 찾고자 하는 문자의 "주소값"을 리턴, 실패시 NULL
				  //		printf("%d", &c);


#ifdef no1
int main(void)
{
	char input;
	int exit = 0;

	while (1)
	{
		printf("아스키코드로 변환 (종료: ctrl + Z 3번) \n");
		printf("문자를 입력하시오.(1개의 문자만):");
		exit = scanf(" %c", &input);                // EOF를 입력하기 위해서는 Exit라는 변수를 따로 저장.

		if (exit == EOF)
		{
			break;
		}

		printf("아스키 코드는[%d]입니다.\n\n", toascii(input));
		//getch();

	}
	return 0;
}
#endif