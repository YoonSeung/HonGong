#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//------------- ������ �ּҰ� ã�ƺ��� �ǽ�
/*
int main(void) {
	int *array[4] = { 5,6,7,8 };

	char *pi;




	printf("%p = %p\n", array, array + 1);
	printf("%p" , &pi);
}

// �����͸� Ȱ���ؼ� �� �����ϱ�.
int main(void) {
	int Num = 629;
	int *pi;
	char test[100];

	memset(test, 0xff, 100); // test�迭���� ���� 0xff�� 100�� �����ض�

	pi = &Num;
	*pi = 1;
	printf("Num���� %d�Դϴ�.\n", Num);
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

	strcpy(p1->name, "ȫ�浿");
	p1->age = 30;
	strcpy(p1->address, "����� ��걸");

	printf("�̸� : %s\n", p1->name);
	printf("���� : %d\n", p1->age);
	printf("�ּ� : %s\n", p1->address);

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

	//�迭�� �����Ⱚ ����غ��� ������
	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
	{
		printf("%d  ", arr1[i]);
	}
	printf("\n\n");

	//�迭�ʱ�ȭ�� for������ Ȱ���غ���
	for (int i = 0; i < 20; ++i)
	{
		arr1[i] = 0;
		
	}
	printf("for		: ");
	printAll(arr1, 20);

	//�迭�� memset �Լ��� �̿��ؼ� �ʱ�ȭ
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

	// ���= 10, printf ��ȯ�� = 14, ��? -> ��µǴ� <1 num �� : 10> ���� \n(����) ���� �����ؼ� ���ڰ����� ���ϸ� 14�� ���´�. %d�� 10���� �ٲٰ� �����Ѵ�. \n�� ������ĭ�̴�.
	//1
	printf("1 num �� : %d\n", num);

	//���= 0000000A, printf ��ȯ��= 20 -> �� 0000000A=> %p�� �ּ�����(������)�� �����ؼ� 16������ �ٲپ� ����Ѵ�. �����Ϸ��� ���� 0x�� ǥ���ɼ��ְ� �ƴҼ��� �ִ�.
	//���� �����Ϸ� OSü���� 32��Ʈ�϶� 8�ڸ�, 64��Ʈ�϶� 16�ڸ��� ��Ÿ������. ���� �ǽ��� ��� 32��Ʈ �����Ϸ��� ����ϱ⿡ 0000000A�� ���´�.
	//2
	printf("2 num �� : %p\n", num);

	// ���= a, printf ��ȯ��= 13 -> %x�� �ܼ��� ���ڸ� �ҹ��������� 16������ �ٲ۴�. �빮�ڴ� %X, �� ��� 10���� 10�� 16������ a�� ǥ�õǰ� x�� ����߱⿡ �ҹ��ڷ� ��Ÿ������.
	//3
	printf("3 num �� : %x\n", num);

	// num�� 10�� ����Ǿ��ִ� �ּҸ� 10������ ǥ���Ѵ�. 
	//4
	a = printf("4 num �ּҰ� : %d\n", &num);

	// �ּҸ� 16������ ǥ�� 
	//5
	b = printf("5 num �ּҰ� : %p\n", &num);

	// 16���� �� 0�� �����ؼ� ǥ�� , 
	//6
	c = printf("6 num �ּҰ� : %x\n", &num);

	// ptr���� num�� �ּҰ� ������ d�̱⿡ 10���� ǥ�����״� 4�� ���� �� / ��ȯ�� Ȯ��
	//7
	printf("7 ptr �� : %d\n", ptr);

	// ���� 10 �� ��ȯ���� 35���� �ö󰡴���..
	//8
	d = printf("8 ptr �ּҰ��� ����Ű�� ���� �� %d\n", *ptr);

	printf("\n");
	printf("4�� printf ��ȯ�� : %d\n", a);//�� ��ȯ���� ��°��� + 2�� �Ǵ���
	printf("5�� printf ��ȯ�� : %d\n", b);//���� ���� �ǹ�
	printf("6�� printf ��ȯ�� : %d\n", c);//���� �ּҰ��� ���� 0�� ������ ���� ������
	printf("8�� printf ��ȯ�� : %d\n", d);// ���� 10�� ���̳�
	�ѱ��� 2����Ʈ/ ����,����,����� 1����Ʈ
	
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
	printf("���� y �ּҰ� : %p\n", &y);
	printf("�����ͺ��� z �� �ּҰ� : %p\n", z);
	printf("�����ͺ��� z�� ����Ű�� �� : %d\n\n", *z);

	printf("1 z = %p : z+1 = %p \n", z, z + 1);// z�� 
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
		printf("%d�� �л��� ���� �Է� : ", i + 1);
		scanf("%d", &arScore[i]);
		printf("%d�� �л� ���� �Է� ���� �ּҴ� : %p\n", i + 1, &arScore[i]);
	}

	sum = 0;
	for (i = 0; i < sizeof(arScore) / sizeof(arScore[0]); i++)
	{
		sum += arScore[i];
	}

	printf("\n ������ %d���̰� ����� %d �Դϴ�.\n", sum, sum / (sizeof(arScore) / sizeof(arScore[0])));
	printf("%p => %d", &arScore[1], arScore[1]);

	int a[] = { 10,20,30,40,50 };
	printf("�迭 a[0]�� �ּҰ� = %p \n", a);
	printf("�迭 a[1]�� �ּҰ� = %p \n", a + 1);
	printf("�迭 a[0]�� �� = %d \n", *a);
	printf("�迭 a[1]�� �� = %d \n", *(a + 1));

	int a;
	int *pa;

	pa = &a;
	*pa = 10;

	printf("&a = %p\n", &a);
	printf("�����ͷ� a �� ��� : %d\n", *pa);
	printf("���������� a�� ��� : %d\n", a);
	printf("**pa = %p\n\n\n", &pa);*/


	//================================================================================

	/*int ar[] = { 10, 20, 30, 40, 50 };// ar �迭 �ּҰ� 0x00D9F6D8
	int i, *ptr;

	ptr = ar;// == &ar == ptr �� 0x00D9F6D8

	printf("ptr => *ptr = %d ptr = %p &ptr = %p\n", *ptr, ptr, &ptr);
	printf("ar => *ar = %d / (ar==&ar) = %p \n\n", *ar, ar);
	for (i = 0; i < 5; i++)
	{
		printf("*ptr = %d       / ptr = %p		/ &ptr = %p\n", *ptr,		ptr,		&ptr);
		printf("*ptr+1 = %d	/ ptr+1 = %p	/ &ptr+1 = %p\n\n", *ptr + 1,	ptr + 1,	&ptr + 1); 
		*ptr++; // == *ptr


		// &ptr + 1�� &ptr ���� �ڷ��� byte ��ŭ �ּҰ� ����
		//&ptr ��, ptr������ �ּҰ��� *ptr++ �� �غ��� �����̴�. 
		//ptr���� ar�迭�� �ּҰ��� �� �ִ�. �׷��� *ptr�� ar�迭�� ù��° ���� ���´�. �װ����ٰ� ++ �� �ϸ� ���������� ������ �Ѿ��.
		//�� ar[0]���� ������°�� ���� ��Ų�ٴ� �ǹ��̴�. �׷��� ������ ar�迭�� �ּҰ��� �����ϰ� �ִ� &ptr�� �������� �ʰ� ��� ���� ���� ��� �ȴ�.
	}
	printf("\n");*/

	//================================================================================
	/*for (i = 0; i < 5; i++)
	{
		printf("%d��° %d %p %d %p %d %p\n", i + 1, *ptr, *ptr, ptr, ptr, &ptr, &ptr);
		printf("%d��° %d %p %d %p %d %p\n\n", i + 1, *ar, *ar, ar, ar, &ar, &ar);
		*++ptr;
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d��° %d %p %d %p %d %p\n", i + 1, *ptr, *ptr, ptr, ptr, &ptr, &ptr);
		printf("%d��° %d %p %d %p %d %p\n\n", i + 1, *ar, *ar, ar, ar, &ar, &ar);
		*(ptr++);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d��° %d %p %d %p %d %p\n", i + 1, *ptr, *ptr, ptr, ptr, &ptr, &ptr);
		printf("%d��° %d %p %d %p %d %p\n\n", i + 1, *ar, *ar, ar, ar, &ar, &ar);
		*(++ptr);
	}
}*/









