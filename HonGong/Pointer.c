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

	// ���= 10, printf ��ȯ�� = 14, ��? -> ��µǴ� <1 num �� : 10> ���� \n ���� �����ؼ� ���ڰ����� ���ϸ� 14�� ���´�. %d�� 10���� �ٲٰ� �����Ѵ�.
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