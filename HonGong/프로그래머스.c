#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>


////�� ���� �Է������� ���簢�� ��� a�� ��, b �� �� (���)
//1. �� �ٿ� �� ���� *�� �������� Ȯ�� ( a �� ����)
//2. 1���� ������ ��� �Ͼ���� Ȯ�� ( b �� )



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


/*===================== ���ڿ��� ������ �ٲٱ� ===================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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
//	// ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
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


/*Ư�����ڰ� ������� ������ �̵� �ϴ� �� �ľ�*/
int main() {
	char* str = "Hello Wolrd";

	printf("%p -------- %s \n", str, str);

	str = strchr(str, ' ');
	str++;

	printf("%p ------------%s\n", str, str);
}