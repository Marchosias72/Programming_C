/*
//programming 1 ���ڿ� �ȿ� ���Ե� ���ڵ��� ����Ƚ���� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int count, check = 0;
	char text[100] = "";

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
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
			printf("%c ���ڰ� %d�� �����Ͽ���!\n", text[i], count);
		}
	}
	return 0;
}


//prgramming2 ����ڿ��� �ؽ�Ʈ �޾� �빮�ڷ� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char text[100] = "";

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets_s(text, sizeof(text));

	for (int i = 0; i < strlen(text); i++) text[i] = toupper(text[i]);

	printf("%s", text);
	return 0;
}


//programming3 �ؽ�Ʈ�ȿ� ���Ե� ������ ������ ���ִ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char text[100] = "", ctext[100] = "", count = 0;

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
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


//programming 4 �ؽ�Ʈ���� ������ ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char text[100] = "";

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(text, sizeof(text));

	for (int i = 0; i < strlen(text); i++) {
		if (text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u') {
			printf("%c", text[i]);
		}
	}
	return 0;
}


//programming 5  ��ȣ �ȿ� �빮��, �ҹ���, ���ڰ� ��� ��������� ������ ��ȣ�� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {
	int check[3] = { 0 };
	char text[100] = "";

	while (1) {
		printf("��ȣ�� �����Ͻÿ�: ");
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
			printf("������ ��ȣ�Դϴ�.\n");
			break;
		}
		else 
			printf("����, �ҹ���, �빮�ڸ� ��� ��ȣ�� �ٽ� ���弼��!\n");
	}
	return 0;
}


//programming 6 ö�ڱ������α׷�,��ħǥ,ù���� �빮��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100


int main(void) {
	char text[SIZE] = { 0 };

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets_s(text, sizeof(text));

	text[0] = toupper(text[0]);

	if (text[strlen(text) - 1] != '.') {
		strcat(text, ".");
	}
	printf("��� �ؽ�Ʈ ���:%s", text);

	return 0;
}


//programming 7 ���ڿ��� ������ ������ ��� ���� ���ڵ��� �����ϴ� �Լ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim_right(char s[]);

int main(void) {
	char text[100] = "";

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
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


//programming 8 ���ڿ� ���� ������ ��� ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim_left(char s[]);

int main(void) {
	char text[100] = "";

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
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

//programming 9 ���ڿ��� ù ���ڸ� �빮�ڷ� �����ϴ� �Լ� capitalize()�� �ۼ��Ѵ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalize(char s[]);

int main(void) {
	char text[100] = "";

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets(text);             //vs�� �ڵ��ϸ� gets_s(text, sizeof(text));�� �ᵵ ������

	capitalize(text);
	printf("%s", text);
	return 0;
}

void capitalize(char s[]) {
	if (s[0] >= 'a' && s[0] <= 'z') {
		s[0] = toupper(s[0]);
	}
}


//programming 10 ����ڷκ��� ���� ���ڿ��� ȸ��(ȸ���� �յڷ� ������ �ܾ��̴�.���� �� reviver)������ �����ϴ� ���α׷��� �ۼ��϶�.

#include <stdio.h>
#include <string.h>
#define SIZE 100

void circular(char word[]) {
	for (int i = 0; i < strlen(word); i++) {
		if (word[i] != word[strlen(word) - 1 - i])
			break;
		else {
			printf("%s�� ȸ���Դϴ�.", word);
			return;
		}
	}
	printf("%s�� ȸ���� �ƴմϴ�.", word);
}

int main(void) {
	char word[SIZE] = { 0 };

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(word, sizeof(word));

	circular(word);

	return 0;
}


//programming 11 5���� ���� �̸��� ���� �ٸ��� �����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void) {
	char file[100] = "", fivefile[5][100] = { "","","","","" }, t[6] = " .png";

	printf("���� �̸��� ù �κ��� �Է��Ͻÿ�: ");
	gets_s(file, sizeof(file));

	for (int i = 0; i < 5; i++) {
		t[0] = i + 49;   //t�� 1.png, 2.png...�� ���·� �����

		strcpy(fivefile[i], file);
		strcat(fivefile[i], t);
		printf("%s ", fivefile[i]);
	}
	return 0;
}

//programming 12 ������ ä�� ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>


int main(void) {
	char text[6][100] = { "�� �� �����ּ���.","����ϼ���. ���� ��� �־��.","�׷�����?", "�� �� �ڼ��� �����ְھ��?","�׷�����.","��̷ӳ׿�." };
	char name[30], usertext[100];
	srand(time(NULL));

	printf("���� ELIZA����. ����� �̸��� �����ΰ���?\n>");
	gets(name);
	printf("�ݰ����� %s. ���� � �̾߱⸦ �ϰ� �ͳ���?\n", name);

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

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets(text);             //vs�� �ڵ��ϸ� gets_s(text, sizeof(text));�� �ᵵ ������

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