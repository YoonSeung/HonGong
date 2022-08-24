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
//		printf("%d반 : 총점=%d점, %d점\n", cla + 1, sum[cla], sum[cla] / 3);
//	}
//	printf("최고득점은 %d반 %d번 학생의 %d 점입니다.\n", maxc, maxs, maxScore);
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
//			printf("%d행%d열값을 입력하세요 : ", i, j);
//			scanf("%s\n", &road[i][j]);
//		}
//	}
//
//	printf("%s\n", road[10][10]);
//}

//int main(void)
//{
//	//2차원 배열 선언 및 초기화
//	int num[3][4] = {
//		{1, 2, 3, 4},
//		{5, 6, 7, 8},
//		{9,10,11,12}
//	};
//
//	int i, j;
//
//	//배열 요소 전체 출력 함수 
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%5d", num[i][j]);
//		}
//		printf("\n");
//	}
//
//	//================혼자 해보기
//		//2차원 배열 선언 및 초기화
//
//	int i, j;
//
//	//배열 요소 전체 출력 함수 
//
//}

//int main(void)
//{
//	//2차원 배열 선언 
//	char animal[5][20];
//
//	//반복 제어 변수 선언
//	int i;
//
//	//행의 수 저장할 변수 선언
//	int count;
//
//	//행의 수 계산 
//	count = sizeof(animal) / sizeof(animal[0]);
//
//	//배열에 문자열 입력 함수 
//	for (i = 0; i < count; i++)
//	{
//		scanf("%s", animal[i]);
//	}
//
//	//배열 문자열 출력 함수 
//	for (i = 0; i < count; i++)
//	{
//		printf("%s\t", animal[i]);
//	}
//}
//
//// =====================다시 해보기
//int main(void)
//{
//	//2차원 배열 선언 
//
//	//반복 제어 변수 선언
//
//	//행의 수 저장할 변수 선언
//
//	//행의 수 계산 
//
//	//배열에 문자열 입력 함수 
//
//
//	//배열 문자열 출력 함수 
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
//	//문자열 상수 한 행씩 초기화, 행의수 생략
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
		printf("%d반 점수...\n", i + 1);
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