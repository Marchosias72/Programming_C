/*
//programming 1 문자열 안에 포함된 문자들의 등장횟수를 계산하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int count, check = 0;
	char text[100] = "";

	printf("텍스트를 입력하시오:");
	gets_s(text, sizeof(text));

	for (int i = 0; i < strlen(text); i++) {
		count = 0;
		check = 0;

		if (i != 0) {
			for (int j = 0; j < i; j++) {
				if (text[i] == text[j]) {
					check = 1;
				}		
			}
		}
		if (check == 0) {
			for (int j = i; j < sizeof(text); j++) {
				if (text[i] == text[j]) {
					count++;
				}
			}
			printf("%c 문자가 %d번 등장하였음!\n", text[i], count);
		}
	}
	return 0;
}


//prgramming2 사용자에게 텍스트 받아 대문자로 만들기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char text[100] = "";

	printf("텍스트를 입력하시오:");
	gets_s(text, sizeof(text));

	for (int i = 0; i < strlen(text); i++) text[i] = toupper(text[i]);

	printf("%s", text);
	return 0;
}


//programming3 텍스트안에 포함된 과도한 공백을 없애는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char text[100] = "", ctext[100] = "", count = 0;

	printf("텍스트를 입력하시오:");
	gets_s(text, sizeof(text));

	for (int i = 0; i < strlen(text); i++) {
		if (!(text[i] == 32 && text[i] == text[i + 1])) {
			ctext[count] = text[i];
			count++;
		}
	}

	printf("%s", ctext);
	return 0;
}


//programming 4 텍스트안의 모음을 전부 삭제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char text[100] = "";

	printf("텍스트를 입력하시오: ");
	gets_s(text, sizeof(text));

	for (int i = 0; i < strlen(text); i++) {
		if (text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u') {
			printf("%c", text[i]);
		}
	}
	return 0;
}


//programming 5  암호 안에 대문자, 소문자, 숫자가 모두 들어있으면 강인한 암호로 간주

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {
	int check[3] = { 0 };
	char text[100] = "";

	while (1) {
		printf("암호를 생성하시오: ");
		gets_s(text, sizeof(text));

		check[0] = check[1] = check[2] = 0;

		for (int i = 0; i < strlen(text); i++) {
			if (text[i] >= '0' && text[i] <= '9') {
				check[0] = 1;
			}
			else if (text[i] >= 'a' && text[i] <= 'z') {
				check[1] = 1;
			}
			else if (text[i] >= 'A' && text[i] <= 'Z') {
				check[2] = 1;
			}
		}

		if (check[0] == 1 && check[1] == 1 && check[2] == 1) {
			printf("적정한 암호입니다.\n");
			break;
		}
		else 
			printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");
	}
	return 0;
}


//programming 6 철자교정프로그램,마침표,첫문자 대문자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100


int main(void) {
	char text[SIZE] = { 0 };

	printf("텍스트를 입력하시오:");
	gets_s(text, sizeof(text));

	text[0] = toupper(text[0]);

	if (text[strlen(text) - 1] != '.') {
		strcat(text, ".");
	}
	printf("결과 텍스트 출력:%s", text);

	return 0;
}


//programming 7 문자열의 오른쪽 끝에서 모든 공백 문자들을 제거하는 함수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim_right(char s[]);

int main(void) {
	char text[100] = "";

	printf("텍스트를 입력하시오:");
	gets_s(text, sizeof(text));

	trim_right(text);
	printf("%s~END~", text);
	return 0;
}

void trim_right(char s[]) {
	int count = 0;

	for (int i = strlen(s) - 1; i > -1; i--) {
		if (s[i] == ' ') count++;
		else break;
	}
	s[strlen(s) - count] = '\0';
}


//programming 8 문자열 왼쪽 끝에서 모든 공백 제거

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim_left(char s[]);

int main(void) {
	char text[100] = "";

	printf("텍스트를 입력하시오:");
	gets_s(text, sizeof(text));

	trim_left(text);
	printf("%s", text);
	return 0;
}

void trim_left(char s[]) {
	int count = 0;

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') count++;
		else break;
	}

	if (count != 0) {
		for (int i = 0; i < strlen(s) - count; i++) s[i] = s[i + count];
		s[strlen(s) - count] = '\0';
	}
}

//programming 9 문자열의 첫 글자를 대문자로 변경하는 함수 capitalize()를 작성한다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalize(char s[]);

int main(void) {
	char text[100] = "";

	printf("텍스트를 입력하시오:");
	gets(text);             //vs로 코딩하면 gets_s(text, sizeof(text));로 써도 무방함

	capitalize(text);
	printf("%s", text);
	return 0;
}

void capitalize(char s[]) {
	if (s[0] >= 'a' && s[0] <= 'z') {
		s[0] = toupper(s[0]);
	}
}


//programming 10 사용자로부터 받은 문자열이 회문(회문은 앞뒤로 동일한 단어이다.예를 들어서 reviver)인지를 점검하는 프로그램을 작성하라.

#include <stdio.h>
#include <string.h>
#define SIZE 100

void circular(char word[]) {
	for (int i = 0; i < strlen(word); i++) {
		if (word[i] != word[strlen(word) - 1 - i])
			break;
		else {
			printf("%s는 회문입니다.", word);
			return;
		}
	}
	printf("%s는 회문이 아닙니다.", word);
}

int main(void) {
	char word[SIZE] = { 0 };

	printf("문자열을 입력하시오: ");
	gets_s(word, sizeof(word));

	circular(word);

	return 0;
}


//programming 11 5개의 파일 이름을 서로 다르게 생성하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void) {
	char file[100] = "", fivefile[5][100] = { "","","","","" }, t[6] = " .png";

	printf("파일 이름의 첫 부분을 입력하시오: ");
	gets_s(file, sizeof(file));

	for (int i = 0; i < 5; i++) {
		t[0] = i + 49;   //t를 1.png, 2.png...의 형태로 만든다

		strcpy(fivefile[i], file);
		strcat(fivefile[i], t);
		printf("%s ", fivefile[i]);
	}
	return 0;
}

//programming 12 간단한 채팅 봇

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>


int main(void) {
	char text[6][100] = { "좀 더 말해주세요.","계속하세요. 나는 듣고 있어요.","그런가요?", "좀 더 자세히 말해주겠어요?","그렇군요.","흥미롭네요." };
	char name[30], usertext[100];
	srand(time(NULL));

	printf("나는 ELIZA에요. 당신의 이름은 무엇인가요?\n>");
	gets(name);
	printf("반가워요 %s. 나와 어떤 이야기를 하고 싶나요?\n", name);

	strcat(text[0], name);

	while (1) {
		printf(">");
		gets_s(usertext,sizeof(usertext));
		printf("%s\n", text[((int)rand()) % 6]);
	}
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim_left(char s[]);

int main(void) {
	char text[100] = "";

	printf("텍스트를 입력하시오:");
	gets(text);             //vs로 코딩하면 gets_s(text, sizeof(text));로 써도 무방함

	trim_left(text);
	printf("%s", text);
	return 0;
}

void trim_left(char s[]) {
	int count = 0;

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') count++;
		else break;
	}

	if (count != 0) {
		for (int i = 0; i < strlen(s) - count; i++) s[i] = s[i + count];
		s[strlen(s) - count] = '\0';
	}
}