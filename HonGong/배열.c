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

int main(void)
{
	int score[2][3][4] = {
		{{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
		{{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d�� ����...\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}

		printf("\n");
	}
}