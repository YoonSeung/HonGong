#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>


//int main(void)
//{
//	char str1[80] = "strawberry";				//char �迭 ���ڿ� �ʱ�ȭ => char arr1[] = "red";
//	char str2[80] = "apple";					//char �迭 ���ڿ� �ʱ�ȭ => char arr2[] = "blue"
//	char *ps1 = "banana";						//�����ͷ� ���ڿ� ��� ���� => char* parr1 = "green"
//	char *ps2 = str2;							// �����ͷ� �迭 ���� => char* parr2 = arr1;
//							// ���� �߰��غ���
//
//	printf("���� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, str2);							//�ٸ� char �迭 ���ڿ� ���� => strcpy(arr1, arr2); 
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps1);							//���ڿ� ����� ������ ������ ��� => strcpy(arr1, parr1);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps2);							//�迭�� ������ ������ ��� => strcpy(arr1, parr2);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, "banana");						//���ڿ� ��� ���=> strcpy(arr1, "yellow");
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//}


//void main(void)
//{
//	char str1[] = "abcd";
//	char str2[] = "123456789";
//
//	//strncpy(str2, str1, 10);
//	//puts(str2);
//
//	strncpy(str2 + 1, str1 + 1, 9);
//	puts(str2);
//}

//void main(void)
//{
//	char str[] = "������� õ���."; //�ѱ��� 2����Ʈ ����
//
//	strncpy(str + 9, "�ٺ�", 4);
//	puts(str);
//}

//void main(void)
//{
//	char str[] = "abcd";
//	int len = strlen(str);
//	int size = sizeof(str);
//
//	printf("%d\n", len);
//	printf("%d\n", size);
//}

//int main(void)
//{
//	//�迭 �ʱ�ȭ
//	char str[20] = "mango tree";
//
//	//"apple-pie"���� �ټ� ���ڸ� ����
//	strncpy(str, "apple-pie", 5);
//
//	//����� ���� ���
//	printf("%s\n", str);
//
//	//=====�Ⱥ��� �ٽ� Ǯ���
//
//	//�迭 �ʱ�ȭ
//	
//
//	//"apple-pie"���� �ټ� ���ڸ� ����
//
//
//	//����� ���� ���
//
//}

//int main(void)
//{
//	//���ڿ� �ʱ�ȭ
//	char str[80] = "straw";
//
//	//str �迭�� ���ڿ� ���̱�
//	strcat(str, "berry");
//	printf("%s\n", str);
//
//	//str �迭�� 3���� ���� ���̱�
//	strncat(str, "piece", 3);
//	printf("%s\n", str);
//
//	char dest[20] = "�̼���";
//	char src[] = " �屺";
//
//	strncat(dest, src,3); //3����Ʈ �߰��ϰڴ�( �ѱ��� 2����Ʈ�ϱ� "_��" �� ���̰ڴ� �ǹ�
//	printf("%s\n", dest);
//
//	//===== �ٽ� Ǯ��� =====//
//
//	//���ڿ� �ʱ�ȭ
//	
//
//	//str �迭�� ���ڿ� ���̱�
//	
//	printf("%s\n", str);
//
//	//str �迭�� 3���� ���� ���̱�
//	
//	printf("%s\n", str);
//
//	//���ڿ� �迭 �ʱ�ȭ1
//	
//	//���ڿ� �迭 �ʱ�ȭ2
//
//	//3����Ʈ �߰��ϰڴ�( �ѱ��� 2����Ʈ�ϱ� "_��" �� ���̰ڴ� �ǹ�
//
//
//	printf("%s\n", dest);
//}


void main(void)
{
	char si[] = "����";
	char ku[] = "���빮";
	char dong[] = "ȸ��";
	char juso[64]; //�迭���� �ʱ�ȭ �������

	strcpy(juso, si);
	strcat(juso, "�� ");
	strcat(juso, ku);
	strcat(juso, "�� ");
	strcat(juso, dong);
	strcat(juso, "��");

	printf("%s\n", juso);
}