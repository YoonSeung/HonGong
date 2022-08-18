#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//------------- 포인터 주소값 찾아보기 실습
/*
int main(void) {
	int *array[4] = { 5,6,7,8 };

	char *pi;




	printf("%p = %p\n", array, array + 1);
	printf("%p" , &pi);
}

// 포인터를 활용해서 값 변경하기.
int main(void) {
	int Num = 629;
	int *pi;
	char test[100];

	memset(test, 0xff, 100); // test배열안의 값을 0xff로 100개 수정해라

	pi = &Num;
	*pi = 1;
	printf("Num값은 %d입니다.\n", Num);
}

struct Person
{
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person *p1 = malloc(sizeof(struct Person));

	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울시 용산구");

	printf("이름 : %s\n", p1->name);
	printf("나이 : %d\n", p1->age);
	printf("주소 : %s\n", p1->address);

	free(p1);
}*/



/*void printAll(int* pArr, int len)
{
	for (int i = 0; i < len; ++i)
	{
		printf("%d ", *(pArr + i));
	}
	printf("\n\n");
}

int main(void)
{
	
	int arr1[20];

	//배열의 쓰레기값 출력해보기 원본값
	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
	{
		printf("%d  ", arr1[i]);
	}
	printf("\n\n");

	//배열초기화를 for문으로 활용해보기
	for (int i = 0; i < 20; ++i)
	{
		arr1[i] = 0;
		
	}
	printf("for		: ");
	printAll(arr1, 20);

	//배열을 memset 함수를 이용해서 초기화
	int arr2[20];
	memset(arr2, 0, 20 * sizeof(int));

	printf("memset		: ");
	printAll(arr2, 20);

}*/

/*int main()
{

	int num = 10;
	int* ptr;
	ptr = &num;
	int a, b, c, d;

	// 출력= 10, printf 반환값 = 14, 왜? -> 출력되는 <1 num 값 : 10> 에서 \n 까지 포함해서 문자갯수를 구하면 14가 나온다. %d는 10으로 바꾸고 세야한다.
	//1
	printf("1 num 값 : %d\n", num);

	//출력= 0000000A, printf 반환값= 20 -> 왜 0000000A=> %p는 주소형태(포인터)로 변형해서 16진수로 바꾸어 출력한다. 컴파일러에 따라 0x로 표현될수있고 아닐수도 있다.
	//또한 컴파일러 OS체제가 32비트일때 8자리, 64비트일때 16자리로 나타내진다. 현재 실습의 경우 32비트 컴파일러를 사용하기에 0000000A가 나온다.
	//2
	printf("2 num 값 : %p\n", num);

	// 출력= a, printf 반환값= 13 -> %x는 단순히 숫자를 소문자형식의 16진수로 바꾼다. 대문자는 %X, 이 경우 10진수 10의 16진수인 a가 표시되고 x를 사용했기에 소문자로 나타내진다.
	//3
	printf("3 num 값 : %x\n", num);

	// num값 10이 저장되어있는 주소를 10진수로 표시한다. 
	//4
	a = printf("4 num 주소값 : %d\n", &num);

	// 주소를 16진수로 표시 
	//5
	b = printf("5 num 주소값 : %p\n", &num);

	// 16진수 중 0을 제외해서 표시 , 
	//6
	c = printf("6 num 주소값 : %x\n", &num);

	// ptr값은 num의 주소가 들어가있음 d이기에 10진수 표시일테니 4와 같은 값 / 반환값 확인
	//7
	printf("7 ptr 값 : %d\n", ptr);

	// 값은 10 왜 반환값이 35까지 올라가는지..
	//8
	d = printf("8 ptr 주소값이 가리키는 실제 값 %d\n", *ptr);

	printf("\n");
	printf("4번 printf 반환값 : %d\n", a);//왜 반환값이 출력갯수 + 2가 되는지
	printf("5번 printf 반환값 : %d\n", b);//위와 동일 의문
	printf("6번 printf 반환값 : %d\n", c);//여긴 주소값의 앞의 0의 갯수에 따라 유동적
	printf("8번 printf 반환값 : %d\n", d);// 여긴 10이 차이남
	
}*/

int main(void)
{
	int x = 10, y = 20;
	int *p;
	int *z = NULL;

	p = &x;
	printf("p = %p\n", p);
	printf("*p = %d\n\n", *p);

	p = &y;
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);

	*z = 100;
	printf("%p", *z);
}