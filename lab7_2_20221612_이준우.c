
// lab 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 16

int main(void) {
	int att_book[SIZE] = { 0 }; //길이 16의 배열 생성 및 0으로 초기화
	int i, count = 0;

	for (i = 0; i < SIZE; i++) { //0부터 15까지 총 16번 반복
		printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0): ", i + 1);
		scanf("%d", &att_book[i]); // 정수형 자료 i번째 배열에 대입
	}
	for (i = 0; i < SIZE; i++) { //0부터 15까지 총 16번 반복
		if (att_book[i] == 0) // i번째 배열 요소가 0 이면
			count++; // count = count + 1
	}
	double ratio = count / 16.0; 

	if (ratio>0.3) // ratio가 0.3이상이면
		printf("수업 일수 부족입니다(%f%%).\n", ratio * 100.0); //퍼센트 비율로 출력

	return 0;
}


// lab 2

#include <stdio.h>
#define SIZE 10

int main(void) {
	int prices[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 }; //길이 10의 배열 생성
	int i, minimum;

	printf("[");

	for (i = 0; i < SIZE; i++) { // 0부터 9까지 총 10번 반복
		printf("%d ", prices[i]); // i번째 배열 요소 출력
	}
	printf("]\n");

	minimum = prices[0]; // minimum변수에 첫번째 배열 요소 대입 
	for (i = 1; i < SIZE; i++) { // 1부터 9까지 총 9번 반복
		if (prices[i] < minimum) { //minimum변수에 대입된 값보다 i번째 배열 요소가 작다면
			minimum = prices[i]; // minimum변수에 i번째 배열 요소 대입
		}
	}
	printf("최소값은 %d입니다\n", minimum); // minimun변수에 저장된 정수형 값(%d) 출력
	return 0;
}


//lab 3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void) {

	int key, i;

	int list[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }; // 길이 10의 배열 생성

	printf("[");
	for (i = 0; i < SIZE; i++) { // 0부터 9까지 총 10번 반복 
		printf("%d ", list[i]); // i번째 배열 요소 출력
	}
	printf("]\n");

	printf("탐색할 값을 입력하시오: ");
	scanf("%d", &key); //정수형 데이터를 key변수에 대입

	for (i = 0; i < SIZE; i++) { //0부터 9까지 총 10번 반복 
		if (list[i] == key) { // i번째 배열 요소가 key변수에 저장된 값과 동일하다면
			printf("탐색 성공 인덱스 = %d\n", i); //인덱스 번호 
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

	for (int k = 0; k < SIZE; k++) { //0부터 9까지 총 10번 반복 
		system("cls"); //콘솔창에 있는 걸 지우는 함수
		for (int i = 0; i < SIZE - 1; i++) { //버블 정렬(오름차순) lab7참조
			if (list[i] > list[i + 1]) {
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
		for (int i = 0; i < SIZE; i++) { //0부터 9까지 총 10번 반복
			for (int m = 0; m < list[i] / 10; m++) //0부터 i번째 리스트 요소/10만큼 반복
				printf("*"); //list 요소가 10이면 1개, 25면 2개
			printf("\n");
		}
		_getch(); //_getch()함수의 경우 입력시 버퍼 사용하지 않기 때문에 키보드의 키를 누름과 동시에 값 입력 
		          //따라서 특수키(enter, space) 입력가능, 주의사항 하나의 키만 임력 받음
	}
	return 0;
}

//행렬의 덧셈
#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(void) {
	int r, c;

	int A[ROWS][COLS] = { {1,0,0}, {0,1,0}, {0,0,1} }; // 3*3사이즈의 다차원 배열 생성(행렬)
	int B[ROWS][COLS] = { {1,0,0}, {0,1,0}, {0,0,1} };
	int C[ROWS][COLS];

	for (r = 0; r < ROWS; r++) { //0부터 2까지 총 3번 반복
		for (c = 0; c < COLS; c++) { //0부터 2까지 총 3번 반복
			C[r][c] = A[r][c] + B[r][c]; //행렬의 덧셈 참조
			printf("%d", C[r][c]);
		}
		printf("\n");
	}

	return 0;
}


//tic tac toc 게임 미니프로젝트
#include <stdio.h>

int main(void)
{
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y] = ' ';

	for (k = 0; k < 9; k++) {
		printf("(x,y) 좌표:");
		scanf_s("%d%d", &x, &y);

		if (board[x][y] == 'X' || board[x][y] == 'O')
		{
			printf("이미 놓은 자리입니다!\n");
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
