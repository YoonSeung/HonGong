#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>


//void main()
//{
//	int arScore[2][3];
//	int cla, stu;
//	int sum[2];
//	int maxScore = 0;
//	int maxc, maxs;
//
//	arScore[0][0] = 92;
//	arScore[0][1] = 84;
//	arScore[0][2] = 76;
//	arScore[1][0] = 88;
//	arScore[1][1] = 72;
//	arScore[1][2] = 98;
//
//	for (cla = 0; cla < 2; cla++)
//	{
//		sum[cla] = 0;
//		for (stu = 0; stu < 3; stu++)
//		{
//			sum[cla] += arScore[cla][stu];
//			if (maxScore < arScore[cla][stu])
//			{
//				maxScore = arScore[cla][stu];
//				maxc = cla;
//				maxs = stu;
//			}
//		}
//		printf("%d�� : ����=%d��, %d��\n", cla + 1, sum[cla], sum[cla] / 3);
//	}
//	printf("�ְ������ %d�� %d�� �л��� %d ���Դϴ�.\n", maxc, maxs, maxScore);
//}



//
//int main(void)
//{
//	char road[10][10];
//	int i, j;
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d��%d������ �Է��ϼ��� : ", i, j);
//			scanf("%s\n", &road[i][j]);
//		}
//	}
//
//	printf("%s\n", road[10][10]);
//}

//int main(void)
//{
//	//2���� �迭 ���� �� �ʱ�ȭ
//	int num[3][4] = {
//		{1, 2, 3, 4},
//		{5, 6, 7, 8},
//		{9,10,11,12}
//	};
//
//	int i, j;
//
//	//�迭 ��� ��ü ��� �Լ� 
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%5d", num[i][j]);
//		}
//		printf("\n");
//	}
//
//	//================ȥ�� �غ���
//		//2���� �迭 ���� �� �ʱ�ȭ
//
//	int i, j;
//
//	//�迭 ��� ��ü ��� �Լ� 
//
//}

//int main(void)
//{
//	//2���� �迭 ���� 
//	char animal[5][20];
//
//	//�ݺ� ���� ���� ����
//	int i;
//
//	//���� �� ������ ���� ����
//	int count;
//
//	//���� �� ��� 
//	count = sizeof(animal) / sizeof(animal[0]);
//
//	//�迭�� ���ڿ� �Է� �Լ� 
//	for (i = 0; i < count; i++)
//	{
//		scanf("%s", animal[i]);
//	}
//
//	//�迭 ���ڿ� ��� �Լ� 
//	for (i = 0; i < count; i++)
//	{
//		printf("%s\t", animal[i]);
//	}
//}
//
//// =====================�ٽ� �غ���
//int main(void)
//{
//	//2���� �迭 ���� 
//
//	//�ݺ� ���� ���� ����
//
//	//���� �� ������ ���� ����
//
//	//���� �� ��� 
//
//	//�迭�� ���ڿ� �Է� �Լ� 
//
//
//	//�迭 ���ڿ� ��� �Լ� 
//
//}

//========================================================================================================================
//
//int main(void)
//{
//	char animal1[5][10] = {
//		{'d', 'o', 'g', '\0'},
//		{'t', 'i', 'g', 'e', 'r', '\0'},
//		{'r', 'a', 'b', 'b', 'i',' t', '\0'},
//		{'h', 'o', 'r', 's', 'e', '\0'},
//		{'c', 'a', 't', '\0'}
//	};
//
//	//���ڿ� ��� �� �྿ �ʱ�ȭ, ���Ǽ� ����
//	char animal2[][10] = { "dog", "tiger", "rabbit", "horse", "cat" };
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s ", animal1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s ", animal2[i]);
//	}
//}

//int main(void)
//{
//	int score[2][3][4] = {
//		{{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
//		{{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
//	};
//
//	int i, j, k;
//
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d�� ����...\n", i + 1);
//		for (j = 0; j < 3; j++)
//		{
//			for (k = 0; k < 4; k++)
//			{
//				printf("%5d", score[i][j][k]);
//			}
//			printf("\n");
//		}
//
//		printf("\n");
//	}
//}

//int main(void)
//{
//	char mark[5][5] = { 0 };
//	int i, j;
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++)
//		{
//			if (i + j == 4 || i == j) mark[i][j] = 'x';
//			else mark[i][j] = " ";
//		}
//	}
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++)
//		{
//			printf("%c", mark[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main(void)
//{
//	char *pary[5];
//	int i;
//
//	pary[0] = "dog";
//	pary[1] = "elephant";
//	pary[2] = "horse";
//	pary[3] = "tiger";
//	pary[4] = "lion";
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", pary[i]);
//	}
//}

//
//int main(void)
//{
//	int ary1[4] = { 1,2,3,4 };
//	int ary2[4] = { 5,6,7,8 };
//	int ary3[4] = { 21,22,23,24 };
//	int *pary[3] = { ary1, ary2, ary3 };
//
//	int i,j;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%5d", pary[i][j]);
//		}
//		printf("\n");
//	}
//}

//void swap_ptr(char **ppa, char **ppb);
//int main(void)
//{
//	char *pa = "Success";
//	char *pb = "Failure";
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//	swap_ptr(&pa, &pb);
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//}
//void swap_ptr(char **ppa, char **ppb)
//{
//	char *pt;
//
//	pt = *ppa;
//	*ppa = *ppb;
//	*ppb = pt;
//}

//void print_str(char **pps, int cnt);
//int main(void)
//{
//	char *ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
//	int count;
//
//	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
//	print_str(ptr_ary, count);
//}
//
//void print_str(char **pps, int cnt)
//{
//	int i;
//	for (i = 0; i < cnt; i++)
//	{
//		printf("%s\n", pps[i]);
//	}
//}

//int main(void)
//{
//	int ary[5];
//
//	printf("	  ary�� : %u\t", ary);
//	printf(" ary�� �ּ� : %u\n", &ary);
//	printf("	ary + 1	: %u\t", ary + 1);
//	printf("	 &ary+1 : %u\n", &ary + 1);
//}

//int main(void)
//{
//	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int(*pa)[4];
//	int i, j;
//	pa = ary;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%5d", pa[i][j]);
//		}
//		printf("\n");
//
//	}
//}

//void print_ary(int(*)[4]);
//int main(void)
//{
//	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	print_ary(ary);
//}
//
//void print_ary(int(*pa)[4])
//{
//	int i, j;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%5d", pa[i][j]);
//		}
//		printf("\n");
//	}
//}

//
//struct tag_Friend {
//	char Name[10];
//	int Age;
//	double Height;
//};
//
//void main()
//{
//	struct tag_Friend Friend;
//
//	strcpy(Friend.Name, "�ƹ���");
//	Friend.Age = 30;
//	Friend.Height = 178.2;
//
//	printf("�̸� = %s, ���� = %d, Ű = %.1f\n", Friend.Name, Friend.Age, Friend.Height);
//}