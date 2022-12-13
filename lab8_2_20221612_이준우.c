/*

//lab 온도변환 함수

#include <stdio.h>
double FtoC(double temp_f);

int main(void) {
	double c,f;
	f = 32.0;
	c = FtoC(f); //temp_c반환

	printf("화씨온도 %lf은 섭씨온도 %lf에 해당한다.\n", f, c);

	return 0;
}

double FtoC(double temp_f) {
	double temp_c;
	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;

	return temp_c;
}


//lab 소수검사 함수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_prime(int n);

int main(void) {
	int k;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &k);

	if (check_prime(k) == 1) {
		printf("소수입니다.\n");
	}
	else {
		printf("소수가 아닙니다.\n");
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


//lab 소수의 합 찾기

#include <stdio.h>
int check_prime(int n);

int main(void) {
	int n, flag = 0;
	printf("양의 정수를 입력하시오: ");
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
		printf("%d은 소수들의 합으로 표시될 수 없습니다.\n", n);
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


//lab 피보나치 수열
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


//lab 로또 번호 생성
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


//lab 테일러 급수

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

	printf("x와 n의 값을 입력하시오: ");
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
	printf("*********** Welcome to 콘서트 ATM ***********\n");
	printf("**** 하나를 선택하세요 ****\n");
	printf("<1> 잔고 확인\n<2> 입금\n<3> 출금\n<4> 종료\n");
}

void show() {
	printf("\n잔고는 %d입니다.\n", bal);
	printf("\n");
}

void showRes()
{
	printf("\n새로운 잔고는 %d입니다.\n", bal);
	printf("\n");
}

void input()
{
	int money;
	printf("****입금 금액을 입력하시오\n");
	scanf_s("%d", &money);
	bal += money;
	showRes();
}

void output()
{
	int money;
	printf("****출금 금액을 입력하시오\n");
	scanf_s("%d", &money);
	bal = money;
	showRes();
}

void out()
{
	printf("이용해주셔서 감사합니다.\n");
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