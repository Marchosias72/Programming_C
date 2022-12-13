// 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer() {
	int value; 
	printf("정수를 입력하세요: ");
	scanf_s("%d", &value); //value값에 정수형 자료 저장

	return value; //value에 저장된 값 반환
}

int main(void) {
	int x = get_integer(); //get_integer함수 호출하여 get_integer함수 반환값 x에 저장
	int y = get_integer();

	int result = x + y;

	printf("두수의 합 = %d\n", result);

	return 0;
}


// 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer() { //1번 참조
	int value;
	printf("정수를 입력하세요: "); 
	scanf_s("%d", &value);

	return value; 
}

int get_max(int x, int y) { 
	if (x > y) { // 매개변수 x가 매개변수 y보다 크면
		return x; // x반환
	}
	else { //아니면
		return y; // y반환
	}
}

int main(void) {
	int a = get_integer(); //get_integer함수 호출하여 get_integer함수 반환값 a에 저장
	int b = get_integer();

	printf("두수 중에서 큰 수는 %d입니다.\n", get_max(a, b)); //get_max()함수 호출하여, 매개변수 x = a, 매개변수 y = b
	return 0;
}


//3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer() { //1번 참조
	int value;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &value);

	return value;
}

int power(int x, int y) { 
	int i;
	int result = 1;

	for (i = 0; i < y; i++) {
		result *= x; // result = result * x
	}

	return result; //result변수에 저장된 값 반환
}

int main(void) {
	int a = get_integer();
	int b = get_integer();

	int result = power(a, b); //power함수 호출해서, 매개변수 x = a, 매개변수 y = b

	printf("%d의 %d승 = %d\n", a, b, result);

	return 0;
}


//4
#include <stdio.h>

void sub(void) {
	int auto_count = 0;
	static int static_count = 0; //static변수로 함수를 벗어나도 변수가 사라지지 않고 유지됨

	auto_count++;
	static_count++;
	printf("auto_count = %d\n", auto_count);
	printf("static_count = %d\n", static_count);
}

int main(void) {
	sub(); //auto_count = 1, static_count = 1
	sub(); //auto_count = 1, static_count = 2
	sub(); //auto_count = 1, static_count = 3

	return 0;
}

//5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n); //factorial 함수가 존재함을 미리 선언

int main(void) {
	int x = 0, result;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);

	result = factorial(x); //factorial 함수 호출해서 매개변수 n에 변수 x 대입

	printf("%d!은 %d입니다\n", x, result);

	return 0;
}

int factorial(int n) { 
	printf("factorial(%d)\n", n);

	if(n <= 1) { //n이 1보다 작거나 같은 경우
		return 1; // 1을 반환
	}
	else {
		return n * factorial(n - 1); // n*factorial(n-1), factorial()함수 반복 호출
	}
}
