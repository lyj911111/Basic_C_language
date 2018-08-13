#include <stdio.h>

/*
	������ �����ϱ�.
	enumerate : enum

	enum ���� ����� ����, ������·� ����Ǿ� ��𿡼��� ����� �� �ִ�.
	������, ���α׷��� �������� ���̴µ� �ִ�.

	������ ����.
*/

enum  // ga�� ���� ���ص� �ں��ʹ� 1�� ������.
{
	ga=1, na, da, ra, ma, ba, sa
};

						// typedef�� �̿�.
						// ���� typedef�� �� �ʿ䰡 ����. ������ �ټ��� ����� �ѹ��� ǥ���ϴ� ���� �� ���ǰ� �ִ�.
typedef enum syllable	// �ټ��� ����� ���ÿ� ����. �������ļֶ��
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7	//	�̷��� �����ϸ� ���� ���� �� �ִ�.
}Syllable;

void Sound(int sy)
{
	switch (sy)
	{
	case Do:
		puts("���� �Ͼ� ������~");
		return;
	case Re:
		puts("���� �Ͼ� ������~");
		return;
	case Mi:
		puts("�̴� �Ͼ� ������~");
		return;
	case Fa:
		puts("�Ĵ� �Ͼ� ������~");
		return;
	case So:
		puts("�ִ� �Ͼ� ������~");
		return;
	case La:
		puts("��� �Ͼ� ������~");
		return;
	case Ti:
		puts("�ô� �Ͼ� ������~");
		return;
	}
	puts("�� �Բ� �뷡�θ���");
}

int main()
{
	int tone;
	for (tone = Do ; tone <= Ti ; tone+=1 )	//	�ٽø��� for(tone = 1; tone <= 7 ; tone += 1) �� ����. ����̱� ������.
	{
		Sound(tone);
	}

	printf("%d, %d, %d, %d, %d, %d, %d \n", ga, na, da, ra, ma, ba, sa);

	return 0;
}