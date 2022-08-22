#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//num이 짝수면 Even, 홀수면 Odd를 출력하기(메모리 동적할당을 이용해서)
	/*char* solution(int num) {
		// 리턴할 값은 메모리를 동적 할당해주세요
		
		char* answer = (char*)malloc(5);
		if (num % 2 == 0)
			strcpy(answer, "Even");
		else
			strcpy(answer, "Odd");

		return answer;

	}

	int main() {
		char * result = NULL;

		result = solution(1);
		printf("%s\n", result);
		free(result);

		result = solution(100);
		printf("%s\n", result);
		free(result);
	}*/
/*
//두 수를 입력했을때 직사각형 찍기 a는 열, b 는 행 
1. 한 줄에 몇 개의 *이 찍히는지 확인 ( a 개 찍힘)
2. 1번의 과정이 몇번 일어나는지 확인 ( b 번 )
int main(void) {
	int a;
	int b;


	scanf_s("%d %d", &a, &b);

	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j <a; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

//배열 안의 요소의 평균값 구하기 
/*1. 배열의 길이 구하기
2. 배열요소들의 합 구하기
3. 요소들의 합 / 배열길이 결과 구하기
4. 결과를 answer에 대입해서 출력하기*/
double solution(int arr[], size_t arr_len)
{
	double answer = 0;
	int sum = 0;
	for (int i = 0; i < arr_len; i++)
	{
		sum = arr[i] + 
	}

}