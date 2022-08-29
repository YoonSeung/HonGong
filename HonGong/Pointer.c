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

	// 출력= 10, printf 반환값 = 14, 왜? -> 출력되는 <1 num 값 : 10> 에서 \n(엔터) 까지 포함해서 문자갯수를 구하면 14가 나온다. %d는 10으로 바꾸고 세야한다. \n은 엔터한칸이다.
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
	한글은 2바이트/ 숫자,띄어쓰기,영어는 1바이트
	
}*/

//================================================================================
/*int main(void)
{
	int x = 10, y = 30;
	char a = 'A', b = 'B';
	int *p;
	int *z;
	char *c;

	p = &x;
	printf("p = %p\n", p);
	printf("*p = %d\n\n", *p);

	p = &y;
	printf("p = %p\n", p);
	printf("*p = %d\n\n", *p);

	z = &y;
	printf("변수 y 주소값 : %p\n", &y);
	printf("포인터변수 z 의 주소값 : %p\n", z);
	printf("포인터변수 z가 가리키는 값 : %d\n\n", *z);

	printf("1 z = %p : z+1 = %p \n", z, z + 1);// z는 
	printf("1 z size = %d : z+1 size= %d \n", sizeof(z), sizeof(z + 1));
	printf("2 *z = %d : *z+1 = %d \n", *z, *z + 1);
	printf("3 z+1 = %p : *(z+1) = %p \n", z+1, *(z + 1));
	printf("4 *z = %d : *(z+1) = %d \n\n", *z, *(z + 1));

	c = &a;

	printf("1 c = %p : c+1 = %p \n", c, c + 1);
	printf("1 c size = %d : c+1 size= %d \n", sizeof(c), sizeof(c + 1));
	printf("2 *c = %d : *c+1 = %d \n", *c, *c + 1);
	printf("2 *c = %c : *c+1 = %c \n", *c, *c + 1);
	//printf("2 *c = %s : *c+1 = %s \n", *c, *c + 1);
	printf("3 c+1 = %p : *(c+1) = %p \n", c + 1, *(c + 1));
	printf("4 *c = %d : *(c+1) = %d \n", *c, *(c + 1));
}*/

//================================================================================
/*void swap(int num1, int num2)
{
	int temp = 0;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
void swap2(int* num1, int* num2)
{
	printf("swap2 original ptr num1 address : %p, num2 address : %p \n\n", &num1, &num2);
	printf("swap2 original ptr *num1  : %d, *num2  : %d \n\n", *num1, *num2);
	int temp = 0;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	printf("swap2 changed ptr num1 address : %p, num2 address : %p \n\n", &num1, &num2);
	printf("swap2 changed ptr *num1  : %d, *num2  : %d \n\n", *num1, *num2);
}

	//================================================================================
int main()
{
	int num1 = 10, num2 = 20;

	printf("1 Original num1 : %d, num2 : %d \n", num1, num2);
	printf("1 Original num1 address : %p, num2 address: %p \n\n", &num1, &num2);


	swap(num1, num2);

	printf("2 changed num1 : %d, num2 : %d \n", num1, num2);
	printf("2 changed num1 address : %p, num2 address : %p \n\n", &num1, &num2);

	swap2(&num1, &num2);

	printf("3 changed ptr num1 : %d, num2 : %d \n", num1, num2);
	printf("3 changed ptr num1 address : %p, num2 address : %p \n\n", &num1, &num2);
}*/

/*void main()
{
	/*int arScore[5];
	int i;
	int sum;


	for (i = 0; i < sizeof(arScore) / sizeof(arScore[0]); i++)
	{
		printf("%d번 학생의 성적 입력 : ", i + 1);
		scanf("%d", &arScore[i]);
		printf("%d번 학생 성적 입력 값의 주소는 : %p\n", i + 1, &arScore[i]);
	}

	sum = 0;
	for (i = 0; i < sizeof(arScore) / sizeof(arScore[0]); i++)
	{
		sum += arScore[i];
	}

	printf("\n 총점은 %d점이고 평균은 %d 입니다.\n", sum, sum / (sizeof(arScore) / sizeof(arScore[0])));
	printf("%p => %d", &arScore[1], arScore[1]);

	int a[] = { 10,20,30,40,50 };
	printf("배열 a[0]의 주소값 = %p \n", a);
	printf("배열 a[1]의 주소값 = %p \n", a + 1);
	printf("배열 a[0]의 값 = %d \n", *a);
	printf("배열 a[1]의 값 = %d \n", *(a + 1));

	int a;
	int *pa;

	pa = &a;
	*pa = 10;

	printf("&a = %p\n", &a);
	printf("포인터로 a 값 출력 : %d\n", *pa);
	printf("변수명으로 a값 출력 : %d\n", a);
	printf("**pa = %p\n\n\n", &pa);*/


	//================================================================================

	/*int ar[] = { 10, 20, 30, 40, 50 };// ar 배열 주소값 0x00D9F6D8
	int i, *ptr;

	ptr = ar;// == &ar == ptr 값 0x00D9F6D8

	printf("ptr => *ptr = %d ptr = %p &ptr = %p\n", *ptr, ptr, &ptr);
	printf("ar => *ar = %d / (ar==&ar) = %p \n\n", *ar, ar);
	for (i = 0; i < 5; i++)
	{
		printf("*ptr = %d       / ptr = %p		/ &ptr = %p\n",		*ptr,		ptr,		&ptr);
		printf("*ptr+1 = %d		/ ptr+1 = %p	/ &ptr+1 = %p\n\n", *ptr + 1,	ptr + 1,	&ptr + 1); 
		*ptr++; // == *ptr


		// &ptr + 1은 &ptr 에서 자료형 byte 만큼 주소값 증가
		//&ptr 즉, ptr변수의 주소값은 *ptr++ 을 해봤자 고정이다. 
		//ptr에는 ar배열의 주소값이 들어가 있다. 그러면 *ptr은 ar배열의 첫번째 값이 나온다. 그곳에다가 ++ 를 하면 다음번지의 값으로 넘어간다.
		//즉 ar[0]에서 다음번째로 증가 시킨다는 의미이다. 그렇기 때문에 ar배열의 주소값을 저장하고 있는 &ptr은 증가하지 않고 계속 동일 값을 찍게 된다.
	}
	printf("\n");*/

	//================================================================================
	/*for (i = 0; i < 5; i++)
	{
		printf("%d번째 %d %p %d %p %d %p\n", i + 1, *ptr, *ptr, ptr, ptr, &ptr, &ptr);
		printf("%d번째 %d %p %d %p %d %p\n\n", i + 1, *ar, *ar, ar, ar, &ar, &ar);
		*++ptr;
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 %d %p %d %p %d %p\n", i + 1, *ptr, *ptr, ptr, ptr, &ptr, &ptr);
		printf("%d번째 %d %p %d %p %d %p\n\n", i + 1, *ar, *ar, ar, ar, &ar, &ar);
		*(ptr++);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 %d %p %d %p %d %p\n", i + 1, *ptr, *ptr, ptr, ptr, &ptr, &ptr);
		printf("%d번째 %d %p %d %p %d %p\n\n", i + 1, *ar, *ar, ar, ar, &ar, &ar);
		*(++ptr);
	}
}*/

//void main()
//{
//	int *arScore;
//	int i, stNum;
//	int sum;
//
//	printf("학생수 입력 : ");
//	scanf("%d", &stNum);
//	arScore = (int *)malloc(stNum * sizeof(int)); //int형 크기 * 할당받을 칸 수 
//	if (arScore == NULL)
//	{
//		printf("메모리가 부족합니다.\n");
//		exit(0);
//	}
//
//	for (i = 0; i < stNum; i++)
//	{
//		printf("%d번 학생의 성적 입력 : ", i+1);
//		scanf("%d", &arScore[i]);
//	}
//
//	sum = 0;
//	for (i = 0; i < stNum; i++)
//	{
//		sum += arScore[i];
//	}
//
//	printf("총점 : %d , 평균 : %d\n", sum, sum / stNum);
//	free(arScore);
//}

//
//void bubbleSort(int *arr)
//{
//	int temp;
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	bubbleSort(&arr);
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main(void)
//{
//	int *pi;
//	int i, sum = 0;
//
//	pi = (int*)malloc(5 * sizeof(int));
//	if (pi == NULL)
//	{
//		printf("메모리가 부족합니다.\n");
//		exit(1);
//	}
//	printf("다섯 명의 나이를 입력하세요 : ");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]);
//		sum += pi[i];
//	}
//	printf("다섯명의 평균 나이 : %.1lf\n", (sum / 5.0));
//	free(pi);
//}
//
//
//int main()
//{
//	char* p = "Hello";
//
//	for (int i = 0; i < strlen(p); i++)
//	{
//		printf("%c %c\n", p[i], p[i+1]);
//		printf("%d %d\n", p[i], p[i + 1]);
//	}
//}

