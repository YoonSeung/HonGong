#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//num�� ¦���� Even, Ȧ���� Odd�� ����ϱ�(�޸� �����Ҵ��� �̿��ؼ�)
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
	}*/
/*
//�� ���� �Է������� ���簢�� ��� a�� ��, b �� �� 
1. �� �ٿ� �� ���� *�� �������� Ȯ�� ( a �� ����)
2. 1���� ������ ��� �Ͼ���� Ȯ�� ( b �� )
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

//�迭 ���� ����� ��հ� ���ϱ� 
/*1. �迭�� ���� ���ϱ�
2. �迭��ҵ��� �� ���ϱ�
3. ��ҵ��� �� / �迭���� ��� ���ϱ�
4. ����� answer�� �����ؼ� ����ϱ�*/
double solution(int arr[], size_t arr_len)
{
	double answer = 0;
	int sum = 0;
	for (int i = 0; i < arr_len; i++)
	{
		sum = arr[i] + 
	}

}