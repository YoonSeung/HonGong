#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h> //�����Ҵ��� ���� ���� ����ϴ� ���
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
//	printf("01 �� ������ ��\n");
//	printf("02 �� ������ ��\n");
//	printf("03 �� ���� �߿��� ū �� ���\n");
//	printf("���ϴ� ������ �����ϼ��� : ");
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
//	printf("�� ������ ���� �Է��ϼ��� : ");
//	scanf("%d%d", &a, &b);
//	res = fp(a, b);
//	printf("������� : %d\n", res);
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
//	//���� �Ҵ� ������ ������ ������ ����
//	int *pi;
//	double *pd;
//
//	//�޸� ���� �� �� �� ������ ����
//	pi = (int *)malloc(sizeof(int)); 
//
//	//���� �Ҵ翡 �����ϸ� NULL ������ ��ȯ
//	if (pi == NULL)
//	{
//		//���� ��Ȳ �޽��� ���
//		printf("#�޸𸮰� ����\n");
//		
//		//���α׷� ����
//		exit(1);
//	}
//	pd = (double *)malloc(sizeof(double));
//
//	//�����ͷ� ���� �Ҵ� ���� ���
//	*pi = 10;
//	*pd = 3.4;
//
//	printf("������ ��� : %d\n", *pi);
//	printf("�Ǽ��� ��� : %.1lf\n", *pd);
//
//	//�Ҵ�����
//	free(pi);
//	free(pd);
//
//}

////ȥ	��	��	��	��
//int main(void)
//{
//	//���� �Ҵ� ������ ������ ������ ����
//	
//
//	//�޸� ���� �� �� �� ������ ����
//	
//
//	//���� �Ҵ翡 �����ϸ� NULL ������ ��ȯ
//	
//	{
//		//���� ��Ȳ �޽��� ���
//		printf("#�޸𸮰� ����\n");
//
//		//���α׷� ����
//
//	}
//	
//	//�Ǽ��� �����Ҵ�
//	pd = (double *)malloc(sizeof(double));
//
//	//�����ͷ� ���� �Ҵ� ���� ���
//
//
//	printf("������ ��� : %d\n", *pi);
//	printf("�Ǽ��� ��� : %.1lf\n", *pd);
//
//	//�Ҵ�����
//
//
//}




////�� �ȵǴ��� Ȯ���غ���
//char* solution(int n) {
//	// ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
//	char* answer = (char*)malloc(sizeof(char)*(n+1));
//	char str[10000] = { '\0' }; //cpy�Լ��� ���� ����
//	char a[] = "��";
//	char b[] = "��";
//
//	answer = str;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (i % 2 == 0) {
//			strcat(str[i], "��");
//		}
//		else
//		{
//			strcat(str[i],"��");
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
//	//�Ҵ��� ���� ������ ������ ������
//	int *pi;
//	//�� ���� �Ҵ��� ���� ������ ũ��, int�� ���� 5����
//	int size = 5;
//	//���� �Էµ� ��� ����
//	int count = 0;
//	//����� �Է��� ����
//	int num;
//	//�ݺ� ���� ����
//	int i;
//
//	pi = (int *)calloc(size, sizeof(int));
//	while (1)
//	{
//		printf("����� �Է��ϼ��� =>");
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
//	char arps[5][9] = { "�����","��","������ź","����","������" };
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
//		printf("%d���� �Ǹŷ� = %d\n", i + 1, GetTotalForWeek(&ari[i]));
//	}
//}

//int main(void)
//{
//	//�ӽ� char �迭
//	char temp[80];
//	//���� �Ҵ� ������ ������ ������ �迭
//	char *str[3];
//	//�ݺ� ���� ����
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���ڿ��� �Է��ϼ��� : ");
//
//		//!! ���ڿ� �Է�
//		gets(temp);
//		//���ڿ� ���� ���� �Ҵ�
//		str[i] = (char *)malloc(strlen(temp)+1); // null ������ �����ؾ� �ϱ� ������ +1�� �Ѱ��̴�.
//		strcpy(str[i], temp);
//	}
//
//	//�Էµ� ���ڿ� ���
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//	
//	//�����Ҵ� ���� ��ȯ 
//	for (i = 0; i < 3; i++)
//	{
//		free(str[i]);
//	}
//}
//
////=====================ȥ �� �� �� �� 
////int main(void)
////{
////	//�ӽ� char �迭
////
////	//���� �Ҵ� ������ ������ ������ �迭
////
////	//�ݺ� ���� ����
////
////
////	for (i = 0; i < 3; i++)
////	{
////		printf("���ڿ��� �Է��ϼ��� : ");
////
////		//!! ���ڿ� �Է�
////
////		//���ڿ� ���� ���� �Ҵ�
////
////
////	}
////
////	//�Էµ� ���ڿ� ���
////
////
////	//�����Ҵ� ���� ��ȯ 
////
////}

//================================================================================================================================================

////���� �Ҵ� ������ ���ڿ��� ����ϴ� �Լ� ���� 
//void print_str(char **ps);
//
//int main(void)
//{
//	//�ӽ� char �迭
//	char temp[80];
//	//���ڿ��� ������ ������ �迭, �� �����ͷ� �ʱ�ȭ
//	char *str[21] = { 0 };
//	//�ݺ� ���� ����
//	int i = 0;
//
//	//�ִ� ���� ���� �ݺ�
//	while (i < 20)
//	{
//		printf("���ڿ��� �Է��ϼ��� : ");
//		gets(temp);
//		//end �� �ԷµǸ� �ݺ� ����
//		if (strcmp(temp, "end") == 0) break; //cmp�� ���ڿ����� �ش� �ܾ ������� 0�� ���� // �����ߴ����� �� ���ڿ��� ������ ���Ҷ� ���� �̿�
//		//���ڿ� ���� ���� �Ҵ�
//		str[i] = (char*)malloc(strlen(temp) + 1);
//		//���� �Ҵ� ������ ���ڿ� ����
//		strcpy(str[i], temp);
//		i++;
//	}
//	//�Է��� ���ڿ� ���
//	print_str(str);
//	//str�� ����� ���ڿ��� ���� ������ ���� �Ҵ� ���� ��ȯȯ
//	for (i = 0; str[i] != NULL; i++)
//	{
//		free(str[i]);
//	}
//}
//
////�����Ҵ翵���� ���ڿ��� ����ϴ� �Լ� ��� ���� 
//void print_str(char **ps)
//{
//	//������ �迭 ���� �� �����Ͱ� �ƴ� ���� �ݺ��ض�
//	while (*ps != NULL)
//	{
//		//ps�� ����Ű�� ���� ������ �迭�� ���
//		printf("%s\n", *ps);
//		//ps�� ���� �迭 ��Ҹ� ����Ų��.
//		ps++;
//	}
//}

//===========ȥ		��		��		��		��

//���� �Ҵ� ������ ���ڿ��� ����ϴ� �Լ� ���� 
void print_str(char **ps);

int main(void)
{
	//�ӽ� char �迭 temp ����
	char temp[80];
	//���ڿ��� ������ ������ �迭str, �� �����ͷ� �ʱ�ȭ
	char* str[21] = { 0 };	
	//�ݺ� ���� ����
	int i = 0;

	//�ִ� ���� ���� �ݺ�
	while(i<20 )
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);
		//end �� �ԷµǸ� �ݺ� ����
		if (strcmp(temp, "end") == 0)break;
		//���ڿ� ���� ���� �Ҵ�
		str[i] = (char*)malloc(strlen(temp) + 1);
		//���� �Ҵ� ������ ���ڿ� ����
		strcpy(str[i], temp);
	}
	//�Է��� ���ڿ� ���
	print_str(str);
	//str�� ����� ���ڿ��� ���� ������ ���� �Ҵ� ���� ��ȯ
	for (i=0; str[i] != NULL ; i++)
	{
		free(str[i]);
	}
}

//�����Ҵ翵���� ���ڿ��� ����ϴ� �Լ� ��� ���� 
void print_str(char **ps)
{
	//������ �迭 ���� �� �����Ͱ� �ƴ� ���� �ݺ��ض�
	while ( *ps != NULL)
	{
		//ps�� ����Ű�� ���� ������ �迭�� ���
		printf("%s\n", *ps);
		//ps�� ���� �迭 ��Ҹ� ����Ų��.
		*ps++;
	}
}