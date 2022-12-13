/*
//programming 1
#include <stdio.h>

int main(void) {
	int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < 12; i++) {
		printf("%d���� %d�ϱ��� �ֽ��ϴ�.\n", i + 1, days[i]);
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

	printf("�Է��� ������ ����: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d��° ��Ҹ� �Է��Ͻÿ�: ", i);
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

	printf("�Է��� ������ ����: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d��° ��Ҹ� �Է��Ͻÿ�: ", i);
		scanf_s("%d", &a[i]);

		sum += a[i];
	}

	printf("�� = %d", sum);

	return 0;
}


//programming 4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int max,min;
	int a[5];
	
	for (int i = 0; i < 5; i++) {
		printf("������ �Է��Ͻÿ�: ");
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
	printf("�ִ밪=%d �ּҰ�=%d", max, min);

	return 0;
}


//programming 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a[3][5];

	for (int i = 0; i < 3; i++) {
		printf("�й� �׸��� �� 3���� ���������� �Է��Ͻÿ�:");
		scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
	}
	for (int j = 0; j < 3; j++) {
		a[j][4] = (a[j][1] + a[j][2] + a[j][3]) / 3;
		printf("�й�: %d�� ���: %d��\n", a[j][0], a[j][4]);
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
	printf("�˰���� �������� �Է��Ͻÿ�(��: 9 3): ");

	scanf_s("%d %d", &x, &y);

	if (x < 10 && y <10) {
		printf("%d*%d=%d", x, y, a[x][y]);

		return 0;
	}
	printf("1�� 9������ ���� �Է����ּ���");

	return 0;

}

//programming 7_1 visual studio�� ��� C99ǥ���� ��Ű�� ���� ������,
//�̿� ���� �迭 ũ�⿡ ������ ���� �� ����(����� ����)...
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int R, C;
	int r, c, d;
	int sum;

	printf("�� ����= ");
	scanf("%d", &R);

	printf("�� ����= ");
	scanf("%d", &C);

	int a[R][C];
	int b[R][C];
	int s[R][C];

	printf("ù��° ��� �Է�= \n");
	for (r = 0; r < R; r++) {
		for (c = 0; c < C; c++) {
			scanf("%d", &a[R][C]);
		}
	}
	printf("�ι�° ��� �Է�= \n");
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
	printf("\n ������� ���� ���\n");
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

	printf("�� ����=3\n�� ����=3\n");

	printf("ù ��° ��� �Է�=\n");
	scanf_s("%d %d %d\n%d %d %d\n%d %d %d", &a[0][0], &a[0][1], &a[0][2], &a[1][0], &a[1][1], &a[1][2], &a[2][0], &a[2][1], &a[2][2]);
	printf("�� ��° ��� �Է�=\n");
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

	printf("�� ����=3\n�� ����=3\n");

	printf("��� �Է�=\n");
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

	printf("���� ���� ������ ��=%d", n);

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
	printf("�ֻ�����              �� \n");
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

	printf("�Է��� ������ ����(100�� �̳���):");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d��° ��Ҹ� �Է��Ͻÿ�:", i);
		scanf_s("%d", &num);
		a[num] += 1;
	}
	for (int j = 0; j < 100; j++) {
		if (a[j] > 0)
			printf("%d ���� %d�� ����\n", j, a[j]);
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

	printf("�Է��� ������ ����(100�� �̳���):");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		printf("%d��° ��Ҹ� �Է��Ͻÿ�:", i);
		scanf_s("%d", &a[i]);
	}

	printf("\n������ ��ġ: ");
	scanf_s("%d", &del);

	for (int j = del; j < num + 1; j++){
		a[j] = a[(j + 1)];
	}
	printf("���ο� �迭: ");

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
		printf("�¼��� �����Ͻðڽ��ϱ�?(y�Ǵ� n): ");
		scanf_s("%c", &rep);
		getchar();

		if (rep == 'y' || rep == 'Y') {
			printf("���° �¼��� �����Ͻðڽ��ϱ�? ");
			scanf_s("%d", &num);
			getchar();

			if (a[num] == 1)
				printf("�̹� ����� �¼��Դϴ�.\n\n");
			else {
				a[num] = 1;
				printf("����Ǿ����ϴ�.\n");
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
			printf("������ ����մϴ�.\n");
			break;
		}
		else
			printf("�߸��� �Է��Դϴ�.\n");
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
		printf("�Ǽ��� �Է��Ͻÿ�: ");
		scanf_s("%lf", &a[i]);
	}

	sum = 0;
	std_sum = 0;

	for (int j = 0; j < 5; j++) {
		sum += a[j];
	}
	avg = sum / 5;
	printf("���:%lf\n", avg);

	for (int k = 0; k < 5; k++) {
		std_sum += (a[k] - avg) * (a[k] - avg);
	}
	std_dev = sqrt(std_sum / 5);
	printf("ǥ������:%lf\n", std_dev);

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

	printf("���������� �ָ� ���ư����Ƚ��ϴ�.");

	return 0;
}