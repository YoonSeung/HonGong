/*Ư�����ڰ� ������� ������ �̵� �ϴ� �� �ľ�*/
//int main() {
//	char* str = "Hello Wolrd";
//
//	printf("%p -------- %s \n", str, str);
//
//	str = strchr(str, ' ');
//	str++;
//
//	printf("%p ------------%s\n", str, str);
//}


///*=========���� ���ڿ��� ���ܾ� ============ (220901) */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//
//// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
//int solution(const char* s) {
//	int answer = 0;
//	int len = strlen(s);
//	char* s2 = (char*)malloc(sizeof(char)* len);
//
//	char arr[10][6] = {"zero","one","two","three","four","five","six","seven","eight","nine" };
//
//	int temp = 0, pos = 0;
//	int iter = 0;
//
//	char * ptr = NULL;
//
//	for (iter = 0; iter < 10; iter++)
//		ptr = strstr(s, arr[i]);
//
//
//	for (int i = 0; i < len; i++) {
//		char* ptr = strstr(s, arr[i]);
//
//		if (ptr != NULL)		{
//			s2[i] = i + 48;
//			pos = strlen(ptr);
//			s += pos;
//
//		}
//
//
//		if (s[i] > 47 && s[i] < 58)		{
//			strcpy(s2[i], s[i]);
//		}
//		
//	}
//
//	for (int i = 0; i < strlen(s2) ; i++)
//	{
//		temp = (temp * 10) + (int)(s2[i] - 48);
//	}		
//	answer = temp;
//	return answer;
//}
//
//int main()
//{
//	
//	int res;
//
//
//	//char* s = "one4seveneight";
//	//res = solution(s);
//	//printf("%d\n", res);
//
//	char* s2 = "one";
//	res = solution(s2);
//	printf("%d\n", res);
//}

/* ===================== �̻��� ���� �����===================== */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
//char* solution(const char* s) {
//	// return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
//	char* answer = (char*)malloc(strlen(s));
//
//	for (int i = 0; i < strlen(s); i++)
//	{
//		if(s[i])
//	}
//
//	return answer;
//}



#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// id_list_len�� �迭 id_list�� �����Դϴ�.
// report_len�� �迭 report�� �����Դϴ�.
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
	// return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
	int* answer = (int*)malloc(sizeof(int) * id_list_len);
	char report_cpy[][22] = { 0, };
	int count = 0;

	for (int i = 0; i < report_len ; i++) { // �迭 ����
		strcpy(report_cpy[i], report[i]);
	}


	for (int i = 0; i < report_len; i++) { // report_cpy�� ��Ұ� ��ø�� ��� ��ø�� ��� null�� ����
		for (int j = 0; j < report_len - 1; j++) {
			if (report[i] == report[j + 1])
				strcpy(report_cpy[j + 1], NULL);
		}
	}

	for (int i = 0; i < id_list_len; i++)
	{
		if (strchr(report_cpy[i], ' ') != NULL) {
			
		}

		for (int j = 0; j < id_list_len - 1; j++)
		{
			if (strcmp(report[i], id_list[j]) == 0)
				count++;
		}			

	}



	return answer;
}

//int main() {
//	char id_list[][11] = { "muzi","frodo","apeach","neo" };
//	char report[][21] = { "muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi" };
//	int k = 0;
//	int len = strlen(id_list);
//	int re_len = strlen(report);
//	int* res = (int*)malloc(sizeof(int) * len);
//
//	char report_cpy[][21] = report;
//
//	//for (int i = 0; i < 5; i++) {
//	//	strcpy(report_cpy[i], report[i]);
//	//}
//
//	int i = 0;
//
//	for (i = 0; i < 5; i++) {
//		for (int j = 0; j < 5 - 1; j++) {
//			if (report[i] == report[j + 1])
//				strcpy(report_cpy[j + 1], NULL);
//		}
//	}
//
//}

//void main()
//
//{
//
//	int ar[] = { 1,2,4,4,5 };
//
//	int *p1, *p2, *p3;
//
//
//
//	p1 = &ar[0];
//
//	p2 = &ar[4];
//
//	p3 = p1 + (p2 - p1) / 2;
//
//
//
//	printf("�߰��� ��� = %d", *p3);
//
//}