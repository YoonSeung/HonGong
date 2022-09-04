#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>


////두 수를 입력했을때 직사각형 찍기 a는 열, b 는 행 (통과)
//1. 한 줄에 몇 개의 *이 찍히는지 확인 ( a 개 찍힘)
//2. 1번의 과정이 몇번 일어나는지 확인 ( b 번 )



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


/*===================== 문자열을 정수로 바꾸기 ===================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//int solution(const char* s) {
//	char* str = (char*)malloc(5);
//	int answer = 0;
//	int len = strlen(str);
//	
//	str = strcpy(str, s);
//	
//	if(str[0])
//
//	return answer;
//}
//
//
//int main()
//{
//	char* str = "-1234";
//	int n = 0;
//
//	n = atoi(str);
//
//	printf("%d", n);
//}

//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//char* solution(int a, int b) {
//	// 리턴할 값은 메모리를 동적 할당해주세요.
//	char* answer = (char*)malloc(4);
//
//
//	return answer;
//}
//
//int main()
//{
//
//	return 0;
//}


/*특정문자가 있을경우 포인터 이동 하는 법 파악*/
int main() {
	char* str = "Hello Wolrd";

	printf("%p -------- %s \n", str, str);

	str = strchr(str, ' ');
	str++;

	printf("%p ------------%s\n", str, str);
}