#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//1�� ���� 
	/*char* solution(int num) {
		// ������ ���� �޸𸮸� ���� �Ҵ����ּ���
		
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
//���簢����� 5,3 �Է������� 
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