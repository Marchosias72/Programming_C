//문자열의 끝은 반드시 NULL문자 값으로 끝남
/*
//예제1
#include <stdio.h>

int main(void) {
	char str1[6] = "Seoul";
	char str2[3] = {'i', 's', '\0'};
	char str3[] = "the capital city of Korea";

	printf("%s %s %s\n", str1, str2, str3);

	return 0;
}


//예제2
#include <stdio.h>

int main(void) {
	char str[] = "komputer";

	printf("%s\n", str);
	str[0] = 'c';
	printf("%s\n", str);

	return 0;
}


//예제 3
#include <stdio.h>

int main(void) {
	char str[] = "A barking dog never bites";

	int i = 0;

	while (str[i] != 0) {
		i++;
	}
	printf("문자열 %s의 길이는 %d입니다.\n", str, i);

	return 0;
}


 //문자 입출력 예제1

#include <stdio.h>
int main(void)
{
	int ch;// 정수형에 주의
	ch = getchar(); // 첫 번째 문자를 입력받는다.
	putchar(ch);// 문자를 출력한다.
	return 0;
}


//문자 입출력 예제2

#include <stdio.h>
#include <conio.h>
int main(void)
{
	int ch;// 정수형에 주의
	ch = _getch(); // 첫 번째 문자를 입력받는다.
	_putch(ch);// 문자를 출력한다.
	return 0;
}


//문자열 입출력 예제 1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char name[100];
	char address[100];
	printf("이름이 어떻게 되시나요? ");
	scanf("%s", name);
	printf("어디 사시나요? ");
	scanf("%s", address);
	printf("안녕하세요, %s에 사는 %s씨.\n", address, name);
	return 0;
}


//문자열 입출력 예제 2

#include <stdio.h>
int main(void)
{
	char name[100];
	char address[100];
	printf("이름이 어떻게 되시나요? ");
	gets_s(name, 99);
	printf("어디 사시나요? ");
	gets_s(address, 99);
	printf("안녕하세요, %s에 사는 %s씨.\n", address, name);
	return 0;
}

// 문자열 비교 예제

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[80];// 첫 번째 단어를 저장할 문자배열
	char s2[80];// 두 번째 단어를 저장할 문자배열
	int result;
	printf("첫번째 단어를 입력하시오:");
	scanf("%s", s1, sizeof(s1));
	printf("두번째 단어를 입력하시오:");
	scanf("%s", s2, sizeof(s2));
	result = strcmp(s1, s2);
	if (result < 0)
		printf("%s가 %s보다 앞에 있습니다.\n", s1, s2);
	else if (result == 0)
		printf("%s가 %s와 같습니다.\n", s1, s2);
	else
		printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);
	return 0;
}


//문자열 길이

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[] = "abcdefgh";
	int len = strlen(s);
	printf("문자열 %s의 길이=%d \n", s, len);
	return 0;
}


// 문자열 복사

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "Hello";
	char dst[6];
	strcpy(dst, src);
	printf("복사된 문자열 = %s \n", dst);
	return 0;
}


// 문자열 연결

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[12] = "Hello";
	strcat(s, " World"); // s에 문자열 “World"를 붙인다.
	printf("%s \n", s);
	return 0;
}


// 문자열을 수치로 변환

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	const char s[] = "100";
	char t[100] = "";
	int i;
	printf("%d \n", atoi("100")); // atoi()는 문자열 “100”을 정수 100으로 바꾼다.
	sscanf(s, "%d", &i); // 문자열 “100”을 정수 100으로 i에 저장.
	sprintf(t, "%d", 100); // 정수 100을 문자열 “100”으로 t에 저장
	return 0;
}


// 문자열과 포인터 예제

#include <stdio.h>
int main(void)
{
	char s[] = "HelloWorld";
	char* p = "HelloWorld";
	s[0] = 'h';// 변경 가능하다.
	// p[0] = 'h';// 이 문장을 실행하면 프로그램의 작동이 중지된다.
	printf("포인터가 가리키는 문자열 = %s \n", p);
	p = "Goodbye";// 이것은 가능하다. 큰 장점이다.
	printf("포인터가 가리키는 문자열 = %s \n", p);
	return 0;
}
*/

// 문자열의 배열: 2차원 문자열 배열 예제

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
		printf("%d 번째 메뉴: %s \n", i, menu[i]);
	return 0;
}

