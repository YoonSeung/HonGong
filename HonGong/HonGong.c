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

	printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
}

int main(void) {
	char frult[20] = "strawberry";
	//frult = "banana"; �迭 ���� �� ���� �����ڷ� ���ڿ� �Է� ���Ѵ�.

	printf("���� : %s\n", frult);
	strcpy(frult, "banana");
	printf("����´ : %s %s\n", frult, "jam");
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
	
	printf("������(kg)�� Ű(cm) �Է�: ");
	scanf("%d%lf", &kg, &cm);

	cm /= 100;

	BMI = cm * cm / (double)kg;

	if (20.0 <= BMI && BMI <= 25.0) {
		printf("ǥ���Դϴ�.\n");
	}
	else {
		printf("ü�߰����� �ʿ��մϴ�.");
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
	printf("������� %c�Դϴ�.\n", size);
}

int main(void) {
	int num1, num2, res;
	char x;

	printf("��Ģ���� �Է�(����) : ");
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
			printf("��������Դϴ�.");
			break;
		}
	else 
		printf("'%%'�� ��� �Ұ��մϴ�.");
}

int main(void) {
	{
		int input_number;
		int i;
		int sum = 0;

		printf("���ڸ� �Է��ϼ��� : ");
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
	printf("������ : %d\n Ƚ�� : %d\n", sum, count);
}


//3�� ��� ��� (�� 9�� ����� ������ �ʰ� �ϱ�) <continue�� Ȱ��>
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

void change(int a) //������ => �����ִ� a�� main���� ����Ǿ��ִ� a�� �ٸ���. �׷��� main�� a���� �����Ϸ��� �� change �Լ��� ����� main�� a���� ������� �ʴ´�.
{
	a = 11;
	printf("3 change a_ptr = %p\n", a);
}

void change2(int *a) { //������ �̷��� �����ͷ� �ּҰ��� Ȱ���� �����Ű�� ���� ����� �� �ִ�. ���� a�� main�� a�ʹ� �ٸ����� 
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
	printf("��ȯ�� : %d\n", result);
}

int get_num(void)
{
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);
	
	while (num < 0)
	{
		printf("����� �Է��ϼ���!\n");
		printf("��� �Է� : ");
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
	printf("1���� %d ���� ���� %d�Դϴ�.\n", a, sum_temp);
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
	printf("�빮�� : %c %c", cap, '\n');
	printf("�ҹ��� : %c", small);
}*/


//int main(void)
//{
//	char str[80];
//
//	printf("���ڿ� �Է� : ");
//	scanf("%s", str);
//	printf("ù ��° �ܾ� : %s\n", str);
//	scanf("%s", str);
//	printf("���� �����ִ� �ι�° �ܾ� : %s\n", str);
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

//=========== malloc �����Ҵ����� n���� �л� ���� �Է��� ����, ��� ���غ���
//void main()
//{
//	int* arScore;
//	int i, stNum;
//	int sum;
//
//	printf("�л��� �Է� : ");
//	scanf("%d", &stNum);
//	arScore = (int*)malloc(stNum * sizeof(int));
//	if (arScore == NULL)
//	{
//		printf("�޸𸮰� �����մϴ�.\n");
//		exit(0);
//	}
//
//	for (i = 0; i < stNum; i++)
//	{
//		printf("%d�� �л� ���� �Է� : ", i + 1);
//		scanf("%d", &arScore[i]);
//	}
//
//	sum = 0;
//	for (i = 0; i < stNum; i++)
//	{
//		sum += arScore[i];
//	}
//
//	printf("\n ������ %d���̰� ����� %d���Դϴ�.", sum, sum / stNum);
//	free(arScore);
//}

////malloc �Ҵ� �� realloc���� ���Ҵ��غ���
//void main()
//{
//	int* ar;
//
//	ar=(int*)malloc(5 * sizeof(int)); // �޸� ���� �Ҵ� int�������� ar�� int�� 4����Ʈ 5�� ���� �Ҿ��ش޶� ==> �� 20����Ʈ �Ҵ�
//	ar[4] = 1234; //5���� ������ 5��°�� 1234 ����
//
//	ar = (int*)realloc(ar, 10 * sizeof(int)); //20����Ʈ�Ҵ���� ar(5������) �� 10�� �������� �ø���ʹ� ==> 40 ����Ʈ�� �÷��� (���Ҵ�)
//	ar[9] = 5678; //10���� ������ 10��° 5678 ����
//
//	printf("ar[4]=%d, %p ar[9]=%d, %p\n", ar[4], ar, ar[9], ar); // ���� ó�� �Ҵ���� ar 20����Ʈ �ڿ� �̹� �޸𸮰� �����ϰ������� ar�����͵��� ��� ar�� �̻縦 ���Եȴ�. = �ٸ� �ּҷ� �̵� 
//	free(ar);
//}


//void InputName(char **pName)
//{
//	*pName = (char*)malloc(12);//12����Ʈ�Ҵ�
//	strcpy(*pName, "Cabin");
//}
//
//void main()
//{
//	char *Name;
//
//	InputName(&Name);
//	printf("�̸��� %s�Դϴ�.", Name);
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



