//���ڿ��� ���� �ݵ�� NULL���� ������ ����
/*
//����1
#include <stdio.h>

int main(void) {
	char str1[6] = "Seoul";
	char str2[3] = {'i', 's', '\0'};
	char str3[] = "the capital city of Korea";

	printf("%s %s %s\n", str1, str2, str3);

	return 0;
}


//����2
#include <stdio.h>

int main(void) {
	char str[] = "komputer";

	printf("%s\n", str);
	str[0] = 'c';
	printf("%s\n", str);

	return 0;
}


//���� 3
#include <stdio.h>

int main(void) {
	char str[] = "A barking dog never bites";

	int i = 0;

	while (str[i] != 0) {
		i++;
	}
	printf("���ڿ� %s�� ���̴� %d�Դϴ�.\n", str, i);

	return 0;
}


 //���� ����� ����1

#include <stdio.h>
int main(void)
{
	int ch;// �������� ����
	ch = getchar(); // ù ��° ���ڸ� �Է¹޴´�.
	putchar(ch);// ���ڸ� ����Ѵ�.
	return 0;
}


//���� ����� ����2

#include <stdio.h>
#include <conio.h>
int main(void)
{
	int ch;// �������� ����
	ch = _getch(); // ù ��° ���ڸ� �Է¹޴´�.
	_putch(ch);// ���ڸ� ����Ѵ�.
	return 0;
}


//���ڿ� ����� ���� 1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char name[100];
	char address[100];
	printf("�̸��� ��� �ǽó���? ");
	scanf("%s", name);
	printf("��� ��ó���? ");
	scanf("%s", address);
	printf("�ȳ��ϼ���, %s�� ��� %s��.\n", address, name);
	return 0;
}


//���ڿ� ����� ���� 2

#include <stdio.h>
int main(void)
{
	char name[100];
	char address[100];
	printf("�̸��� ��� �ǽó���? ");
	gets_s(name, 99);
	printf("��� ��ó���? ");
	gets_s(address, 99);
	printf("�ȳ��ϼ���, %s�� ��� %s��.\n", address, name);
	return 0;
}

// ���ڿ� �� ����

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[80];// ù ��° �ܾ ������ ���ڹ迭
	char s2[80];// �� ��° �ܾ ������ ���ڹ迭
	int result;
	printf("ù��° �ܾ �Է��Ͻÿ�:");
	scanf("%s", s1, sizeof(s1));
	printf("�ι�° �ܾ �Է��Ͻÿ�:");
	scanf("%s", s2, sizeof(s2));
	result = strcmp(s1, s2);
	if (result < 0)
		printf("%s�� %s���� �տ� �ֽ��ϴ�.\n", s1, s2);
	else if (result == 0)
		printf("%s�� %s�� �����ϴ�.\n", s1, s2);
	else
		printf("%s�� %s���� �ڿ� �ֽ��ϴ�.\n", s1, s2);
	return 0;
}


//���ڿ� ����

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[] = "abcdefgh";
	int len = strlen(s);
	printf("���ڿ� %s�� ����=%d \n", s, len);
	return 0;
}


// ���ڿ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "Hello";
	char dst[6];
	strcpy(dst, src);
	printf("����� ���ڿ� = %s \n", dst);
	return 0;
}


// ���ڿ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[12] = "Hello";
	strcat(s, " World"); // s�� ���ڿ� ��World"�� ���δ�.
	printf("%s \n", s);
	return 0;
}


// ���ڿ��� ��ġ�� ��ȯ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	const char s[] = "100";
	char t[100] = "";
	int i;
	printf("%d \n", atoi("100")); // atoi()�� ���ڿ� ��100���� ���� 100���� �ٲ۴�.
	sscanf(s, "%d", &i); // ���ڿ� ��100���� ���� 100���� i�� ����.
	sprintf(t, "%d", 100); // ���� 100�� ���ڿ� ��100������ t�� ����
	return 0;
}


// ���ڿ��� ������ ����

#include <stdio.h>
int main(void)
{
	char s[] = "HelloWorld";
	char* p = "HelloWorld";
	s[0] = 'h';// ���� �����ϴ�.
	// p[0] = 'h';// �� ������ �����ϸ� ���α׷��� �۵��� �����ȴ�.
	printf("�����Ͱ� ����Ű�� ���ڿ� = %s \n", p);
	p = "Goodbye";// �̰��� �����ϴ�. ū �����̴�.
	printf("�����Ͱ� ����Ű�� ���ڿ� = %s \n", p);
	return 0;
}
*/

// ���ڿ��� �迭: 2���� ���ڿ� �迭 ����

#include <stdio.h>
int main(void)
{
	int i;
	char menu[5][10] = {
	"init",
	"open",
	"close",
	"read",
	"write"
	};
	for (i = 0; i < 5; i++)
		printf("%d ��° �޴�: %s \n", i, menu[i]);
	return 0;
}

