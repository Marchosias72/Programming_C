/*
//programming 1

#include<stdio.h>

int get_array_sum(int* A, int size);

int main(void) {
	int data[10] = { 1,2,3,4,5,6,7,8,9 };
	printf("print_array()\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	printf("\n�迭 ����� �� = %d", get_array_sum(data, 10));
	return 0;
}

int get_array_sum(int* A, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}


//programming 2

#include<stdio.h>

int main(void) {
	int arr[5];
	int* p = arr;
	printf("5���� ������ �Է��Ͻÿ�: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("����:");

	for (int i = 4; i >= 0; i--) {
		printf("%d ", p[i]);
	}
	return 0;
}


//programming 3

#include<stdio.h>
#include<math.h>

void quadratic(int a, int b, int c, double* xpuls, double* xminus) {
	*xminus = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	*xpuls = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

int main(void) {
	int arr[3];
	for (int i = 0; i < 3; i++) {
		printf("%d��° ����� �Է��Ͻÿ�:", i+1);
		scanf_s("%d", &arr[i]);
	}
	double xminus, xplus;

	quadratic(arr[0], arr[1], arr[2], &xplus, &xminus);

	printf("ù��° �Ǳ�: %lf\n", xplus);
	printf("�ι�° �Ǳ�: %lf\n", xminus);

	return 0;
}


//programming 4

#include <stdio.h>

void get(double value, int* i_part, double* f_part) {
	printf("���޹��� �Ǽ�=%lf\n", value);

	*i_part = (int)value;
	*f_part = value - *i_part;
}

int main(void) {
	double f;
	int i;

	get(3.14, &i, &f);

	printf("������=%d\n", i);
	printf("�Ҽ���=%f", f);

	return 0;
}


//programming 5

#include <stdio.h>
#define HEIGHT 10
#define WIDTH 10

void brighten_image(char* p, int w, int h) {
	for (int i = 0; i < w * h; i++) {
		p[i]--;
		if (p[i] < 0)
			p[i]++;
	}
}

int main(void) {
	char image[HEIGHT * WIDTH] = {
	0,0,0,0,9,0,0,0,0,0,
	0,0,0,9,9,0,0,0,0,0,
	0,0,9,0,9,0,0,0,0,0,
	0,0,0,0,8,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,0,0,7,0,0,0,0,0,
	0,0,0,0,8,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,6,6,9,7,7,0,0,0 };
	char* p = image;
	int count = 0;

	brighten_image(p, WIDTH, HEIGHT);

	return 0;
}
*/

//programming 6 ���ͳ� ����

#include <stdio.h>
#include <windows.h>
#define HEIGHT 10
#define WIDTH 10

void brighten_image(char* p, int w, int h) {
	for (int i = 0; i < w * h; i++) {
		p[i]--;
		if (p[i] < 0)
			p[i]++;
	}
}
void darken_image(char* p, int n) {
	for (int i = 0; i < n; i++) {
		p[i]++;
		if (p[i] > 9)
			p[i]--;
	}
}
void print_image(char* p, int w, int h) {
	int count = 0;

	for (int i = 0; i < w * h; i++) {
		printf("%d ", p[i]);
		count++;
		if (count == 10) {
			printf("\n");
			count = 0;
		}
	}
}

int main(void) {
	char image[HEIGHT * WIDTH] = {
	0,0,0,0,9,0,0,0,0,0,
	0,0,0,9,9,0,0,0,0,0,
	0,0,9,0,9,0,0,0,0,0,
	0,0,0,0,8,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,0,0,7,0,0,0,0,0,
	0,0,0,0,8,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,6,6,9,7,7,0,0,0 };
	char* p = image;
	int select = 0;

	while (1) {
		printf("ȭ���� �������ּ���(���=1, ��Ӱ�=2, ����=3): ");
		scanf_s("%d", &select);

		if (select == 1) {
			darken_image(p, HEIGHT * WIDTH);
			system("cls");
			print_image(p, WIDTH, HEIGHT);
			printf("��Ⱑ �����߽��ϴ�.\n\n");
		}
		else if (select == 2) {
			brighten_image(p, WIDTH, HEIGHT);
			system("cls");
			print_image(p, WIDTH, HEIGHT);
			printf("��Ⱑ �����߽��ϴ�.\n\n");
		}
		else if (select == 3)
			break;
		else {
			system("cls");
			printf("�߸��� �Է��Դϴ�.\n");
		}
	}

	printf("���α׷��� �����մϴ�.");

	return 0;
}