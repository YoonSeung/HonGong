#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//1번 문제 
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
	}
/*
//직사각형찍기 5,3 입력했을때 
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