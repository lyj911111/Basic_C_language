#include <stdio.h>
#if 0
/* 10������ 2������ ��ȯ�ϱ�(goto��, for�� �̿�)*/
int main(void)
{
	unsigned int integer = 0, sub = 0, i = 0, k = 0, l = 0, m = 1, n = 0, s = 0;

	printf("10������ �Է��ϼ��� :");
	scanf("%d", &integer);


	if (integer < 0)
	{
		printf("10���� ���� ������ �Է��ϼ��� :");
		scanf("%d", &integer);
	}
	if (integer > 0)
	{
		printf("���� ���� %d�� 2������ ", integer);
	}

	l = integer;
	sub = integer;
	if (integer == 0)
	{
		printf("���� ���� 0�� 2������ 0�Դϴ�.");
	}
	else
	{
	loop:
		m = 1;
		for (i = 1; i >= 0; i++)
		{
			l = l / 2;
			m *= 2;
			if (l == 0)
			{
				printf("1");
				m = m / 2;
				sub = sub - m;
				break;
			}
		}

		n = sub;
		if (sub == 0)
		{
			for (i--; i > 0; i--)
			{
				printf("0");
			}
			l = sub;
			if (sub == 0)
			{
				goto end;
			}
			goto loop;
		}

		else
		{
			for (k = 1; k >= 0; k++)
			{
				n = n / 2;
				if (n == 0)
				{
					break;
				}
			}

			for (i--; i > k; i--)
			{
				printf("0");
			}
			l = sub;
			if (sub == 0)
			{
				goto end;
			}
			goto loop;
		}
	}
end:
	if (integer > 0)
	{
		printf("�Դϴ�.");
	}
	printf("\n");
	return 0;
}



#elif 0
/* 10������ 2������ ��ȯ�ϱ�(4�ڸ��� ����, 8��Ʈ���� �ϼ�)*/
int main(void)
{
	int integer = 0, sub = 0, i = 0, k = 0, l = 0, m = 1, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0;

	printf("10���� ���� ������ �Է��ϼ��� :");
	scanf("%d", &integer);

	o = integer;
	while (1)
	{
		o = o / 16;
		s++;
		if (o == 0)
			break;
	}

	switch (s)
	{

	case 2:

		l = integer / 16;
		sub = integer / 16;
		if (integer == 0)
		{
			printf("0");
		}
		else
		{
		loop2:
			m = 1;
			for (i = 1; i >= 0; i++)
			{
				l = l / 2;
				m *= 2;
				if (l == 0)
				{
					printf("1");
					m = m / 2;
					sub = sub - m;
					break;
				}
			}

			n = sub;
			if (sub == 0)
			{
				for (i--; i > 0; i--)
				{
					printf("0");
				}
				l = sub;
				if (sub == 0)
				{
					goto end2;
				}
				goto loop2;
			}

			else
			{
				for (k = 1; k >= 0; k++)
				{
					n = n / 2;
					if (n == 0)
					{
						break;
					}
				}

				for (i--; i > k; i--)
				{
					printf("0");
				}
				l = sub;
				if (sub == 0)
				{
					goto end2;
				}
				goto loop2;
			}
		}
	end2:
		printf(" ");

	case 1:

		if (s = 2)
		{
			l = integer - 240;
			sub = integer - 240;

			if (l < 0)
			{
				l = l + 224;
				sub = sub + 224;
			}
			r = l;
			for (p = 1; p >= 0; p++)
			{
				if (sub == 0)
				{
					p = 0;
				}
				r = r / 2;
				if (r == 0)
				{
					break;
				}
			}

			for (q = 4; q > p; q--)
			{
				printf("0");
			}
			if (l == 0)
			{
				goto end1;
			}

		}
		else
		{
			l = integer;
			sub = integer;
		}

		if (integer == 0)
		{
			printf("0");
		}
		else
		{
		loop1:
			m = 1;
			for (i = 1; i >= 0; i++)
			{
				l = l / 2;
				m *= 2;
				if (l == 0)
				{
					printf("1");
					m = m / 2;
					sub = sub - m;
					break;
				}
			}

			n = sub;
			if (sub == 0)
			{
				for (i--; i > 0; i--)
				{
					printf("0");
				}
				l = sub;
				if (sub == 0)
				{
					goto end1;
				}
				goto loop1;
			}

			else
			{
				for (k = 1; k >= 0; k++)
				{
					n = n / 2;
					if (n == 0)
					{
						break;
					}
				}

				for (i--; i > k; i--)
				{
					printf("0");
				}
				l = sub;
				if (sub == 0)
				{
					goto end1;
				}
				goto loop1;
			}
		}
	end1:
		return 0;
		break;
	}

}
#elif 1
/* 10������ 2������ ��ȯ�ϱ�(��Ʈ ������ �̿�)*/
int main(void)
{
	int integer = 0, i = 0; //integer : �Է¹��� 10���� ����, i : ��Ʈ �ڸ�, 

	printf("10���� ���� ������ �Է��ϼ��� : "); //10���� ���� �Է�
	scanf("%d", &integer);
	printf("10���� %d�� 2������ ", integer);

	for (i = 31; i >= 0; i--) //���ʿ� 0 ǥ��Ǵ� ���� �����ϱ� ���� 2������ ó�� �����ϴ� ��Ʈ �ڸ� Ȯ��
	{
		if (integer&(1 << i))
		{
			break;
		}
	}
	for (i; i >= 0; i--) // 2������ �����ϴ� ��Ʈ �ڸ� ���� '&'�������� 2���� ���
	{
		if (integer&(1 << i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}

		if (i%4 == 0) // 2������ 4�ڸ��� ��� ǥ��
		{
			printf(" ");
		}
	}
	printf("�Դϴ�.");
	printf("\n");
}
#endif



/*
int i1 = 0, i2 = 0, i3 = 0;
int s1 = 0, s2 = 0, s3 = 0;

l = integer - 240;
sub = integer - 240;

if (l < 0)
{
l = l + 224;
sub = sub + 224;
}
r = l;
for (p = 1; p >= 0; p++)
{
if (sub == 0)
{
p = 0;
}
r = r / 2;
if (r == 0)
{
break;
}
}

for (q = 4; q > p; q--)
{
printf("0");
}



if (s = 3)
{
l = integer - 3840;
sub = integer - 3840;

if (l < 0)
{
l = l + 3584;
sub = sub + 3584;
}
r = l;
for (p = 1; p >= 0; p++)
{
if (sub == 0)
{
p = 0;
}
r = r / 2;
if (r == 0)
{
break;
}
}

for (q = 4; q > p; q--)
{
printf("0");
}



}
*/