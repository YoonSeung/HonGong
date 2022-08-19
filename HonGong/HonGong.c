#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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