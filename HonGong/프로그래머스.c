#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

////num�� ¦���� Even, Ȧ���� Odd�� ����ϱ�(�޸� �����Ҵ��� �̿��ؼ�) (���� ���� �ٽ� �غ���)
//	char* solution(int num) {
//		// ������ ���� �޸𸮸� ���� �Ҵ����ּ���
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

////�� ���� �Է������� ���簢�� ��� a�� ��, b �� �� (���)
//1. �� �ٿ� �� ���� *�� �������� Ȯ�� ( a �� ����)
//2. 1���� ������ ��� �Ͼ���� Ȯ�� ( b �� )
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


////�迭 ���� ����� ��հ� ���ϱ� 
///*1. �迭�� ���� ���ϱ�
//2. �迭��ҵ��� �� ���ϱ�
//3. ��ҵ��� �� / �迭���� ��� ���ϱ�
//4. ����� answer�� �����ؼ� ����ϱ�*/
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


////���ڹ��ڿ��� ���ܾ�
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

////���ڿ� �ٷ�� �⺻
//bool solution(const char* s)
//{
//	bool answer = true;
//
//
//	for (int i = 0; i < (int)strlen(s); i++) 
//		// strlen�� int����ȯ �� ���� = strlen�� 0���� �������(unsigned)�� �������ش�. ������ i�� int�� ����Ǿ��ִµ� int�� signed �� - ���� ���� �� �־ ��� ���.
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