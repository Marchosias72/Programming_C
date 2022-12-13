/*
//lab 1 문자열 전처리
#include <stdio.h>

int main(void) {
	char line[100] = "";
	char line2[100] = "";
	printf("문자열을 입력하시오: ");
	gets_s(line, sizeof(line)); // 한 줄의 문자열 입력
	int k = 0;
	for (int i = 0; line[i] != '\0'; ++i) {
		while (line[i] >= 'A' && line[i] <= 'z') {
			line2[k++] = line[i++];
		}
	}
	line2[k] = '\0';
	printf("출력 문자열: %s\n", line2);
	return 0;
}

//lab 패스워드 입력
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char password[10];
	int i;
	system("cls");
	printf("패스워드를 입력하시오: ");
	for (i = 0; i < 8; i++) {
		password[i] = _getch();
		printf("*");
	}
	password[i] = '\0';
	printf("\n");

	printf("입력된 패스워드는 다음과 같습니다: ");
	printf("%s\n", password);
	_getch();
	return 0;
}

//lab 화살표 키 입력받기

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

	// 사용자로부터 위치를 받아서 보드에 표시한다.
	while (1) {
		system("cls");
		printf("왼쪽이동:<-, 오른쪽 이동:-> 위쪽 이동:^, 아래쪽 이동:V\n");
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

// 단답형 퀴즈 채점

#include <stdio.h>
#include <string.h>
int main(void)
{
	char key[] = "C";
	char buffer[80] = "";
	do {
		printf("임베디드 장치에 가장 많이 사용되는 언어는? ");
		gets_s(buffer, sizeof(buffer));
	} while (strcmp(key, buffer) != 0);
	printf("맞았습니다!");
	return 0;
}

// 행맨 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(void) {
	char solution[100] = "meet at midnight"; // 정답이 들어 있는
	문자 배열
		char answer[100] = "____ __ ________"; // 현재까지 사용자가 맞춘
	문자열
		char ch;
	int i;
	while (1) {
		printf("\n문자열을 입력하시오: %s \n", answer);
		printf("글자를 추측하시오: ");
		ch = _getch();
		// 사용자가 입력한 문자를 answer[]에 넣어서 정답을 비교한다.
		for (i = 0; solution[i] != '\0'; i++) {
			// 사용자가 맞추었으면 글자를 보이게 한다.
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) break; // 정답과 일치하는지를 검사
	}
	return 0;
}

//애나그램

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
		printf("%s의 원래단어를 맞춰보세요: ", s);
		scanf("%s", ans);
	} while (strcmp(ans, SOL) != 0);
	printf("축하합니다. \n");
	return 0;
}

// 한영사전

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define WORDS 5
int main(void)
{
	int i, index;
	char dic[WORDS][2][30] = {
	{ "book", "책" },
	{ "boy", "소년" },
	{ "computer", "컴퓨터" },
	{ "language", "언어" },
	{ "rain", "비" },
	};
	char word[30];
	printf("단어를 입력하시오:");
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
	printf("사전에서 발견되지 않았습니다.\n");
	return 0;
}

//문자열의 정렬

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


// 텍스트 압축 1

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

// 텍스트 압축 2
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

// 텍스트 복호화

#include <stdio.h>

void encode(char* src, char* key, char* result);

void decode(char* src, char* key, char* result);

void main(void) {

	char* key = "123456";

	char* data = "This is a house";

	char result1[100];

	char result2[100];

	encode(data, key, result1);

	printf("암호화 전 문자열 = %s\n", data);
	printf("암호화 키=%s\n", key);

	printf("암호화 후의 문자열=%s\n",result1);

	decode(result1, key, result2);

	printf("복호화 후 문자열=%s\n", result2);

}

void encode(char* src, char* key, char* result) {

	while (*src) *result++ = *src++ ^ *key++;

	*result = '\0';

}

void decode(char* src, char* key, char* result) {

	encode(src, key, result);

}

