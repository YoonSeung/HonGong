#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

////num이 짝수면 Even, 홀수면 Odd를 출력하기(메모리 동적할당을 이용해서) (내가 직접 다시 해보기)
//	char* solution(int num) {
//		// 리턴할 값은 메모리를 동적 할당해주세요
//		
//		char* answer = (char*)malloc(5);
//		if (num % 2 == 0)
//			strcpy(answer, "Even");
//		else
//			strcpy(answer, "Odd");
//
//		return answer;
//
//	}
//
//	int main() {
//		char * result = NULL;
//
//		result = solution(1);
//		printf("%s\n", result);
//		free(result);
//
//		result = solution(100);
//		printf("%s\n", result);
//		free(result);
//	}

////두 수를 입력했을때 직사각형 찍기 a는 열, b 는 행 (통과)
//1. 한 줄에 몇 개의 *이 찍히는지 확인 ( a 개 찍힘)
//2. 1번의 과정이 몇번 일어나는지 확인 ( b 번 )
//int main(void) {
//	int a;
//	int b;
//
//
//	scanf_s("%d %d", &a, &b);
//
//	for (int i = 0; i < b; i++)
//	{
//		for (int j = 0; j <a; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


////배열 안의 요소의 평균값 구하기 
///*1. 배열의 길이 구하기
//2. 배열요소들의 합 구하기
//3. 요소들의 합 / 배열길이 결과 구하기
//4. 결과를 answer에 대입해서 출력하기*/
//double solution(int arr[], size_t arr_len)
//{
//	double answer = 0;
//	int sum = 0;
//	for (int i = 0; i < arr_len; i++)
//	{
//		sum = arr[i] + 
//	}
//
//}


////숫자문자열과 영단어
//int solution(const char* s);
//
//int main()
//{
//	int result;
//	char* s = "one4seveneight";
//	result = solution("one4seveneight");
//
//	printf("%d", );
//}
//
//int solution(const char* s)
//{
//	int answer = 0;
//	char s_word[] = {'zero','one','two','three','four','five','six','seven','eight','nine' };
//	
//
//	return answer;
//}

////문자열 다루기 기본
//bool solution(const char* s)
//{
//	bool answer = true;
//
//
//	for (int i = 0; i < (int)strlen(s); i++) 
//		// strlen에 int형변환 한 이유 = strlen는 0부터 양수길이(unsigned)를 리턴해준다. 하지만 i가 int로 선언되어있는데 int는 signed 즉 - 값을 가질 수 있어서 경고가 뜬다.
//	{
//		if (s[i] > 57)
//		{
//			answer = false;
//		}
//		else if (s[i]>47 && s[i] < 58)
//		{
//			answer = true;
//		}
//		else
//			answer = false;
//	}
//
//	return answer;
//}
//
//int main()
//{
//	bool result, result1;
//	result = solution("a234");
//	result1 = solution("1234");
//	
//	printf("%s\n", result ? "true" : "false" );
//	printf("%s\n", result1 ? "true" : "false");
//}