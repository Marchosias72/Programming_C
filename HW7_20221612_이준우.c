/*
//programming 1
#include <stdio.h>

int main(void) {
	int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < 12; i++) {
		printf("%d월은 %d일까지 있습니다.\n", i + 1, days[i]);
	}

	return 0;
}


//programming 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 100

int main(void) {
	int n;
	int a[num];

	printf("입력할 정수의 개수: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d번째 요소를 입력하시요: ", i);
		scanf("%d", &a[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}

	return 0;
}

//programming 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 100

int main(void) {
	int n;
	int sum = 0;
	int a[num];

	printf("입력할 정수의 개수: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d번째 요소를 입력하시요: ", i);
		scanf_s("%d", &a[i]);

		sum += a[i];
	}

	printf("합 = %d", sum);

	return 0;
}


//programming 4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int max,min;
	int a[5];
	
	for (int i = 0; i < 5; i++) {
		printf("정수를 입력하시오: ");
		scanf_s("%d", &a[i]);
	}
	max = a[0];
	min = a[0];

	for (int j = 1; j < 5; j++) {
		if (max < a[j]) {
			max = a[j];
		}
		if (min > a[j]) {
			min = a[j];
		}
	}
	printf("최대값=%d 최소값=%d", max, min);

	return 0;
}


//programming 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a[3][5];

	for (int i = 0; i < 3; i++) {
		printf("학번 그리고 총 3번의 시험점수를 입력하시오:");
		scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
	}
	for (int j = 0; j < 3; j++) {
		a[j][4] = (a[j][1] + a[j][2] + a[j][3]) / 3;
		printf("학번: %d번 평균: %d점\n", a[j][0], a[j][4]);
	}
	return 0;
}


//programming 6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;
	int a[10][10];

	for (int i = 1; i < 10; i++){
		for (int j = 1; j < 10; j++) {
			a[i][j]=i*j;
		}
		
	}
	printf("알고싶은 구구단을 입력하시오(예: 9 3): ");

	scanf_s("%d %d", &x, &y);

	if (x < 10 && y <10) {
		printf("%d*%d=%d", x, y, a[x][y]);

		return 0;
	}
	printf("1과 9사이의 값을 입력해주세요");

	return 0;

}

//programming 7_1 visual studio의 경우 C99표준을 지키고 있지 않으며,
//이에 따라 배열 크기에 변수를 넣을 수 없음(상수만 가능)...
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int R, C;
	int r, c, d;
	int sum;

	printf("행 개수= ");
	scanf("%d", &R);

	printf("열 개수= ");
	scanf("%d", &C);

	int a[R][C];
	int b[R][C];
	int s[R][C];

	printf("첫번째 행렬 입력= \n");
	for (r = 0; r < R; r++) {
		for (c = 0; c < C; c++) {
			scanf("%d", &a[R][C]);
		}
	}
	printf("두번째 행렬 입력= \n");
	for (r = 0; r < R; r++) {
		for (c = 0; c < C; c++) {
			scanf("%d", &b[R][C]);
		}
	}
	
	for (r = 0; r < R; r++) {
		for (c = 0; c < C; c++) {
			sum = 0;
			for (d = 0; d < R; d++);{
				sum += a[r][c] + b[d][C]; 
			}
			S[r][c] = sum;
		}
	}
	printf("\n 두행렬의 곱의 결과\n");
	for (r = 0; r < R; r++) {
		for (c = 0; c < C; c++) {
			printf("%d", S[r][c]);
		}
		printf("\n");
	}
	return 0;
}


//programming 7_2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[3][3];
	int b[3][3];
	int c[3][3];

	printf("행 개수=3\n열 개수=3\n");

	printf("첫 번째 행렬 입력=\n");
	scanf_s("%d %d %d\n%d %d %d\n%d %d %d", &a[0][0], &a[0][1], &a[0][2], &a[1][0], &a[1][1], &a[1][2], &a[2][0], &a[2][1], &a[2][2]);
	printf("두 번째 행렬 입력=\n");
	scanf_s("%d %d %d\n%d %d %d\n%d %d %d", &b[0][0], &b[0][1], &b[0][2], &b[1][0], &b[1][1], &b[1][2], &b[2][0], &b[2][1], &b[2][2]);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			c[i][j] = (a[i][0] * b[0][i]) + (a[i][1] * b[1][i] + (a[i][2] * b[2][i]));
	}

	printf("\n%d %d %d\n%d %d %d\n%d %d %d", c[0][0], c[0][1], c[0][2], c[1][0], c[1][1], c[1][2], c[2][0], c[2][1], c[2][2]);

	return 0;
}


//programming 8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[3][3];
	int b[3][3];

	printf("행 개수=3\n열 개수=3\n");

	printf("행렬 입력=\n");
	scanf("%d %d %d\n%d %d %d\n%d %d %d", &a[0][0], &a[0][1], &a[0][2], &a[1][0], &a[1][1], &a[1][2], &a[2][0], &a[2][1], &a[2][2]);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			b[i][j] = a[j][i];
	}

	printf("\n%d %d %d\n%d %d %d\n%d %d %d", b[0][0], b[0][1], b[0][2], b[1][0], b[1][1], b[1][2], b[2][0], b[2][1], b[2][2]);

	return 0;
}



//programming 9
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[10] = { 0 };
	int n, m;

	m = a[0];

	for (int i = 0; i < 100; i++) {
		n = rand() % 10;
		a[n] += 1;
	}
	for (int j = 1; j < 10; j++) {
		if (m < a[j]) {
			m = a[j];
			n = j;
		}
	}

	printf("가장 많이 생성된 수=%d", n);

	return 0;
}

//programming 10
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[6] = { 0 };
	int n;

	printf("============================\n");
	printf("주사위면              빈도 \n");
	printf("============================\n");

	for (int i = 0; i < 60000; i++) {
		n = rand() % 6;
		a[n] += 1;
	}

	for (int j = 0; j < 6; j++)
		printf("  %d                   %d\n", j + 1, a[j]);

	return 0;
}


//programming 11
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[100] = { 0 };
	int n, num;

	printf("입력할 정수의 개수(100개 이내로):");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d번째 요소를 입력하시오:", i);
		scanf_s("%d", &num);
		a[num] += 1;
	}
	for (int j = 0; j < 100; j++) {
		if (a[j] > 0)
			printf("%d 값은 %d번 등장\n", j, a[j]);
	}

	return 0;
}


//programming 12
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[100] = { 0 };
	int num, del;

	printf("입력할 정수의 개수(100개 이내로):");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		printf("%d번째 요소를 입력하시오:", i);
		scanf_s("%d", &a[i]);
	}

	printf("\n삭제할 위치: ");
	scanf_s("%d", &del);

	for (int j = del; j < num + 1; j++){
		a[j] = a[(j + 1)];
	}
	printf("새로운 배열: ");

	for (int k = 0; k < num - 1; k++){
		printf("%d ", a[k]);
	}
	return 0;
}


//programming 13
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[11] = { 0 };
	int num = 0;
	char rep;

	while (1) {
		printf("좌석을 예약하시겠습니까?(y또는 n): ");
		scanf_s("%c", &rep);
		getchar();

		if (rep == 'y' || rep == 'Y') {
			printf("몇번째 좌석을 예약하시겠습니까? ");
			scanf_s("%d", &num);
			getchar();

			if (a[num] == 1)
				printf("이미 예약된 좌석입니다.\n\n");
			else {
				a[num] = 1;
				printf("예약되었습니다.\n");
			}

			printf("-----------------------\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("-----------------------\n");
			for (int i = 1; i < 11; i++) {
				printf(" %d", a[i]);
			}
			printf("\n");
		}
		else if (rep == 'n' || rep == 'N') {
			printf("예약을 취소합니다.\n");
			break;
		}
		else
			printf("잘못된 입력입니다.\n");
	}

	return 0;
}

//programming 14
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

	double a[5];
	double sum, avg, std_dev, std_sum;

	for (int i = 0; i < 5; i++) {
		printf("실수를 입력하시오: ");
		scanf_s("%lf", &a[i]);
	}

	sum = 0;
	std_sum = 0;

	for (int j = 0; j < 5; j++) {
		sum += a[j];
	}
	avg = sum / 5;
	printf("평균:%lf\n", avg);

	for (int k = 0; k < 5; k++) {
		std_sum += (a[k] - avg) * (a[k] - avg);
	}
	std_dev = sqrt(std_sum / 5);
	printf("표준편차:%lf\n", std_dev);

	return 0;
}

*/

// programming 15
#include <stdio.h>
#include <stdlib.h>

int main() {

	char tile[10] = { '_' };
	int direction, move;

	srand(time(NULL));
	move = 4;

	while (1) {
		direction = rand() % 2;

		if (direction == 0) {
			move -= 1;
			if (move < 0)
				break;
		}
		else {
			move += 1;
			if (move > 9) {
				printf("_ _ _ _ _ _ _ _ _ _\n");
				break;
			}
		}

		for (int j = 0; j < 10; j++)
			tile[j] = '_';
		tile[move] = '*';

		for (int k = 0; k < 10; k++)
			printf("%c ", tile[k]);
		printf("\n");

		_getch();
	}

	printf("딱정벌레가 멀리 날아가버렸습니다.");

	return 0;
}