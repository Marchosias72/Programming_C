/*
//lab 1 ���ڿ� ��ó��
#include <stdio.h>

int main(void) {
	char line[100] = "";
	char line2[100] = "";
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(line, sizeof(line)); // �� ���� ���ڿ� �Է�
	int k = 0;
	for (int i = 0; line[i] != '\0'; ++i) {
		while (line[i] >= 'A' && line[i] <= 'z') {
			line2[k++] = line[i++];
		}
	}
	line2[k] = '\0';
	printf("��� ���ڿ�: %s\n", line2);
	return 0;
}

//lab �н����� �Է�
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char password[10];
	int i;
	system("cls");
	printf("�н����带 �Է��Ͻÿ�: ");
	for (i = 0; i < 8; i++) {
		password[i] = _getch();
		printf("*");
	}
	password[i] = '\0';
	printf("\n");

	printf("�Էµ� �н������ ������ �����ϴ�: ");
	printf("%s\n", password);
	_getch();
	return 0;
}

//lab ȭ��ǥ Ű �Է¹ޱ�

#include <stdio.h>
#include <conio.h>
int main(void) {
	char board[10][10] = { {'#', '#', '#', '#', '.', '.', '.', '.', '.', '.' },
	{'.', '.', '.', '.', '.', '#', '.', '.', '.', '.' },
	{'#', '#', '#', '.', '#', '.', '.', '.', '.', '.' },
	{'.', '.', '#', '.', '.', '#', '.', '.', '.', '.' },
	{'.', '.', '#', '.', '.', '#', '.', '.', '.', '.' },
	{'.', '.', '#', '.', '.', '#', '.', '.', '.', '.' },
	{'.', '.', '.', '#', '.', '.', '#', '#', '.', '.' },
	{'.', '.', '.', '.', '#', '.', '.', '.', '#', '#' },
	{'.', '.', '.', '.', '.', '#', '.', '.', '.', '.' },
	{'.', '.', '.', '.', '.', '#', '#', '#', '#', '#' } };
	int xpos = 0, ypos = 1;
	board[ypos][xpos] = '@';

	// ����ڷκ��� ��ġ�� �޾Ƽ� ���忡 ǥ���Ѵ�.
	while (1) {
		system("cls");
		printf("�����̵�:<-, ������ �̵�:-> ���� �̵�:^, �Ʒ��� �̵�:V\n");
		for (int y = 0; y < 10; y++) {
			for (int x = 0; x < 10; x++) printf("%c", board[y][x]);
			printf("\n");
		}
		board[ypos][xpos] = '.';
		int ch = _getch();
		if (ch == 224) {
			int ch2 = _getch();
			if (ch2 == 75) xpos--;
			else if (ch2 == 80) ypos++;
			else if (ch2 == 72) ypos--;
			else if (ch2 == 77) xpos++;
		}
		board[ypos][xpos] = '@';
	}
	return 0;
}

// �ܴ��� ���� ä��

#include <stdio.h>
#include <string.h>
int main(void)
{
	char key[] = "C";
	char buffer[80] = "";
	do {
		printf("�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ����? ");
		gets_s(buffer, sizeof(buffer));
	} while (strcmp(key, buffer) != 0);
	printf("�¾ҽ��ϴ�!");
	return 0;
}

// ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(void) {
	char solution[100] = "meet at midnight"; // ������ ��� �ִ�
	���� �迭
		char answer[100] = "____ __ ________"; // ������� ����ڰ� ����
	���ڿ�
		char ch;
	int i;
	while (1) {
		printf("\n���ڿ��� �Է��Ͻÿ�: %s \n", answer);
		printf("���ڸ� �����Ͻÿ�: ");
		ch = _getch();
		// ����ڰ� �Է��� ���ڸ� answer[]�� �־ ������ ���Ѵ�.
		for (i = 0; solution[i] != '\0'; i++) {
			// ����ڰ� ���߾����� ���ڸ� ���̰� �Ѵ�.
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) break; // ����� ��ġ�ϴ����� �˻�
	}
	return 0;
}

//�ֳ��׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SOL "apple"
int main(void)
{
	char s[100] = SOL;
	char ans[100];
	int i, len;
	len = strlen(s);
	for (i = 0; i < len; i++) {
		int pos1 = rand() % len;
		int pos2 = rand() % len;
		char tmp = s[pos1];
		s[pos1] = s[pos2];
		s[pos2] = tmp;
	}
	do {
		printf("%s�� �����ܾ ���纸����: ", s);
		scanf("%s", ans);
	} while (strcmp(ans, SOL) != 0);
	printf("�����մϴ�. \n");
	return 0;
}

// �ѿ�����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define WORDS 5
int main(void)
{
	int i, index;
	char dic[WORDS][2][30] = {
	{ "book", "å" },
	{ "boy", "�ҳ�" },
	{ "computer", "��ǻ��" },
	{ "language", "���" },
	{ "rain", "��" },
	};
	char word[30];
	printf("�ܾ �Է��Ͻÿ�:");
	scanf("%s", word);
	index = 0;
	for (i = 0; i < WORDS; i++)
	{
		if (strcmp(dic[index][0], word) == 0)
		{
			printf("%s: %s\n", word, dic[index][1]);
			return 0;
		}
		index++;
	}
	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
	return 0;
}

//���ڿ��� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 6
int main(void)
{
	int i, k;
	char fruits[SIZE][20] = {
	"pineapple",
	"banana",
	"apple",
	"tomato",
	"pear",
	"avocado"
	};
Sol:
	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (strcmp(fruits[i], fruits[i + 1]) > 0) {
				char tmp[20];
				strcpy(tmp, fruits[i]);
				strcpy(fruits[i], fruits[i + 1]);
				strcpy(fruits[i + 1], tmp);
			}
		}
	}
	for (k = 0; k < SIZE; k++)
		printf("%s \n", fruits[k]);
	return 0;
}


// �ؽ�Ʈ ���� 1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0, j = 0, cnt = 0, length = 0;
	char str[100];

	printf("Enter any string: ");
	scanf("%s", str);

	while (str[i] != '\0') {
		length++;
		i++;
	}

	for (i = 0; i <= length; i++) {
		if (str[j] == str[i]) {
			cnt++;
		}
		else {
			printf("%c%d", str[j], cnt);
			j = i;
			cnt = 0;
			i--;
		}
	}

	return 0;
}

// �ؽ�Ʈ ���� 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int len;
	int count = 0;
	char arr[255];
	scanf("%s", arr);
	len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		count++;
		if (arr[i] != arr[i + 1])
		{
			printf("%c%d", arr[i], count);
			count = 0;
		}
	}

}
*/

// �ؽ�Ʈ ��ȣȭ

#include <stdio.h>

void encode(char* src, char* key, char* result);

void decode(char* src, char* key, char* result);

void main(void) {

	char* key = "123456";

	char* data = "This is a house";

	char result1[100];

	char result2[100];

	encode(data, key, result1);

	printf("��ȣȭ �� ���ڿ� = %s\n", data);
	printf("��ȣȭ Ű=%s\n", key);

	printf("��ȣȭ ���� ���ڿ�=%s\n",result1);

	decode(result1, key, result2);

	printf("��ȣȭ �� ���ڿ�=%s\n", result2);

}

void encode(char* src, char* key, char* result) {

	while (*src) *result++ = *src++ ^ *key++;

	*result = '\0';

}

void decode(char* src, char* key, char* result) {

	encode(src, key, result);

}

