/*
//예제 1

#include <stdio.h>

int main(void) {
	int i;
	int scores[5]; //길이가 5인 배열 생성(배열의 생성은 0부터 시작)

	scores[0] = 10; //0번째 배열에 10 대입
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;

	for (i = 0; i < 5; i++) { //0부터 4까지 총 5번 반복
		printf("scores[%d} = %=d\n", i, scores[i]); //i번째 배열 요소 출력
	}

	return 0;

}


// 예제 2

#include <stdio.h>
#define SIZE 26

int main(void) {
	int i;
	char codes[SIZE]; //SIZE(26)크기의 배열 생성

	for (i = 0; i < SIZE; i++) // 0부터 25까지 총 26번 반복문 실행
		codes[i] = 'a' + i; //아스키코드에 의해 알파벳 a에 1을 더하면 b가 된다.

	for (i = 0; i < SIZE; i++) // 0부터 25까지 총 26번 반복문 실행
		printf("%C", codes[i]); // i번쨰 배열 요소 출력 %c(문자)

	printf("\n"); //줄 바꿈

	return 0;

}

//예제 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5

int main(void) {
	int scores[STUDENTS]; // 길이 5의 배열 생성
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) { //0부터 4까지 총 5번 반복
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &scores[i]); //i번째 배열에 정수형 요소 대입
	}
	for (i = 0; i < STUDENTS; i++) { //0부터 4까지 총 5번 반복
		sum += scores[i]; // sum = sum + scores[i]
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

	for (i = 0; i < 5; i++) { //0부터 4까지 총 5번 반복
		printf("scores[%d] = %d\n", i, scores[i]); //i번째 배열 요소 출력
	}
	return 0;
}


// 버블 정렬

#include <stdio.h>
#define SIZE 5

int main(void) {
	int i, k;
	int list[SIZE] = {16, 7, 9, 1, 3 };

	for (k = 0; k < SIZE -1; k++) { //0부터 3(SIZE-1)까지 총 4번 반복
		for (i = 0; i < SIZE; i++) { //0부터 4까지 총 5번 반복
			if (list[i] > list[i + 1]) { // i번째 배열 요소가 i+1번째 배열보다 크다면
				int tmp = list[i]; //i번째 요소를 tmp변수에 대입
				list[i] = list[i + 1];// i번째 요소에 i+1요소 대입
				list[i + 1] = tmp; // i+1번째 요소에 tmp 변수 저장값 대입
			}
		}
	}

	for (i = 0; i < SIZE; i++) { //0부터 4까지 총 5번 반복
		printf("%d", list[i]); //i번째 배열 요소 출력
	}

	return 0;
}


//다차원 배열 1

#include <stdio.h>

int main(void) {
	int i, j;
	int a[3][5] = {{0,1,2,3,4}, {0,1,2,3,4}, {0,1,2,3,4}}; 3*5사이즈의 다차원배열(행렬) 생성

	for (i = 0; i < 3; i++) { //0부터 2까지 총 3번 반복
		for (j = 0; j < 5; j++) { //0부터 4까지 총 5번 반복
			printf("a[%d][%d] = %d ", i, j, a[i][j]); //a[i][j] 요소 출력
		}
		printf("\n"); //줄 바꿈
	}
	return 0;
}
*/


