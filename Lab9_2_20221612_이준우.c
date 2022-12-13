/*
//lab swap�Լ� �ۼ��ϱ� �ǽ����� �̹� ����
#include<stdio.h>

void swap(int* px, int* py) {
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main(void) {
	int a = 100, b = 200;
	printf("swap() ȣ�� �� a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("swap() ȣ�� �� a = %d, b = %d\n", a, b);

	return 0;
}


//lab2 ������ �迭 �Լ� �ۼ�

#include <stdio.h>
#define SIZE 5
double get_array_avg(int value[], int n);
void print_array(int value[], int n);

int main(void) {
	int i;
	int data[SIZE] = { 10,20,30,40,50 };
	double result;

	print_array(data, SIZE);
	result = get_array_avg(data, SIZE);
	printf("�迭 ���ҵ��� ��� = %f\n", result);

	return 0;
}

double get_array_avg(int value[], int n) {
	int i;
	double sum = 0.0;

	printf("get_array_avg() ȣ��\n");

	for (i = 0; i < n; i++) {
		sum += value[i];
	}
	return sum / n;
}

void print_array(int value[], int n) {
	int i;
	printf("[");
	for (i = 0; i < n; i++) {
		printf("%d ", value[i]);
	}
	printf("]\n");
}

*/


//mini project �ܺ� ī�� ����

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int arr[10][10];
int p1 = 1, p2 = 1; //player ���� ��ǥ
int x1 = 4, y1 = 4, x2 = 5, y2 = 5; //monster ���� ��ǥ
int g1 = 9, g2 = 9; //gold ���� ��ǥ


void init() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = 0;
		}
	}
	arr[p1][p2] = 1; //player 
	arr[g1][g2] = 100; //gold
	arr[x1][y1] = 2;
	arr[x2][y2] = 2;
}


void print() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == 1) 
				printf("#");
			else if (arr[i][j] == 2) 
				printf("M");
			else if (arr[i][j] == 100) 
				printf("G");
			else 
				printf(".");
		}
		printf("\n");
	}
}


void moveMon() {
	for (;;) {
		x1 = rand() % 9; 
		y1 = rand() % 9;
		x2 = rand() % 9; 
		y2 = rand() % 9;
		if (x1 != p1 && x2 != p1 && y1 != p2 && y2 != p2 && x1 != x2 && y1 != y2) 
			break;
	}
}


int main() {
	char ch;
	int r1, r2; //monster randnum

	init();

	print();


	while (1) {
		if (p1 == g1 && p2 == g2) 
			break;
		ch = _getch();
		switch (ch) {
		case 'w':
			if (p1 == 0 || p1 == x1 || p1 == x2) 
				break;
			arr[p1][p2] = 0;
			p1--;
			break;
		case 's':
			if (p1 == 9 || p1 == x1 || p1 == x2) 
				break;
			arr[p1][p2] = 0;
			p1++;
			break;
		case 'a':
			if (p2 == 0 || p2 == y1 || p2 == y2) 
				break;
			arr[p1][p2] = 0;
			p2--;
			break;
		case 'd':
			if (p2 == 9 || p2 == y1 || p2 == y2) 
				break;
			arr[p1][p2] = 0;
			p2++;
			break;
		}
		arr[p1][p2] = 1;
		arr[x1][y1] = 0;
		arr[x2][y2] = 0;

		moveMon();

		arr[x1][y1] = 2;
		arr[x2][y2] = 2;

		system("cls");

		print();

	}

}
