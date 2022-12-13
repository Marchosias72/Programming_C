//예제 1번
//*는 포인터 변수 내에 저장된 주소값에 해당하는 변수의 값을 가져옴
#include <stdio.h>
int main(void){
	int number = 10;
	int* p; // 포인터 변수 P 선언

	p = &number; // number의 주소를 포인터 변수 p에 저장

	printf("변수의 number의 주소 = %p\n", &number);
	printf("포인터 변수에 저장된 값 = %p\n", p); // 포인터 변수에 저장된 값이 number의 주소값이기에 %p 사용
	printf("변수 number에 저장된 값 = %d\n", number);
	printf("포인터가 가리키는 값 = %d", *p); //*p자체는 포인터 변수에 할당된 주소를 지닌 변수의 실제 값

	return 0;
}


//예제 2번

#include <stdio.h>

int main(void) {
	int number = 10;
	int* p;
	
	p = &number; // number의 주소를 포인터 변수 p에 저장
	printf("변수 number의 값=%d\n", number);

	*p = 20; //포인터 변수 내에 저장된 주소값에 해당하는 변수의 값을 20으로 변경
	printf("변수 number의 값 = %d\n", number);

	return 0;
}


//증가연산예제의 경우 절대주소 대입하면 컴퓨터의 강제종료의 경우가 있어 실습X

//간접 참조 연산자와 증감연산자

#include<stdio.h>

int main(void) {
	int number = 10;
	int* p;
	int v = 0;

	p = &number;

	printf("number = %u\n", number);
	printf("변수 number의 주소 = %u\n", &number);
	printf("p = %u\n", p);
	
	// v = *p++ // *p(number)값을 v에넣고, p(주소)는 증가(int라서 4증가)
	// v = (*p)++ // *p(number)값을 v에넣고, *p(number)를 1 증가
	// v = *++p //p(주소)를 증가시키고, 증가된 p에 가르키는 값 v에 대입
	v = ++(*p);// *p(number)를 가져와서, 그 값을 증가시키고 v에 대입

	printf("v = %u\n", v);
	printf("p = %u\n", p);
	printf("number = %u\n", number);

	return 0;
	
}


// 값에 의한 호출 call by value

#include <stdio.h>

void modify(int value) {
	value = 99;
}

int main(void) {
	int number = 1;

	modify(number);
	printf("number = %d\n", number);

	return 0;
}


// 참조에 의한 호출  call by reference

#include <stdio.h>

void modify(int *ptr) {
	*ptr = 99;
}

int main(void) {
	int number = 1;

	modify(&number); //함수 매개변수로 number함수의 주소 사용(ptr = &number)
	printf("number = %d\n", number); //number = 99;

	return 0;
}


//swap()함수 #2 call by reference

#include<stdio.h>

void swap(int* px, int* py) {
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main(void) {
	int a = 100, b = 200;
	printf("swap() 호출 전 a = %d, b = %d\n",a, b);

	swap(&a, &b);

	printf("swap() 호출 후 a = %d, b = %d\n",a, b); // a = 200 b = 100

	return 0;
}


//swap() 함수 call by value

#include<stdio.h>

void swap(int x, int y) {
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}

int main(void) {
	int a = 100, b = 200;
	printf("swap() 호출 전 a = %d, b = %d\n", a, b);

	swap(a, b);

	printf("swap() 호출 후 a = %d, b = %d\n", a, b);

	return 0;
}



#include <stdio.h>

void sub(int* ptr) {
	printf("%d\n", ptr[10]);
}

int main(void) {
	int large_data[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	sub(large_data); // 11
	return 0;
}


//포인터와 배열
#include <stdio.h>

int main(void) {
	int a[] = { 10,20,30,40,50 };

	printf("배열의 이름 = %u\n", a); 
	printf("첫 번째 원소의 주소 = %u\n", &a[0]); //배열 이름과 첫번째 원소의 주소가 동일

	return 0;
}


//포인터와 배열2
#include <stdio.h>

int main(void) {
	int a[] = { 10,20,30,40,50 };
	int* p;

	p = a;
	printf("a[0]=%d a[1]=%d a[2]=%d\n", a[0], a[1], a[2]);
	printf("p[0]=%d p[1]=%d p[2]=%d\n", p[0], p[1], p[2]);

	return 0;
}
