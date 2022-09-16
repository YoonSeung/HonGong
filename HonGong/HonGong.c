#include<stdio.h>
#include<string.h>
#include<stdlib.h> //동적할당을 위해 쓸때 사용하는 헤더
#include<string.h>
#include <stdbool.h>
#include<Windows.h>


/*int main(void) {
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
}

int main(void) {
	char frult[20] = "strawberry";
	//frult = "banana"; 배열 선언 후 대입 연산자로 문자열 입력 못한다.

	printf("딸기 : %s\n", frult);
	strcpy(frult, "banana");
	printf("딸기쨈 : %s %s\n", frult, "jam");
}

int main(void) {
	int kor = 3;
	int eng = 5;
	int mat = 4;
	int credits, res;
	double kscore = 3.8;
	double escore = 4.4;
	double mscore = 3.9;
	double grade;

	credits = kor + eng + mat;
	grade = (kscore + escore + mscore) / 3;

	if (credits >= 10 && grade > 4.0) {
		res = 1;
	}
	else {
		res = 0;
	}

	printf("%d\n", res);
}

int main(void) {
	int kor = 3, eng = 5, mat = 4;
	int credits;
	int res;
	double kscore = 3.8, escore = 4.4, mscore = 3.9;
	double grade;

	credits = kor + eng + mat;
	grade = (kor * kscore + eng * escore + mat * mscore) / credits;

	res = (credits >= 10) && (grade > 4.0);
	printf("%d\n", res);
}

int main(void) {
	int kg;
	double cm, BMI;
	
	printf("몸무게(kg)와 키(cm) 입력: ");
	scanf("%d%lf", &kg, &cm);

	cm /= 100;

	BMI = cm * cm / (double)kg;

	if (20.0 <= BMI && BMI <= 25.0) {
		printf("표준입니다.\n");
	}
	else {
		printf("체중관리가 필요합니다.");
	}
}

int main(void) {
	int age = 25, chest = 95;
	char size;

	if (age < 20) {
		if (chest < 85) {
			size = 'S';
		}
		else if (85 <= chest && chest < 95) {
			size = 'M';
		}
		else {
			size = 'L';
		}
	}
	else {
		if (chest < 90) {
			size = 'S';
		}
		else if (90 <= chest && chest < 100) {
			size = 'M';
		}
		else {
			size = 'L';
		}
		
	}
	printf("사이즈는 %c입니다.\n", size);
}

int main(void) {
	int num1, num2, res;
	char x;

	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &num1, &x, &num2);

	if(x != '%')
		switch (x)
		{
		case '+':
			res = num1 + num2;
			printf("%d%c%d=%d", num1, x, num2, res);
			break;
		case '-':
			res = num1 - num2;
			printf("%d%c%d=%d", num1, x, num2, res);
			break;
		case '*':
			res = num1 * num2;
			printf("%d%c%d=%d", num1, x, num2, res);
			break;
		case '/':
			res = num1 / num2;
			printf("%d%c%d=%d", num1, x, num2, res);
			break;
		default:
			printf("연산오류입니다.");
			break;
		}
	else 
		printf("'%%'는 사용 불가합니다.");
}

int main(void) {
	{
		int input_number;
		int i;
		int sum = 0;

		printf("숫자를 입력하세요 : ");
		scanf("%d", &input_number);

		for (i = 1; i <= input_number; i++)
		{		
			if (input_number % i == 0 ) {

				sum += input_number;
				printf("%d\n", sum);
			}
		}

		printf("%d",sum);

	}
}

nt main(void)
{
	int sum = 0;
	int count = 0;

	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			continue;
		}
		sum += i;
		printf("%d\n", sum);
		count++;
	}
	printf("최종값 : %d\n 횟수 : %d\n", sum, count);
}


//3의 배수 찍기 (단 9의 배수는 나오지 않게 하기) <continue의 활용>
int main(void) {
	int i;

	for (i = 1; i <= 50; i++) {
		if (i % 9 == 0)
			continue;
		if (i % 3 == 0)
			printf("%d\n", i);
	}
}

int sum(int x, int y);

int main(void)
{
	int a = 10, b = 20;
	int res;

	res = sum(a, b);
	printf("res : %d", res);

}

int sum(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}*/

/*void change(int);
void change2(int *);*/


	/*
	int a = 5;
	int b = 15;
	printf("1 before a val = %d a_ptr = %p\n", a,a);
	printf("1 before a val = %d a_ptr = %p\n", &a,&a);
	printf("1 before a val = %d a_ptr = %p\n", a, &a);
	printf("1 before b val = %d b_ptr = %p\n", b,b);
	printf("1 before b val = %d b_ptr = %p\n", &b,&b);
	printf("1 before b val = %d b_ptr = %p\n", b, &b);
	

	change(a);
	change2(&b);
	printf("2 after a val = %d a_ptr : %p\n", a, a);
	printf("2 after a val = %d a_ptr : %p\n", &a, &a);
	printf("2 after b val = %d b_ptr : %p\n", b, b);
	printf("2 after b val = %d b_ptr : %p\n", &b, &b);
	
}

void change(int a) //깨달음 => 여기있는 a는 main에서 선언되어있는 a와 다르다. 그래서 main의 a값을 변경하려고 이 change 함수를 써봤자 main의 a값은 변경되지 않는다.
{
	a = 11;
	printf("3 change a_ptr = %p\n", a);
}

void change2(int *a) { //하지만 이렇게 포인터로 주소값을 활용해 변경시키기 위해 사용할 수 있다. 여기 a도 main의 a와는 다르지만 
	*a = 10;
	printf("3 change2 a_ptr = %p\n", a);
}*/

/*double centi_to_meter(int a);

int main(void)
{
	double res;
	res = centi_to_meter(187);
	printf("%.2lfm\n", res);
}

double centi_to_meter(int a)
{
	double temp;

	temp = a / 100.0;

	return temp;
}
*/

/*int get_num(void);

int main(void)
{
	int result;

	result = get_num();
	printf("반환값 : %d\n", result);
}

int get_num(void)
{
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);
	
	while (num < 0)
	{
		printf("양수를 입력하세요!\n");
		printf("양수 입력 : ");
		scanf("%d", &num);
	}

	return num;
}
*/

/*int sum(int a);

int main(void)
{
	sum(10);
	sum(100);
}

int sum(int a)
{
	int sum_temp = 0;

	for (int i = 1; i <= a ; i++)
	{
		sum_temp += i;
		
	}
	printf("1부터 %d 까지 합은 %d입니다.\n", a, sum_temp);
}*/

/*int main(void)
{
	char str[5];
	str[0] = '0';
	str[1] = 'k';
	printf("%s\n", str);
}*/

/*int main(void)
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c", small);
}*/


//int main(void)
//{
//	char str[80];
//
//	printf("문자열 입력 : ");
//	scanf("%s", str);
//	printf("첫 번째 단어 : %s\n", str);
//	scanf("%s", str);
//	printf("버퍼 남아있는 두번째 단어 : %s\n", str);
//}

//int main()
//{
//	int i = 0;
//	char str[20];
//	char ch;
//
//	do
//	{
//		ch = getchar();
//		str[i] = ch;
//		i++;
//	} while (ch != '\n');
//
//	str[--i] = '\0';
//	printf("%s", str);
//}

//=========== malloc 동적할당으로 n명의 학생 점수 입력후 총점, 평균 구해보기
//void main()
//{
//	int* arScore;
//	int i, stNum;
//	int sum;
//
//	printf("학생수 입력 : ");
//	scanf("%d", &stNum);
//	arScore = (int*)malloc(stNum * sizeof(int));
//	if (arScore == NULL)
//	{
//		printf("메모리가 부족합니다.\n");
//		exit(0);
//	}
//
//	for (i = 0; i < stNum; i++)
//	{
//		printf("%d번 학생 성적 입력 : ", i + 1);
//		scanf("%d", &arScore[i]);
//	}
//
//	sum = 0;
//	for (i = 0; i < stNum; i++)
//	{
//		sum += arScore[i];
//	}
//
//	printf("\n 총점은 %d점이고 평균은 %d점입니다.", sum, sum / stNum);
//	free(arScore);
//}

////malloc 할당 후 realloc으로 재할당해보기
//void main()
//{
//	int* ar;
//
//	ar=(int*)malloc(5 * sizeof(int)); // 메모리 동적 할당 int형포인터 ar에 int형 4바이트 5개 공간 할애해달라 ==> 총 20바이트 할당
//	ar[4] = 1234; //5개의 공간중 5번째에 1234 대입
//
//	ar = (int*)realloc(ar, 10 * sizeof(int)); //20바이트할당받은 ar(5개공간) 을 10개 공간으로 늘리고싶다 ==> 40 바이트로 늘려라 (재할당)
//	ar[9] = 5678; //10개의 공간중 10번째 5678 대입
//
//	printf("ar[4]=%d, %p ar[9]=%d, %p\n", ar[4], ar, ar[9], ar); // 만약 처음 할당받은 ar 20바이트 뒤에 이미 메모리가 차지하고있으면 ar데이터들을 들고 ar이 이사를 가게된다. = 다른 주소로 이동 
//	free(ar);
//}


//void InputName(char **pName)
//{
//	*pName = (char*)malloc(12);//12바이트할당
//	strcpy(*pName, "Cabin");
//}
//
//void main()
//{
//	char *Name;
//
//	InputName(&Name);
//	printf("이름은 %s입니다.", Name);
//	free(Name);
//}

//void main()
//{
//	int i, icopy;
//	int *pi;
//
//	i = 5;
//	icopy = i;
//	icopy = icopy + 1;
//	printf("i=%d, icopy=%d\n", i, icopy);
//
//	i = 5;
//	pi = &i;
//	*pi = *pi + 1;
//	printf("i=%d, *pi=%d\n", i, *pi);
//}

//void main(void)
//{
//	void arDump(void *array, int length);
//
//	unsigned char ari[2][3] = { {1,2,3},{4,5,6} };
//
//	arDump(ari, sizeof(ari));
//	arDump(ari[0], sizeof(ari[0]));
//	arDump(ari[1], sizeof(ari[1]));
//}
//
//void arDump(void* array, int length)
//{
//	int i;
//	for (i = 0; i < length; i++)
//	{
//		printf("%02X", *((unsigned char *)array + i));
//	}
//	printf("\n");
//}

//void main(void)
//{
//	int ar[5] = { 1,2,3,4,5 };
//
//	printf("ar[2]=%d\n", ar[2]);//3
//	printf("ar[2]=%d\n", *(ar+2));//3
//	printf("ar[2]=%d\n", 2[ar]);//
//}


//
//int sum(int, int);
//
//int main(void)
//{
//	int(*fp)(int, int);
//	int res;
//
//	fp = sum;
//	res = fp(10, 20);
//	printf("result : %d\n", res);
//}
//
//int sum(int a, int b)
//{
//	return(a + b);
//}

//
//void func(int(*fp)(int, int));
//int sum(int a, int b);
//int mul(int a, int b);
//int max2(int a, int b);
//
//int main(void)
//{
//	int sel;
//
//	printf("01 두 정수의 합\n");
//	printf("02 두 정수의 곱\n");
//	printf("03 두 정수 중에서 큰 값 계산\n");
//	printf("원하는 연산을 선택하세요 : ");
//	scanf("%d", &sel);
//
//	switch (sel)
//	{
//	case 1: func(sum); break;
//	case 2: func(mul); break;
//	case 3: func(max2); break;
//	}
//}
//void func(int(*fp)(int, int))
//{
//	int a, b;
//	int res;
//
//	printf("두 정수의 값을 입력하세요 : ");
//	scanf("%d%d", &a, &b);
//	res = fp(a, b);
//	printf("결과값은 : %d\n", res);
//}
//
//int sum(int a, int b)
//{
//	return(a + b);
//}
//
//int mul(int a, int b)
//{
//	return(a*b);
//}
//
//int max2(int a, int b)
//{
//	if (a > b)return a;
//	else return b;
//}

//int main(void)
//{
//	int a[5] = { 3,2,1,6,5 };
//	int i, j, temp;
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			if (a[i] > a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%5d", a[i]);
//	}
//}

//int main(void)
//{
//	int a[5] = { 3,2,1,6,5 };
//	int i, j, temp;
//	int min;
//
//	for (i = 0; i < 4; i++)
//	{
//		min = i;
//		for (j = i+1; j < 5; j++)
//		{
//			if (a[min] > a[j])
//			{
//				min = j;
//			}
//		}
//		if (min != i)
//		{
//			temp = a[i];
//			a[i] = a[min];
//			a[min] = temp;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%5d", a[i]);
//	}
//}


////=========================================================================================
//int main(void)
//{
//	//동적 할당 영역을 연결할 포인터 선언
//	int *pi;
//	double *pd;
//
//	//메모리 동적 할 당 후 포인터 연결
//	pi = (int *)malloc(sizeof(int)); 
//
//	//동적 할당에 실패하면 NULL 포인터 반환
//	if (pi == NULL)
//	{
//		//예외 상황 메시지 출력
//		printf("#메모리가 부족\n");
//		
//		//프로그램 종료
//		exit(1);
//	}
//	pd = (double *)malloc(sizeof(double));
//
//	//포인터로 동적 할당 영역 사용
//	*pi = 10;
//	*pd = 3.4;
//
//	printf("정수형 사용 : %d\n", *pi);
//	printf("실수형 사용 : %.1lf\n", *pd);
//
//	//할당해제
//	free(pi);
//	free(pd);
//
//}

////혼	자	해	보	기
//int main(void)
//{
//	//동적 할당 영역을 연결할 포인터 선언
//	
//
//	//메모리 동적 할 당 후 포인터 연결
//	
//
//	//동적 할당에 실패하면 NULL 포인터 반환
//	
//	{
//		//예외 상황 메시지 출력
//		printf("#메모리가 부족\n");
//
//		//프로그램 종료
//
//	}
//	
//	//실수형 동적할당
//	pd = (double *)malloc(sizeof(double));
//
//	//포인터로 동적 할당 영역 사용
//
//
//	printf("정수형 사용 : %d\n", *pi);
//	printf("실수형 사용 : %.1lf\n", *pd);
//
//	//할당해제
//
//
//}




////왜 안되는지 확인해볼것
//char* solution(int n) {
//	// 리턴할 값은 메모리를 동적 할당해주세요.
//	char* answer = (char*)malloc(sizeof(char)*(n+1));
//	char str[10000] = { '\0' }; //cpy함수로 붙일 공간
//	char a[] = "수";
//	char b[] = "박";
//
//	answer = str;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (i % 2 == 0) {
//			strcat(str[i], "수");
//		}
//		else
//		{
//			strcat(str[i],"박");
//		}	
//	}
//	answer = str;
//	printf("%s", answer);
//	return answer;
//}
//
//int main(void)
//{
//	int n=3;
//
//	solution(3);
//	free(solution);
//
//}

//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//
//	switch (a) {
//	case 100:
//		printf("%s\n", "A");
//	case a
//	}
//}

//int main(void)
//{
//	//할당한 저장 공간을 연결할 포인터
//	int *pi;
//	//한 번에 할당할 저장 공간의 크기, int형 변수 5개씩
//	int size = 5;
//	//현재 입력된 양수 갯수
//	int count = 0;
//	//양수를 입력할 변수
//	int num;
//	//반복 제어 변수
//	int i;
//
//	pi = (int *)calloc(size, sizeof(int));
//	while (1)
//	{
//		printf("양수만 입력하세요 =>");
//		scanf("%d", &num);
//		if (num <= 0)break;
//		if (count == size)
//		{
//			size += 5;
//			pi = (int*)realloc(pi, size * sizeof(int));
//		}
//		pi[count++] = num;
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", pi[i]);
//	}
//	free(pi);
//}

//void main(void)
//{
//	char arps[5][9] = { "고양이","개","오랑우탄","돼지","지렁이" };
//	char(*ps)[9];
//
//	ps = arps;
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", *ps++);
//	}
//}

//int GetTotalForWeek(int(*pa)[7])
//{
//	int i, sum = 0;
//
//	for (i = 0; i < 7; i++)
//	{
//		sum += pa[0][i];
//	}
//	return sum;
//}
//
//void main(void)
//{
//	int ari[][7] = {
//		{1,2,3,4,5,6,7},
//		{8,9,10,11,12,13,14},
//		{15,16,17,18,19,20,21}
//	};
//
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d주의 판매량 = %d\n", i + 1, GetTotalForWeek(&ari[i]));
//	}
//}

//int main(void)
//{
//	//임시 char 배열
//	char temp[80];
//	//동적 할당 영역을 연결할 포인터 배열
//	char *str[3];
//	//반복 제어 변수
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("문자열을 입력하세요 : ");
//
//		//!! 문자열 입력
//		gets(temp);
//		//문자열 저장 공간 할당
//		str[i] = (char *)malloc(strlen(temp)+1); // null 값까지 포함해야 하기 때문에 +1을 한것이다.
//		strcpy(str[i], temp);
//	}
//
//	//입력된 문자열 출력
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//	
//	//동적할당 영역 반환 
//	for (i = 0; i < 3; i++)
//	{
//		free(str[i]);
//	}
//}
//
////=====================혼 자 해 보 기 
////int main(void)
////{
////	//임시 char 배열
////
////	//동적 할당 영역을 연결할 포인터 배열
////
////	//반복 제어 변수
////
////
////	for (i = 0; i < 3; i++)
////	{
////		printf("문자열을 입력하세요 : ");
////
////		//!! 문자열 입력
////
////		//문자열 저장 공간 할당
////
////
////	}
////
////	//입력된 문자열 출력
////
////
////	//동적할당 영역 반환 
////
////}

//================================================================================================================================================

////동적 할당 영역의 문자열을 출력하는 함수 선언 
//void print_str(char **ps);
//
//int main(void)
//{
//	//임시 char 배열
//	char temp[80];
//	//문자열을 연결할 포인터 배열, 널 포인터로 초기화
//	char *str[21] = { 0 };
//	//반복 제어 변수
//	int i = 0;
//
//	//최대 갯수 까지 반복
//	while (i < 20)
//	{
//		printf("문자열을 입력하세요 : ");
//		gets(temp);
//		//end 가 입력되면 반복 종료
//		if (strcmp(temp, "end") == 0) break; //cmp는 문자열에서 해당 단어가 같을경우 0을 리턴 // 정리했던내용 두 문자열이 같은지 비교할때 자주 이용
//		//문자열 저장 공간 할당
//		str[i] = (char*)malloc(strlen(temp) + 1);
//		//동적 할당 영역에 문자열 복사
//		strcpy(str[i], temp);
//		i++;
//	}
//	//입력한 문자열 출력
//	print_str(str);
//	//str에 연결된 문자열이 없을 때까지 동적 할당 영역 반환환
//	for (i = 0; str[i] != NULL; i++)
//	{
//		free(str[i]);
//	}
//}
//
////동적할당영역의 문자열을 출력하는 함수 기능 구현 
//void print_str(char **ps)
//{
//	//포인터 배열 값이 널 포인터가 아닌 동안 반복해라
//	while (*ps != NULL)
//	{
//		//ps가 가리키는 것은 포인터 배열의 요소
//		printf("%s\n", *ps);
//		//ps가 다음 배열 요소를 가리킨다.
//		ps++;
//	}
//}

//===========혼		자		해		보		기
//
////동적 할당 영역의 문자열을 출력하는 함수 선언 
//void print_str(char **ps);
//
//int main(void)
//{
//	//임시 char 배열 temp 선언
//	char temp[80];
//	//문자열을 연결할 포인터 배열str, 널 포인터로 초기화
//	char* str[21] = { 0 };	
//	//반복 제어 변수
//	int i = 0;
//
//	//최대 갯수 까지 반복
//	while(i<20 )
//	{
//		printf("문자열을 입력하세요 : ");
//		gets(temp);
//		//end 가 입력되면 반복 종료
//		if (strcmp(temp, "end") == 0)break;
//		//문자열 저장 공간 할당
//		str[i] = (char*)malloc(strlen(temp) + 1);
//		//동적 할당 영역에 문자열 복사
//		strcpy(str[i], temp);
//	}
//	//입력한 문자열 출력
//	print_str(str);
//	//str에 연결된 문자열이 없을 때까지 동적 할당 영역 반환
//	for (i=0; str[i] != NULL ; i++)
//	{
//		free(str[i]);
//	}
//}
//
////동적할당영역의 문자열을 출력하는 함수 기능 구현 
//void print_str(char **ps)
//{
//	//포인터 배열 값이 널 포인터가 아닌 동안 반복해라
//	while ( *ps != NULL)
//	{
//		//ps가 가리키는 것은 포인터 배열의 요소
//		printf("%s\n", *ps);
//		//ps가 다음 배열 요소를 가리킨다.
//		*ps++;
//	}
//}

//int global_val = 30;
//void call_by_value(int *val)
//{
//	val = &global_val;
//}
//void call_by_refer(int **ref)
//{
//	*ref = &global_val;
//}
//
//int main()
//{
//	int local_val = 10;
//	int *value = &local_val;
//	int *refer = &local_val;
//
//	printf("before : *value=%d, *refer=%d\n", *value, *refer);
//	call_by_value(value);
//	call_by_refer(&refer);
//	printf("after : *value=%d, *refer=%d\n", *value, *refer);
//
//	return 0;
//}

//char *strcat2(char *dst, const char *src) {
//	char *cp = dst;
//	while (*cp) cp++;
//	while (*cp++ = *src++);
//
//	return dst;
//}
//
//int main()
//{
//	char str[80];
//
//	strcpy(str, "Hello");
//	strcat2(str, " World");
//
//	printf("%s", str);
//}



//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//int solution(const char* s) {
//	int answer = 0;
//	int temp = 0;
//	int len = strlen(s);
//	char* str = (char*)malloc(len);
//
//
//	if (s[0] == '-')
//	{
//		for (int i = 1; i < len; i++)
//		{
//			temp = (temp * 10) + (int)(s[i] - 48);
//		}
//		answer = -temp;
//	}
//	else
//	{
//		for (int i = 0; i < len; i++)
//		{
//			temp = (temp * 10) + (int)(s[i] - 48);
//		}
//		answer = temp;
//	}
//	return answer;
//}
//
//int main()
//{
//
//	int res;
//
//
//	char* s = "1234";
//	res = solution(s);
//	printf("%d\n", res);
//
//	char* s2 = "-1234";
//	res = solution(s2);
//	printf("%d\n", res);
//
//	char* s3 = "11111";
//	res = solution(s3);
//	printf("%d\n", res);
//
//	char* s5 = "1";
//	res = solution(s5);
//	printf("%d\n", res);
//
//	char* s6 = "100";
//	res = solution(s6);
//	printf("%d\n", res);
//
//	char* s7 = "0100";
//	res = solution(s7);
//	printf("%d\n", res);
//
//}


//struct mydata
//{
//	int age;
//	int weight;
//
//	char name[16];
//	char juso[80];
//};
//
//
//int main()
//{
//	struct mydata data;
//	struct mydata *mdata;
//	char f_data[120];
//	int my_weight;
//	int weight;
//
//	data.age = 29;
//	data.weight = 64;
//
//	strcpy(data.name, "yundream");
//	strcpy(data.juso, "seoul korea");
//
//	memset(f_data, 0x00, 120);
//
//	memcpy(f_data, (void*)&data, sizeof(struct mydata));
//	mdata = (void*)&f_data;
//	printf("pcopy %d\n", mdata->age);
//	memcpy((void*)&my_weight, f_data + 6, sizeof(int));
//	printf("%d\n", my_weight);
//	weight = *(int *)(f_data + 6);
//	printf("%d\n", weight);
//
//}
//
//void main()
//{
//	int ar[5] = { 1,2,3,4,5 };
//	char ar2[5]={ '1','2','3','4','5' };
//	char* s = "Hello";
//
//	int *pi1 = &ar[0];
//	char *cpi1 = &ar2[0];
//	
//	pi1++;
//	cpi1++;
//	*pi1 = 0;
//	*cpi1 = 'a';
//
//
//	const int *pi2 = &ar[0];
//	pi2++;
//	/**pi2 = 0;*/
//
//	int *const pi3 = &ar[0];
//	/*pi3++;*/
//	*pi3 = 0;
//
//	const int * const pi4 = &ar[0];
//	/*pi4++;
//	*pi4 = 0;*/
//
//	printf("%d, %p\n", pi1, pi1);
//}

//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//long long solution(int price, int money, int count) {
//	long long answer = -1;
//	long long sum = 0;
//	int i = 0;
//
//
//	for (i = 0; i < count; i++)
//	{
//		sum += price * (i + 1);
//	}
//	answer = sum - money;
//
//	if (answer <= 0)
//		answer *= 0;
//
//	return answer;
//}
//
//int main() {
//	int price = 0, money = 0, count = 0;
//	int res = 0;
//
//
//	price = 1;
//	money = 0;
//	count = 1;
//	res = solution(price, money, count);
//	printf("%d\n", res);
//
//	price = 3;
//	money = 20;
//	count = 4;
//	res = solution(price, money, count);
//	printf("%d\n", res);
//
//	price = 1;
//	money = 1;
//	count = 1;
//	res = solution(price, money, count);
//	printf("%d\n", res);
//
//	price = 2500;
//	money = 1000000000;
//	count = 2500;
//	res = solution(price, money, count);
//	printf("%d\n", res);
//}

//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//char* solution(const char* s) {
//	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
//	int len = strlen(s);
//	int count = 0;
//	char* ptr = (char*)malloc(strlen(s));
//	
//	strcpy(ptr,s);
//	char* answer = (char*)malloc(strlen(s));
//
//	//for (int i = 0; i < len; i++) {
//	//	while (ptr[i] != " ") {
//	//		count++;
//	//		break;
//	//	}
//	//	if (ptr[i] == ' ')
//	//		ptr++;
//	//}
//
//	for(int i = 0 ; i<len ;i++){
//
//		if (i % 2 == 0) {
//			 if (ptr[i] >= 'a' && ptr[i] <= 'z ')
//				 ptr[i] = ptr[i] - 32;
//
//			else
//				 ptr[i] = ptr[i];
//		}
//	}
//	strcpy(answer, ptr);
//		return answer;
//	}
//
//int main() {
//	char* s = "try hello world";
//
//	s = solution(s);
//	printf("%s", s);
//}


//int getIndex(char* name , const char* id_list[], size_t id_list_len)
//{
//	int i = 0;
//	for (i = 0; i < id_list_len; i++)
//	{
//		if (strcmp(id_list[i], name) == 0)
//			return i;
//	}
//	return -1;
//}

//void main(void) {
//	char str[32] = "You are beautiful";
//	char str2[] = "very ";
//
//	memmove(str + 13, str + 8, 10);
//	memmove(str + 8, str2, strlen(str2));
//	puts(str);
//}

//int main() {
//	int i=5;
//	puts("5초 후에 이 문구가 사라집니다.");
//	Sleep(1000);
//	while(i!=0){
//		printf("%d\n", i);
//		Sleep(1000);
//		i--;
//	}
//	system("cls");
//	puts("사라졌습니다");
//	Sleep(3000);
//	puts("신기하죠?");
//	Sleep(1000);
//	puts("고생하셨습니다");
//}