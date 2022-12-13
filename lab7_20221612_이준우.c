/*
//예제 1

#include <stdio.h>

int main(void) {
	int i;
	int scores[5];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;

	for (i = 0; i < 5; i++) {
		printf("scores[%d} = %=d\n", i, scores[i]);
	}

	return 0;

}


// 예제 2

#include <stdio.h>
#define SIZE 26

int main(void) {
	int i;
	char codes[SIZE];

	for (i = 0; i < SIZE; i++)
		codes[i] = 'a' + i; //아스키코드에 의해 알파벳 a에 1을 더하면 b가 된다.

	for (i = 0; i < SIZE; i++)
		printf("%C", codes[i]);

	printf("\n");

	return 0;

}

//예제 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5

int main(void) {
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) {
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &scores[i]);
	}
	for (i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	average = sum / STUDENTS;
	printf("성적 평균 = %d\n", average);

	return 0;
}

// 예제 4
#include <stdio.h>

int main(void) {
	int scores[5] = { 31,63,62,87,14 };
	int i;

	for (i = 0; i < 5; i++) {
		printf("scores[%d] = %d\n", i, scores[i]);
	}
	return 0;
}


// 버블 정렬

#include <stdio.h>
#define SIZE 5

int main(void) {
	int i, k;
	int list[SIZE] = {16, 7, 9, 1, 3 };

	for (k = 0; k < SIZE -1; k++) {
		for (i = 0; i < SIZE; i++) {
			if (list[i] > list[i + 1]) {
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d", list[i]);
	}

	return 0;
}


//다차원 배열 1

#include <stdio.h>

int main(void) {
	int i, j;
	int a[3][5] = {{0,1,2,3,4}, {0,1,2,3,4}, {0,1,2,3,4}};

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("a[%d][%d] = %d ", i, j, a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/


