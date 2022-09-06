/*특정문자가 있을경우 포인터 이동 하는 법 파악*/
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


///*=========숫자 문자열과 영단어 ============ (220901) */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
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

/* ===================== 이상한 문자 만들기===================== */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//char* solution(const char* s) {
//	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
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
#include <string.h>

//// id_list_len은 배열 id_list의 길이입니다.
//// report_len은 배열 report의 길이입니다.
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
//	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
//	int* answer = (int*)malloc(sizeof(int) * id_list_len);
//	char report_cpy[][22] = { 0, };
//	int count = 0;
//
//	for (int i = 0; i < report_len ; i++) { // 배열 복사
//		strcpy(report_cpy[i], report[i]);
//	}
//
//
//	for (int i = 0; i < report_len; i++) { // report_cpy에 요소가 중첩인 경우 중첩인 요소 null로 변경
//		for (int j = 0; j < report_len - 1; j++) {
//			if (report[i] == report[j + 1])
//				strcpy(report_cpy[j + 1], NULL);
//		}
//	}
//
//	for (int i = 0; i < id_list_len; i++)
//	{
//		if (strchr(report_cpy[i], ' ') != NULL) {
//			
//		}
//
//		for (int j = 0; j < id_list_len - 1; j++)
//		{
//			if (strcmp(report[i], id_list[j]) == 0)
//				count++;
//		}			
//
//	}
//
//
//
//	return answer;
//}

//int main() {
//	char id_list[][11] = { "muzi","frodo","apeach","neo" };
//	char report[][21] = { "muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi","frode neo","muzi frodo" };
//	char cpy_report[7][21] = { 0, };
//	char attack[7][11] = { 0, };
//	char attacked[7][11] = { 0, };
//	char* ptr ;
//	int k = 0;
//	int i = 0, j=0 ;
//
//	strcpy(cpy_report, report);
//
//	for (i = 0; i < 7; i++) {
//
//		ptr = strtok(report[i], " ");
//		strcpy(attack[i], ptr);
//
//		ptr = strtok(NULL, " ");
//		strcpy(attacked[i], ptr);
//
//		
//	}
//
//	for (i = 0; i < 7; i++) {
//		for (j = 0; j < 7-i; j++) {
//			if (strcmp(report[i], report[j + 1]) == 0 ) {
//				strcpy(cpy_report[i], "0");
//			}
//		}
//	}
//
//
//	for (i = 0; i < 7; i++) {
//		printf("%s\n", cpy_report[i]);
//	}
//
	
	


	//while (report[i] != NULL) {
	//	if (strcmp(report[i], report[i + 1]) == 0)
	//		strcpy(report[i], NULL);
	//	i++;
	//}

	//for (int i = 0; i<5; i++)
	//{
	//	printf("%s\n", report[i]);
	//}
	//



	//char* report_cpy[] = { 0, };

	//for (int i = 0; i < 5; i++) {
	//	strcpy(report_cpy[i], report[i]);
	//}

	//for (int i = 0; i < 5; i++) {
	//	printf("%s\n", report_cpy[i]);
	//}

	//int i = 0;

	//for (i = 0; i < 5; i++) {
	//	for (int j = 0; j < 5 - 1; j++) {
	//		if (report[i] == report[j + 1])
	//			strcpy(report_cpy[j + 1], NULL);
	//	}
	//}

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
//	printf("중간의 요소 = %d", *p3);
//
//	return 0;
//}


///*특정문자가 있을경우 포인터 이동 하는 법 파악*/
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

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//// id_list_len은 배열 id_list의 길이입니다.
//// report_len은 배열 report의 길이입니다.
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
//	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
//
//	int temp[id_list_len][id_list_len];
//
//	for (int i = 0; i < id_list_len; ++i)
//	{
//		for (int j = 0; j < id_list_len; ++j)
//		{
//			temp[i][i] = 0;
//		}
//	}
//
//
//	for (int i = 0; i < report_len; ++i)
//	{
//		char* report_edit;
//		report_edit = strtok(report[i], " ");
//
//		int idx1 = 0;
//		for (int j = 0; j < id_list_len; ++j)
//		{
//			if (strcmp(id_list[j], report_edit) == 0)
//			{
//				idx1 = j;
//			}
//		}
//
//		report_edit = strtok(NULL, " ");
//		int idx2 = 0;
//		for (int j = 0; j < id_list_len; ++j)
//		{
//			if (strcmp(id_list[j], report_edit) == 0)
//			{
//				idx2 = j;
//			}
//		}
//		temp[idx1][idx2] = 1;
//	}
//
//	int result[id_list_len];
//	for (int j = 0; j < id_list_len; ++j)
//	{
//		result[j] = 0;
//		for (int i = 0; i < id_list_len; ++i)
//		{
//			if (temp[i][j] == 1)
//			{
//				result[j] += 1;
//			}
//		}
//	}
//
//
//	int* answer = (int*)malloc(id_list_len * sizeof(int));
//
//	for (int j = 0; j < id_list_len; ++j)
//	{
//		answer[j] = 0;
//		for (int i = 0; i < id_list_len; ++i)
//		{
//			if (temp[j][i] == 1 && result[i] >= k)
//			{
//				answer[j] += 1;
//			}
//		}
//	}
//
//
//	return answer;
//}