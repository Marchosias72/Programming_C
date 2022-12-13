/*
//Programming 1

#include <stdio.h>

double func(float x, float y) {
	double sum;
	sum = 1.5 * x + 3.0 * y;

	return sum;
}

int main(void) {
	float x = 1.0, y = 2.0;
	printf("x=%f, y=%f,f(x,y)=%lf\n", x, y, func(x, y));

	x = 2.0;
	y = 0.0;
	printf("x=%f, y=%f,f(x,y)=%lf\n", x, y, func(x, y));

	x = 2.0;
	y = 1.0;
	printf("x=%f, y=%f,f(x,y)=%lf\n", x, y, func(x, y));

	return 0;
}


//Programmer 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_bigger(float x, float y) {
	double max = x;
	if (x < y) {
		max = y;
	}

	return max;
}

int main(void) {
	float x, y;

	printf("실수를 입력하시오: ");
	scanf_s("%f", &x);
	printf("실수를 입력하시오: ");
	scanf_s("%f", &y);

	printf("더 큰수는 %lf입니다.", get_bigger(x, y));

	return 0;
}


//Programmer 3

#include <stdio.h>

int drawing(void) {
	printf("*****************\n");
	
	return 0;
}

int main(void) {
	drawing();
	printf("Hello World!\n");
	drawing();

	return 0;
}


//Programmer 4

#include <stdio.h>

int get_devisior(int x) {
	printf("%d의 약수:", x);
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main(void) {
	get_devisior(8);
	
	return 0;
}


//Programmer 5

#include <stdio.h>

int check_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(void) {
	for (int i = 2; i <= 100; i++) {
		if (check_prime(i) == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}


//Programmer 6

#include <stdio.h>

long power(int x, int y) {
	long result = 1;

	for (int i = 0; i < y; i++) {
		result *= x;
	}
	return result;
}

int main(void) {
	for (int i = 0; i <= 10; i++) {
		printf("%d ", power(3, i));
	}

	return 0;
}


//Programmer 7

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double dist_2d(float x1, float y1, float x2, float y2) {
	double result;

	result = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
	return result;
}

int main(void) {
	float x1, x2, y1, y2;

	printf("첫번째 점의 좌표를 입력하시오:(x.y) ");
	scanf_s("%f%f", &x1, &y1);
	printf("두번째 점의 좌표를 입력하시오:(x, y) ");
	scanf_s("%f%f", &x2, &y2);

	printf("두점 사이의 거리는 %lf입니다.", dist_2d(x1, y1, x2, y2));

	return 0;
}

//Programmer 7

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double quad_eqn(double a, double b, double c) {
	double result1, result2;
	double d;

	d = b * b - (4 * a * c);

	if (d < 0) {
		printf("근이 존재하지 않습니다.\n");
		return 0;
	}
	else {
		result1 = (-b + sqrt(b * b - (4 * a * c))) / (2 * a);
		result2 = (-b - sqrt(b * b - (4 * a * c))) / (2 * a);
		printf("첫 번째 근 = %lf\n", result1);
		printf("두 번째 근 = %lf", result2);
	}
}

int main(void) {
	double a, b, c;

	printf("2차 방정식의 계수를 입력하시오:\n");
	printf("a: ");
	scanf_s("%lf", &a);
	printf("b: ");
	scanf_s("%lf", &b);
	printf("c: ");
	scanf_s("%lf", &c);

	quad_eqn(a, b, c);

	return 0;
}


//Programmer 9

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Monte_Carlo() {
	int coin = (int)rand() % 2;
	return coin;
}

int main(void) {
	int num, usernum;
	srand(time(NULL));

	while (1) {
		num = Monte_Carlo();

		printf("앞(0) 또는 뒤(1)를 선택하시오(종료는 -1):");
		scanf("%d", &usernum);

		if (usernum == -1){
			break;
		}
		else if (usernum > 1 || usernum < -1) {
			printf("잘못 입력했습니다.\n");
			break;
		}
		else if (num == usernum) {
			printf("사용자가 이겼습니다.\n");
			break;
		}
		else if (num != usernum) {
			printf("컴퓨터가 이겼습니다.\n");
			break;
		}
	}

	return 0;
}


//Programmer 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice() {
	srand(time(NULL));
	return (rand() % 6) + 1;
}

int main(void) {
	int human, computer;
	int first, second, third;

	first = dice();
	second = dice();
	third = dice();

	while (1) {
		if (first == second) {
			second = dice();
		}
		else if (first == third) {
			third = dice();
		}
		else if (second == third) {
			third = dice();
		}
		else {
			break;
		}
	}

	printf("사용자 주사위=(%d,%d,%d)=", first, second, third);
	human = first + second + third;
	printf("%d\n", human);

	first = dice();
	second = dice();
	third = dice();

	while (1) {
		if (first == second) {
			second = dice();
		}
		else if (first == third) {
			third = dice();
		}
		else if (second == third) {
			third = dice();
		}
		else {
			break;
		}
	}

	printf("컴퓨터 주사위=(%d,%d,%d)=", first, second, third);
	computer = first + second + third;
	printf("%d\n", computer);

	if (human > computer) {
		printf("사용자 승리");
	}
	else if (human == computer) {
		printf("비겼습니다");
	}
	else {
		printf("컴퓨터 승리");
	}

	return 0;
}


//Programming 11
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int x, y;
char a;

void calculate(int x, char a, int y) {
	int result = 0;
	static int plus = 0, minus = 0, multiple = 0, division = 0;

	if (a == '+') {
		result = x + y;
		plus++;
		printf("덧셈은 총 %d번 호출되었습니다\n", plus);
	}
	else if (a == '-') {
		result = x - y;
		minus++;
		printf("뺄셈은 총 %d번 호출되었습니다\n", minus);
	}
	else if (a == '*') {
		result = x * y;
		multiple++;
		printf("곱셈은 총 %d번 호출되었습니다\n", multiple);
	}
	else if (a == '/') {
		result = x / y;
		division++;
		printf("나눗셈은 총 %d번 호출되었습니다\n", division);
	}

	printf("연산 결과:%d\n", result);
}

int main(void)
{
	while (1) {
		printf("연산을 입력하시오(종료는 Ctrl-Z):");
		scanf("%d %c %d", &x, &a, &y);

		if (x == EOF || a == NULL || y == EOF)

		calculate(x, a, y);
	}

	return 0;
}

//programming 11_b

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int x, y;
char a;

int plus = 0;
int minus = 0;
int multiple = 0;
int division = 0;

void calculate(int x, char a, int y) {
	int result = 0;

	if (a == '+') {
		result = x + y;
		plus++;
		printf("덧셈은 총 %d번 호출되었습니다\n", plus);
	}
	else if (a == '-') {
		result = x - y;
		minus++;
		printf("뺄셈은 총 %d번 호출되었습니다\n", minus);
	}
	else if (a == '*') {
		result = x * y;
		multiple++;
		printf("곱셈은 총 %d번 호출되었습니다\n", multiple);
	}
	else if (a == '/') {
		result = x / y;
		division++;
		printf("나눗셈은 총 %d번 호출되었습니다\n", division);
	}

	printf("연산 결과:%d\n", result);
}

int main(void)
{
	while (1) {
		printf("연산을 입력하시오(종료는 Ctrl-Z):");
		scanf("%d %c %d", &x, &a, &y);

		if (x == EOF || a == NULL || y == EOF)
			break;

		calculate(x, a, y);
	}

	return 0;
}


//Programming 12
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int amount, total = 0;

void draw(int amount) {
	total += amount;
}

void save(int amount) {
	if (amount > 0) {
		total += amount;
	}
	else if (amount < 0) {
		draw(amount);
	}
	printf("지금까지 저축액은 %d입니다.\n", total);
}

int main(void) {
	while (1) {
		printf("얼마를 저축하겠습니까?(종료는 -1): ");
		scanf_s("%d", &amount);

		if (amount == -1) {
			break;
		}
		else {
			save(amount);
		}
	}
	printf("종료합니다.");

	return 0;
}

//Programming 12_a

#include <stdio.h>

int save(int amount);
int save_total = 0;

int main(void) {
	int res, amount;

	while (1) {
		printf("얼마를 저축하시겠습니까?(종료는 -1): ");
		scanf_s("%d", &amount);

		if (amount == -1) {
			printf("종료\n");
			break;
		}

		res = save(amount);

		printf("지금까지의 저축액은 %d입니다.\n", res);
	}

	return 0;
}

int save(int amount) {
	save_total += amount;

	return save_total;
}

//Programming 12_b

#include <stdio.h>

int save(int amount);

int main(void) {
	int res, amount;

	while (1) {
		printf("얼마를 저축하시겠습니까?(종료는 -1): ");
		scanf_s("%d", &amount);

		if (amount == -1) {
			printf("종료\n");
			break;
		}

		res = save(amount);

		printf("지금까지의 저축액은 %d입니다.\n", res);
	}

	return 0;
}

int save(int amount) {
	static int save_total = 0;

	save_total += amount;

	return save_total;
}

//Progrmming 12_c

#include <stdio.h>

int save(int amount);
int draw(int amount);
int save_total = 0;

int main(void) {
	int res, amount;

	while (1) {
		printf("얼마를 저축하시겠습니까?(종료는 -1): ");
		scanf_s("%d", &amount);

		if (amount == -1) {
			printf("종료\n");
			break;
		}

		res = save(amount);

		printf("지금까지의 저축액은 %d입니다.\n", res);

		printf("얼마를 인출하시겠습니까?(종료는 -1): ");
		scanf_s("%d", &amount);

		if (amount == -1) {
			printf("종료\n");
			break;
		}

		res = draw(amount);

		printf("지금까지의 저축액은 %d입니다.\n", res);
	}

	return 0;
}

int save(int amount) {
	save_total += amount;

	return save_total;
}

int draw(int amount) {
	save_total -= amount;

	return save_total;
}

//Programming 13
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_digit(int x) {
	if (x < 1) {
		return;
	}
	show_digit(x / 10);
	printf("%d ", x % 10);
}

int main() {
	int x;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);

	if (x == 0) {
		printf("0");
		return 0;
	}
	else if (x < 0) {
		x = -x;
		printf("- ");
		show_digit(x);
	}
	else
		show_digit(x);

	return 0;
}


//Programming 14
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long factorial(int n) {
	long sum = 1;

	if (n == 1)
		return sum;
	sum *= (n * n * n) + factorial(n - 1);


}

int main(void) {
	int x;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);

	printf("%ld\n", factorial(x));

	return 0;
}

#include <stdio.h>

void add(int num1, int num2);
void sub(int num1, int num2);
void mul(int num1, int num2);
void div(int num1, int num2);

int main(void) {

	char op;
	int num1, num2;

	while (1) {
		printf("연산을 입력하시오(종료는 Ctrl-Z):");
		scanf_s("%d%c%d", &num1, &op, &num2);

		if (num1 == EOF || op == NULL || num2 == EOF) {
			break;
		}
		else {
			if (op == '+') {
				add(num1, num2);
			}
			else if (op == '-') {
				sub(num1, num2);
			}
			else if (op == '*') {
				mul(num1, num2);
			}
			else if (op == '/') {
				div(num1, num2);
			}
			else {
				printf("잘못된 수식의 입력입니다.");
			}
		}
	}
}

void add(int num1, int num2) {
	static int add_count = 0;
	add_count++;
	printf("덧셈은 총 %d번 호출되었습니다\n", add_count);
	printf("연산결과: %d+%d=%d\n", num1, num2, num1 + num2);
}

void sub(int num1, int num2) {
	static int sub_count = 0;
	sub_count++;
	printf("뺄셈은 총 %d번 호출되었습니다\n", sub_count);
	printf("연산결과: %d-%d=%d\n", num1, num2, num1 - num2);
}

void mul(int num1, int num2) {
	static int mul_count = 0;
	mul_count++;
	printf("곱셈은 총 %d번 호출되었습니다\n", mul_count);
	printf("연산결과: %d*%d=%d\n", num1, num2, num1 * num2);
}

void div(int num1, int num2) {
	static int div_count = 0;
	div_count++;
	printf("나누셈은 총 %d번 호출되었습니다\n", div_count);
	printf("연산결과: %d*%d=%d\n", num1, num2, num1 / num2);
}
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x, y;
char a;

int plus = 0;
int minus = 0;
int multiple = 0;
int division = 0;

void calculate(int x, char a, int y) {
	int result = 0;

	if (a == '+') {
		result = x + y;
		plus++;
		printf("덧셈은 총 %d번 호출되었습니다\n", plus);
	}
	else if (a == '-') {
		result = x - y;
		minus++;
		printf("뺄셈은 총 %d번 호출되었습니다\n", minus);
	}
	else if (a == '*') {
		result = x * y;
		multiple++;
		printf("곱셈은 총 %d번 호출되었습니다\n", multiple);
	}
	else if (a == '/') {
		result = x / y;
		division++;
		printf("나눗셈은 총 %d번 호출되었습니다\n", division);
	}

	printf("연산 결과:%d\n", result);
}

int main(void)
{
	while (1) {
		printf("연산을 입력하시오(종료는 Ctrl-Z):");
		scanf("%d %c %d", &x, &a, &y);

		if (x == EOF || a == NULL || y == EOF)//인터넷 참조
			break;

		calculate(x, a, y);
	}

	return 0;
}
