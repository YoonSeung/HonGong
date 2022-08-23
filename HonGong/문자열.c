#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>


//int main(void)
//{
//	char str1[80] = "strawberry";				//char 배열 문자열 초기화 => char arr1[] = "red";
//	char str2[80] = "apple";					//char 배열 문자열 초기화 => char arr2[] = "blue"
//	char *ps1 = "banana";						//포인터로 문자열 상수 연결 => char* parr1 = "green"
//	char *ps2 = str2;							// 포인터로 배열 연결 => char* parr2 = arr1;
//							// 예시 추가해보기
//
//	printf("최초 문자열 : %s\n", str1);
//
//	strcpy(str1, str2);							//다른 char 배열 문자열 복사 => strcpy(arr1, arr2); 
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, ps1);							//문자열 상수를 연결한 포인터 사용 => strcpy(arr1, parr1);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, ps2);							//배열을 연결한 포인터 사용 => strcpy(arr1, parr2);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, "banana");						//문자열 상수 사용=> strcpy(arr1, "yellow");
//	printf("바뀐 문자열 : %s\n", str1);
//}


//void main(void)
//{
//	char str1[] = "abcd";
//	char str2[] = "123456789";
//
//	//strncpy(str2, str1, 10);
//	//puts(str2);
//
//	strncpy(str2 + 1, str1 + 1, 9);
//	puts(str2);
//}

//void main(void)
//{
//	char str[] = "김상형은 천재다."; //한글은 2바이트 차지
//
//	strncpy(str + 9, "바보", 4);
//	puts(str);
//}

//void main(void)
//{
//	char str[] = "abcd";
//	int len = strlen(str);
//	int size = sizeof(str);
//
//	printf("%d\n", len);
//	printf("%d\n", size);
//}

//int main(void)
//{
//	//배열 초기화
//	char str[20] = "mango tree";
//
//	//"apple-pie"에서 다섯 문자만 복사
//	strncpy(str, "apple-pie", 5);
//
//	//복사된 문자 출력
//	printf("%s\n", str);
//
//	//=====안보고 다시 풀어보기
//
//	//배열 초기화
//	
//
//	//"apple-pie"에서 다섯 문자만 복사
//
//
//	//복사된 문자 출력
//
//}

//int main(void)
//{
//	//문자열 초기화
//	char str[80] = "straw";
//
//	//str 배열에 문자열 붙이기
//	strcat(str, "berry");
//	printf("%s\n", str);
//
//	//str 배열에 3개의 문자 붙이기
//	strncat(str, "piece", 3);
//	printf("%s\n", str);
//
//	char dest[20] = "이순신";
//	char src[] = " 장군";
//
//	strncat(dest, src,3); //3바이트 추가하겠다( 한글은 2바이트니까 "_장" 만 붙이겠다 의미
//	printf("%s\n", dest);
//
//	//===== 다시 풀어보기 =====//
//
//	//문자열 초기화
//	
//
//	//str 배열에 문자열 붙이기
//	
//	printf("%s\n", str);
//
//	//str 배열에 3개의 문자 붙이기
//	
//	printf("%s\n", str);
//
//	//문자열 배열 초기화1
//	
//	//문자열 배열 초기화2
//
//	//3바이트 추가하겠다( 한글은 2바이트니까 "_장" 만 붙이겠다 의미
//
//
//	printf("%s\n", dest);
//}


void main(void)
{
	char si[] = "서울";
	char ku[] = "동대문";
	char dong[] = "회기";
	char juso[64]; //배열길이 초기화 해줘야함

	strcpy(juso, si);
	strcat(juso, "시 ");
	strcat(juso, ku);
	strcat(juso, "구 ");
	strcat(juso, dong);
	strcat(juso, "동");

	printf("%s\n", juso);
}