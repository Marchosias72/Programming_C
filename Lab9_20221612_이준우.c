/*
//���� 1��
//*�� ������ ���� ���� ����� �ּҰ��� �ش��ϴ� ������ ���� ������
#include <stdio.h>
int main(void){
	int number = 10;
	int* p; // ������ ���� P ����

	p = &number; // number�� �ּҸ� ������ ���� p�� ����

	printf("������ number�� �ּ� = %p\n", &number);
	printf("������ ������ ����� �� = %p\n", p); // ������ ������ ����� ���� number�� �ּҰ��̱⿡ %p ���
	printf("���� number�� ����� �� = %d\n", number);
	printf("�����Ͱ� ����Ű�� �� = %d", *p);

	return 0;
}


//���� 2��

#include <stdio.h>

int main(void) {
	int number = 10;
	int* p;
	
	p = &number;
	printf("���� number�� ��=%d\n", number);

	*p = 20; //������ ���� ���� ����� �ּҰ��� �ش��ϴ� ������ ���� 20���� ����
	printf("���� number�� �� = %d\n", number);

	return 0;
}


//�������꿹���� ��� �����ּ� �����ϸ� ��ǻ���� ���������� ��찡 �־� �ǽ�X

//���� ���� �����ڿ� ����������

#include<stdio.h>

int main(void) {
	int number = 10;
	int* p;
	int v = 0;

	p = &number;

	printf("number = %u\n", number);
	printf("���� number�� �ּ� = %u\n", &number);
	printf("p = %u\n", p);
	
	// v = *p++ // *p(number)���� v���ְ�, p(�ּ�)�� ����(int�� 4����)
	// v = (*p)++ // *p(number)���� v���ְ�, *p(number)�� 1 ����
	// v = *++p //p(�ּ�)�� ������Ű��, ������ p�� ����Ű�� �� v�� ����
	v = ++(*p);// *p(number)�� �����ͼ�, �� ���� ������Ű�� v�� ����

	printf("v = %u\n", v);
	printf("p = %u\n", p);
	printf("number = %u\n", number);

	return 0;
	
}


// ���� ���� ȣ�� call by value

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


// ������ ���� ȣ��  call by reference

#include <stdio.h>

void modify(int *ptr) {
	*ptr = 99;
}

int main(void) {
	int number = 1;

	modify(&number);
	printf("number = %d\n", number);

	return 0;
}


//swap()�Լ� #2 call by reference

#include<stdio.h>

void swap(int* px, int* py) {
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main(void) {
	int a = 100, b = 200;
	printf("swap() ȣ�� �� a = %d, b = %d\n",a, b);

	swap(&a, &b);

	printf("swap() ȣ�� �� a = %d, b = %d\n",a, b);

	return 0;
}


//swap() �Լ� call by value

#include<stdio.h>

void swap(int x, int y) {
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}

int main(void) {
	int a = 100, b = 200;
	printf("swap() ȣ�� �� a = %d, b = %d\n", a, b);

	swap(a, b);

	printf("swap() ȣ�� �� a = %d, b = %d\n", a, b);

	return 0;
}



#include <stdio.h>

void sub(int* ptr) {
	printf("%d\n", ptr[10]);
}

int main(void) {
	int large_data[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	sub(large_data);
	return 0;
}

//�����Ϳ� �迭
#include <stdio.h>

int main(void) {
	int a[] = { 10,20,30,40,50 };

	printf("�迭�� �̸� = %u\n", a);
	printf("ù ��° ������ �ּ� = %u\n", &a[0]);

	return 0;
}
*/

//�����Ϳ� �迭2
#include <stdio.h>

int main(void) {
	int a[] = { 10,20,30,40,50 };
	int* p;

	p = a;
	printf("a[0]=%d a[1]=%d a[2]=%d\n", a[0], a[1], a[2]);
	printf("p[0]=%d p[1]=%d p[2]=%d\n", p[0], p[1], p[2]);

	return 0;
}