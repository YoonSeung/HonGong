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
//						
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

//===============================================================================================================================================//

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

//===============================================================================================================================================//

//int main(void)
//{
//	//�迭 �ʱ�ȭ
//	//char str[20] = "mango tree";
//
//	//"apple-pie"���� �ټ� ���ڸ� ����
//	//strncpy(str, "apple-pie", 5);
//
//	//����� ���� ���
//	//printf("%s\n", str);
//
//	//=====�Ⱥ��� �ٽ� Ǯ���
//
//	//�迭 �ʱ�ȭ
//	char ch[] = "mango tree";
//
//	//"apple-pie"���� �ټ� ���ڸ� ����
//	strcpy(ch, "apple-pie", 5);
//
//	//����� ���� ���
//	printf("%s\n", ch);
//}

//===============================================================================================================================================//

//int main(void)
//{
//	////���ڿ� �ʱ�ȭ
//	//char str[80] = "straw";
//
//	////str �迭�� ���ڿ� ���̱�
//	//strcat(str, "berry");
//	//printf("%s\n", str);
//
//	////str �迭�� 3���� ���� ���̱�
//	//strncat(str, "piece", 3);
//	//printf("%s\n", str);
//
//	//char dest[20] = "�̼���";
//	//char src[] = " �屺";
//
//	//strncat(dest, src,3); //3����Ʈ �߰��ϰڴ�( �ѱ��� 2����Ʈ�ϱ� "_��" �� ���̰ڴ� �ǹ�
//	//printf("%s\n", dest);
//
//	//===== �ٽ� Ǯ��� =====//
//
//	//���ڿ� �ʱ�ȭ
//	char str[80] = "straw"; //�� ���ڿ� �迭�� cat�� �߰��ϰڴٴϱ� �̸� ũ�⸦ ũ�� �����������
//
//	//str �迭�� ���ڿ� ���̱�
//	strcat(str, "berry");
//
//	printf("%s\n", str);
//
//	//str �迭�� 3���� ���� ���̱�
//	strncat(str, "piece", 3);
//	printf("%s\n", str);
//
//	//���ڿ� �迭 �ʱ�ȭ1
//	char str2[80] = "�̼���";
//	//���ڿ� �迭 �ʱ�ȭ2
//	char str3[80] = " �屺";
//	//3����Ʈ �߰��ϰڴ�( �ѱ��� 2����Ʈ�ϱ� "_��" �� ���̰ڴ� �ǹ�
//	strncat(str2, str3, 3);
//
//	printf("%s\n", str2);
//}

//===============================================================================================================================================//

//void main(void)
//{
//	char si[] = "����";
//	char ku[] = "���빮";
//	char dong[] = "ȸ��";
//	char juso[64]; //�迭���� �ʱ�ȭ �������
//
//	strcpy(juso, si);
//	strcat(juso, "�� ");
//	strcat(juso, ku);
//	strcat(juso, "�� ");
//	strcat(juso, dong);
//	strcat(juso, "��");
//
//	printf("%s\n", juso);
//}

//===============================================================================================================================================//

//int main(void)
//{
//	//�� ���ڿ� �Է��� �迭
//	char str1[80], str2[80];
//
//	//�乮�ڿ� ������ ������
//	char *resp;
//
//	printf("2���� ���� �̸� �Է� : ");
//
//	//���ڿ� 2�� �Է�
//	scanf("%s%s", str1, str2);
//
//	//�迭�� �Էµ� ���ڿ��� ���� ��
//	if (strlen(str1) > strlen(str2))
//		resp = str1;
//	else
//		resp = str2;
//
//	//���
//	printf("%s\n", resp);
//
//	//====================== ȥ�� �غ��� 
//		//�� ���ڿ� �Է��� �迭
//
//
//	//�乮�ڿ� ������ ������
//
//
//	printf("2���� ���� �̸� �Է� : ");
//
//	//���ڿ� 2�� �Է�
//
//
//	//�迭�� �Էµ� ���ڿ��� ���� ��
//
//
//	//���
//	printf("%s\n", resp);
//}

//===============================================================================================================================================//

//void main(void)
//{
//	char capital[16];
//
//	printf("�츮������ ������ : ");
//	scanf("%s", capital);
//
//	if (strcmp(capital, "����") == 0)
//	{
//		printf("�����մϴ�. �����Դϴ�.");
//	}
//	else
//	{
//		printf("Ʋ�Ƚ��ϴ�.");
//	}
//}

//===============================================================================================================================================//

//int main(void)
//{
//	//���� ���ڿ� �ʱ�ȭ
//	char str1[80] = "pear";
//	char str2[80] = "peach";
//
//	printf("������ ���߿� ������ ���� �̸� : ");
//
//	//�迭 2�� �� 
//	if (strcmp(str1, str2) > 0)
//		printf("%s\n", str1);
//	else
//		printf("%s\n", str2);
//
//	//========ȥ���غ���
//
//		//���� ���ڿ� �ʱ�ȭ
//
//
//	printf("������ ���߿� ������ ���� �̸� : ");
//
//	//�迭 2�� �� 
//
//
//}

//===============================================================================================================================================//
////�Լ� ����
////char *my_strcpy(char *pd, char *ps);
////int main(void)
////{
////	//���ڿ� �ʱ�ȭ
////	char str[80] = "strawberry";
////
////	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
////
////	//���ڿ� apple ����
////	my_strcpy(str, "apple");
////
////	printf("�ٲ� �� ���ڿ� :  %s\n", str);
////
////	//printf�� Ȱ�� �ٸ����ڿ� ������ �غ���
////	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
////}
////char *my_strcpy(char *pd, char *ps)
////{
////	//���߿� ��ȯ�ϱ� ���� ������ �ʱ�ȭ
////	char *po = pd;
////
////	//strcpy ��ɰ� ������ ��� ���డ���ϰ� �Լ������غ���
////	while (*ps != '\0')
////	{
////		*pd = *ps;
////		pd++;
////		ps++;
////	}
////
////	*pd = '\0';
////
////	//��ȯ�� ����
////	return po;
//
////=======ȥ���غ���===============
//
////�Լ�����
//
//
//	int main(void)
//	{
//		//���ڿ� �ʱ�ȭ
//
//
//		printf("�ٲٱ� �� ���ڿ� : %s\n", str);
//
//		//���ڿ� apple ����
//	
//
//		printf("�ٲ� �� ���ڿ� :  %s\n", str);
//
//		//printf�� Ȱ�� �ٸ����ڿ� ������ �غ���
//		
//	}
//	char *my_strcpy(char *pd, char *ps)
//	{
//		//���߿� ��ȯ�ϱ� ���� ������ �ʱ�ȭ
//		
//
//		//strcpy ��ɰ� ������ ��� ���డ���ϰ� �Լ������غ���
//	
//
//		//��ȯ�� ����
//		return ;
//}

//===============================================================================================================================================//

////���ڿ� �߰��ϴ� �Լ�����
//char *my_strcat(char *pd, char *ps);
//int main(void)
//{
//	char str[80] = "strawberry";
//
//	printf("���ڿ� ������ : %s\n", str);
//
//	my_strcat(str, "apple");
//	printf("���ڿ� ���� �� : %s\n", str);
//
//	printf("�ٸ� ���ڿ� ���̱� : %s\n", my_strcat(str, " tree"));
//}
////���ڿ� �߰��ϴ� �Լ� ��� ����
//char *my_strcat(char *pd, char *ps)
//{
//	char *po = pd;
//
//	while (*pd != '\0')
//	{
//		pd++;
//	}
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	*pd = '\0';
//	return po;
//}
////=========ȥ�� �غ���
//	//���ڿ� �߰��ϴ� �Լ�����
//
//int main(void)
//{
//	
//
//	printf("���ڿ� ������ : %s\n", str);
//
//	
//	printf("���ڿ� ���� �� : %s\n", str);
//
//	printf("�ٸ� ���ڿ� ���̱� : %s\n", my_strcat(str, " tree"));
//}
////���ڿ� �߰��ϴ� �Լ� ��� ����
//char 
//{
//	
//
//	
//	return po;
//}

//===============================================================================================================================================//

////���ڿ� ���� �Լ� ����
//int my_strlen(char *ps);
//int main(void)
//{
//	//���ڿ� �迭 �ʱ�ȭ
//	char str[80] = "red����";
//
//	printf("���ڿ� ���� : %d\n", my_strlen(str));
//}
////���ڿ� ���̱��ϴ� �Լ� ��� ����
//int my_strlen(char *ps)
//{
//	int cnt = 0;
//
//	while (*ps != '\0')
//	{
//		cnt++;
//		ps++;
//	}
//	return cnt;
//}
//
////=============ȥ���غ���
////���ڿ� ���� �Լ� ����
//
//int main(void)
//{
//	//���ڿ� �迭 �ʱ�ȭ
//	
//
//	printf("���ڿ� ���� : %d\n", my_strlen(str));
//}
////���ڿ� ���̱��ϴ� �Լ� ��� ����


//===============================================================================================================================================//

//int my_strcmp(char *pd, char *ps);
//int main(void)
//{
//	char str[80] = "red����";
//	char str2[80];
//	
//	printf("������ ����� �ѱ��� �Է��ϼ���(��:red����) : \n"  );
//	scanf("%s\n", str2);
//	if (my_strcmp(str, str2) == 0)
//		printf("���� ������ ���� �������Դϴ�.");
//	else
//		printf("���� ������ ���� �ٸ����Դϴ�.");
//	
//}
//int my_strcmp(char* pa, char* pb)
//{
//	while ((*pa == *pb) && (*pa != '\0'))
//	{
//		pa++;
//		pb++;
//	}
//
//	if (*pa > *pb)return 1;
//	else if (*pa < *pb)return -1;
//	else return 0;
//
//}

//===============================================================================================================================================//
//
//void main(void)
//{
//	char str[256];
//	char *ptr;
//	int count = 0;
//
//	printf("�ƹ� ���ڳ� �Է��ϼ���(������� �ִ� 255����)");
//	scanf("%s", str);
//	for (ptr = str;;)
//	{
//		ptr = strchr(ptr, 'a');
//		if (ptr == NULL)
//		{
//			break;
//		}
//		count++;
//		ptr++;
//	}
//	printf("�Է¹��ڿ����� a�� %d�� �ֽ��ϴ�.\n", count);
//}


//void main()
//{
//	char str[] = "I am a boy, you are a girl";
//	char *p;
//
//	p = strtok(str, " ,");
//	while (p != NULL)
//	{
//		puts(p);
//		p = strtok(NULL, " ,");
//	}
//}

//void main(void)
//{
//	char str[] = "Made in Korea";
//	char str2[16];
//
//	strcpy(str2, str);
//	_strupr(str2);
//	printf("strupr=> %s\n", str2);
//
//	strcpy(str2, str);
//	_strlwr(str2);
//	printf("strlwr => %s\n", str2);
//
//	strcpy(str2, str);
//	_strrev(str2);
//	printf("strrev => %s\n", str2);
//
//	strcpy(str2, str);
//	_strset(str2, '*');
//	printf("strset => %s\n", str2);
//}
//
//
//void main() //len ������ char *���� ��ҷ� ������ numũ���� �迭�� ���� �Ҵ��ϴ� ����
//{
//	int len = 10, num = 5, i;
//	char **name;
//
//	name = (char**)malloc(num * sizeof(char *));
//
//	for (i = 0; i < num; i++)
//	{
//		name[i] = (char *)malloc(len * sizeof(char));
//	}
//
//	for (i = 0; i < num; i++)
//	{
//		sprintf(name[i], "string %d", i);
//		puts(name[i]);
//	}
//
//	for (i = 0; i < num; i++)
//	{
//		free(name[i]);
//	}
//	free(name);
//}
//
//


//void my_puts(const char *str)
//{
//	while (*str)putch(*str++);
//	putch('\n');
//}
//
//void my_puts2(const char *str)
//{
//	int i;
//	for (i = 0; str[i]; i++)
//	{
//		printf("%s", str[i]);
//	}
//	printf("\n");
//}
//
//char *my_strcpy(char *dest, const char *src)
//{
//	char *d = dest;
//	while (*dest++ = *src++) { ; }
//	return d;
//}
//
//size_t my_strlen(const char *str)
//{
//	const char *p;
//	for (p = str; *p; p++) { ; }
//	return p - str;
//}
//
//size_t my_strlen2(const char *str)
//{
//	int i;
//	for (i = 0; str[i]; i++) { ; }
//	return i;
//}
//
//char *my_strcat(char *dest, const char *src)
//{
//	my_strcpy(dest + my_strlen(dest), src);
//	return dest;
//}
//
//char *my_strchr(const char *string, int c)
//{
//	while (*string)
//	{
//		if (*string == c)
//		{
//			return (char *)string;
//		}
//		string++;
//	}
//	return NULL;
//}
//
//char *my_strstr(const char *string, const char *strSearch)
//{
//	const char *s, *sub;
//
//	for (; *string; string++)
//	{
//		for (sub = strSearch, s = string; *sub && *s && *s == *sub; sub++, s++) { ; }
//		if(*sub == 0)return (char *)string;
//	}
//	return NULL;
//}
//
//void main()
//{
//	char dest[256];
//
//	my_puts("Korea");
//	my_puts2("�ѱ� �ߵȴ�.");
//
//	my_puts(my_strcpy(dest, "my string copy function test"));
//
//	printf("���ڿ� ���� %d\n", my_strlen("1234"));
//	printf("���ڿ� ���� %d\n", my_strlen2("123456789"));
//
//	char str[128] = "abcd";
//	my_puts(my_strcat(str, "efgh"));
//
//	printf("o�� %s���ϴ�.\n", my_strchr("notebook", 'o') == NULL ? "��" : "��");
//	printf("z�� %s������.\n", my_strchr("notebook", 'z') == NULL ? "��" : "��");
//	printf("under�� %s���ϴ�.\n", my_strstr("misunderstand", "under") == NULL ? "��" : "��");
//	printf("above�� %s���ϴ�.\n", my_strstr("misunderstand", "above") == NULL ? "��" : "��");
//
//}

//void main(void)
//{
//	char str[] = "Korea/Japan WorldCup";
//	char *ptr;
//	int count = 0;

//	
//	for (ptr = str;;)
//	{
//		ptr = strstr(ptr, "World");
//		if (ptr == NULL)
//		{
//			break;
//		}
//		count++;
//		ptr++;
//	}
//	printf("%d", count);
//}
