#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>


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



