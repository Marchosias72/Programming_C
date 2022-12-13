/*
// lab 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 16

int main(void) {
	int att_book[SIZE] = { 0 };
	int i, count = 0;

	for (i = 0; i < SIZE; i++) {
		printf("%d��° ���ǿ� �⼮�ϼ̳���(�⼮�� 1, �Ἦ�� 0): ", i + 1);
		scanf("%d", &att_book[i]);
	}
	for (i = 0; i < SIZE; i++) {
		if (att_book[i] == 0)
			count++;
	}
	double ratio = count / 16.0;

	if (ratio>0.3)
		printf("���� �ϼ� �����Դϴ�(%f%%).\n", ratio * 100.0);

	return 0;
}


// lab 2

#include <stdio.h>
#define SIZE 10

int main(void) {
	int prices[SIZE] = { 12, 3, 19,6, 18, 8, 12, 4, 1, 19 };
	int i, minimum;

	printf("[");

	for (i = 0; i < SIZE; i++) {
		printf("%d ", prices[i]);
	}
	printf("]\n");

	minimum = prices[0];
	for (i = 1; i < SIZE; i++) {
		if (prices[i] < minimum) {
			minimum = prices[i];
		}
	}
	printf("�ּҰ��� %d�Դϴ�\n", minimum);
	return 0;
}


//lab 3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void) {

	int key, i;

	int list[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	printf("[");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
	printf("]\n");

	printf("Ž���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("Ž�� ���� �ε��� = %d\n", i);
			break;
		}
	}

	return 0;
}


#include <Windows.h>
#include <stdio.h>
#define SIZE 10

int main(void) {
	int list[SIZE] = { 100, 30, 20, 78, 89, 12, 56, 38, 99, 66};

	for (int k = 0; k < SIZE; k++) {
		system("cls");
		for (int i = 0; i < SIZE - 1; i++) {
			if (list[i] > list[i + 1]) {
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
		for (int i = 0; i < SIZE; i++) {
			for (int m = 0; m < list[i] / 10; m++)
				printf("*");
			printf("\n");
		}
		_getch();
	}
	return 0;
}


#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(void) {
	int r, c;

	int A[ROWS][COLS] = { {1,0,0}, {0,1,0}, {0,0,1} };
	int B[ROWS][COLS] = { {1,0,0}, {0,1,0}, {0,0,1} };
	int C[ROWS][COLS];

	for (r = 0; r < ROWS; r++) {
		for (c = 0; c < COLS; c++) {
			C[r][c] = A[r][c] + B[r][c];
			printf("%d", C[r][c]);
		}
		printf("\n");
	}

	return 0;
}
*/


#include <stdio.h>

int main(void)
{
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y] = ' ';

	for (k = 0; k < 9; k++) {
		printf("(x,y) ��ǥ:");
		scanf_s("%d%d", &x, &y);

		if (board[x][y] == 'X' || board[x][y] == 'O')
		{
			printf("�̹� ���� �ڸ��Դϴ�!\n");
			continue;
		}

		board[x][y] = (k % 2 == 0) ? 'X' : 'O';

		for (i = 0; i < 3; i++) {
			printf("---l---l---\n");
			printf(" %c l %c l %c \n", board[i][0], board[i][1], board[i][2]);

		}
		printf("---l---l---\n");
	}
	return 0;
}