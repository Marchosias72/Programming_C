/*

//lab �µ���ȯ �Լ�

#include <stdio.h>
double FtoC(double temp_f);

int main(void) {
	double c,f;
	f = 32.0;
	c = FtoC(f); //temp_c��ȯ

	printf("ȭ���µ� %lf�� �����µ� %lf�� �ش��Ѵ�.\n", f, c);

	return 0;
}

double FtoC(double temp_f) {
	double temp_c;
	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;

	return temp_c;
}


//lab �Ҽ��˻� �Լ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_prime(int n);

int main(void) {
	int k;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &k);

	if (check_prime(k) == 1) {
		printf("�Ҽ��Դϴ�.\n");
	}
	else {
		printf("�Ҽ��� �ƴմϴ�.\n");
	}
	return 0;
}

int check_prime(int n) {
	int is_prime = 1;
	for (int i = 2; i < n; ++i) {
		if (n % i == 0) {
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}


//lab �Ҽ��� �� ã��

#include <stdio.h>
int check_prime(int n);

int main(void) {
	int n, flag = 0;
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (int i = 2; i < n; i++) {
		if (check_prime(i) == 1) {
			if (check_prime(n - i) == 1) {
				printf("%d = %d + %d\n", n, i, n - i);
				flag = 1;
			}
		}
	}
	if (flag == 0) {
		printf("%d�� �Ҽ����� ������ ǥ�õ� �� �����ϴ�.\n", n);
	}
	return 0;
}

int check_prime(int n) {
	int is_prime = 1;
	for (int i = 2; i < n; ++i) {
		if (n % i == 0) {
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}\


//lab �Ǻ���ġ ����
#include <stdio.h>

int fibbonacci(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return(fibbonacci(n - 1) + fibbonacci(n - 2));
	}
}

int main(void) {
	for (int i = 1; i < 10; i++) {
		printf("%d ", fibbonacci(i));
	}
}


//lab �ζ� ��ȣ ����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main(void) {
	int i, k, lotto[6] = { 0 };
	int dup_check[MAX + 1] = { 0 };

	srand(time(NULL));
	for (i = 0; i < 6; i++) {
		k = 1 + (rand() & MAX);
		while (dup_check[k] == 1) {
			k = 1 + (rand() % MAX);
		}
		lotto[i] = k;
		dup_check[k] = 1;
		printf("%d ", lotto[i]);
	}
	return 0;
}


//lab ���Ϸ� �޼�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double power(int x, int y) {
	double result = 1.0;
	for (int i = 0; i < y; i++) {
		result *= x;
	}
	return result;
}

double factorial(int n) {
	double result = 1.0;
	if (n <= 1) {
		return 1;
	}
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main(void) {
	double sum = 0.0;
	int x, n;

	printf("x�� n�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &n);

	for (int i = 0; i <= n; i++) {
		sum += power(x, i) / factorial(i);
	}

	printf("e^%d = %.3lf\n", x, sum);
	return 0;
}

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bal = 10000;

void showMenu()
{
	printf("*********** Welcome to �ܼ�Ʈ ATM ***********\n");
	printf("**** �ϳ��� �����ϼ��� ****\n");
	printf("<1> �ܰ� Ȯ��\n<2> �Ա�\n<3> ���\n<4> ����\n");
}

void show() {
	printf("\n�ܰ�� %d�Դϴ�.\n", bal);
	printf("\n");
}

void showRes()
{
	printf("\n���ο� �ܰ�� %d�Դϴ�.\n", bal);
	printf("\n");
}

void input()
{
	int money;
	printf("****�Ա� �ݾ��� �Է��Ͻÿ�\n");
	scanf_s("%d", &money);
	bal += money;
	showRes();
}

void output()
{
	int money;
	printf("****��� �ݾ��� �Է��Ͻÿ�\n");
	scanf_s("%d", &money);
	bal = money;
	showRes();
}

void out()
{
	printf("�̿����ּż� �����մϴ�.\n");
}

int main()
{
	int select;
	while (1)
	{
		showMenu();
		scanf_s("%d", &select);
		if (select == 1) {
			show();
		}
		else if (select == 2) {
			input();
		}
		else if (select == 3) {
			output();
		}
		else if (select == 4) {
			out();
			break;
		}

	}
	return 0;
}