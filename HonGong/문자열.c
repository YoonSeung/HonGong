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
//						
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

//===============================================================================================================================================//

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

//===============================================================================================================================================//

//int main(void)
//{
//	//배열 초기화
//	//char str[20] = "mango tree";
//
//	//"apple-pie"에서 다섯 문자만 복사
//	//strncpy(str, "apple-pie", 5);
//
//	//복사된 문자 출력
//	//printf("%s\n", str);
//
//	//=====안보고 다시 풀어보기
//
//	//배열 초기화
//	char ch[] = "mango tree";
//
//	//"apple-pie"에서 다섯 문자만 복사
//	strcpy(ch, "apple-pie", 5);
//
//	//복사된 문자 출력
//	printf("%s\n", ch);
//}

//===============================================================================================================================================//

//int main(void)
//{
//	////문자열 초기화
//	//char str[80] = "straw";
//
//	////str 배열에 문자열 붙이기
//	//strcat(str, "berry");
//	//printf("%s\n", str);
//
//	////str 배열에 3개의 문자 붙이기
//	//strncat(str, "piece", 3);
//	//printf("%s\n", str);
//
//	//char dest[20] = "이순신";
//	//char src[] = " 장군";
//
//	//strncat(dest, src,3); //3바이트 추가하겠다( 한글은 2바이트니까 "_장" 만 붙이겠다 의미
//	//printf("%s\n", dest);
//
//	//===== 다시 풀어보기 =====//
//
//	//문자열 초기화
//	char str[80] = "straw"; //이 문자열 배열에 cat은 추가하겠다니까 미리 크기를 크게 설정해줘야함
//
//	//str 배열에 문자열 붙이기
//	strcat(str, "berry");
//
//	printf("%s\n", str);
//
//	//str 배열에 3개의 문자 붙이기
//	strncat(str, "piece", 3);
//	printf("%s\n", str);
//
//	//문자열 배열 초기화1
//	char str2[80] = "이순신";
//	//문자열 배열 초기화2
//	char str3[80] = " 장군";
//	//3바이트 추가하겠다( 한글은 2바이트니까 "_장" 만 붙이겠다 의미
//	strncat(str2, str3, 3);
//
//	printf("%s\n", str2);
//}

//===============================================================================================================================================//

//void main(void)
//{
//	char si[] = "서울";
//	char ku[] = "동대문";
//	char dong[] = "회기";
//	char juso[64]; //배열길이 초기화 해줘야함
//
//	strcpy(juso, si);
//	strcat(juso, "시 ");
//	strcat(juso, ku);
//	strcat(juso, "구 ");
//	strcat(juso, dong);
//	strcat(juso, "동");
//
//	printf("%s\n", juso);
//}

//===============================================================================================================================================//

//int main(void)
//{
//	//두 문자열 입력할 배열
//	char str1[80], str2[80];
//
//	//긴문자열 선택할 포인터
//	char *resp;
//
//	printf("2개의 과일 이름 입력 : ");
//
//	//문자열 2개 입력
//	scanf("%s%s", str1, str2);
//
//	//배열에 입력된 문자열의 길이 비교
//	if (strlen(str1) > strlen(str2))
//		resp = str1;
//	else
//		resp = str2;
//
//	//출력
//	printf("%s\n", resp);
//
//	//====================== 혼자 해보기 
//		//두 문자열 입력할 배열
//
//
//	//긴문자열 선택할 포인터
//
//
//	printf("2개의 과일 이름 입력 : ");
//
//	//문자열 2개 입력
//
//
//	//배열에 입력된 문자열의 길이 비교
//
//
//	//출력
//	printf("%s\n", resp);
//}

//===============================================================================================================================================//

//void main(void)
//{
//	char capital[16];
//
//	printf("우리나라의 수도는 : ");
//	scanf("%s", capital);
//
//	if (strcmp(capital, "서울") == 0)
//	{
//		printf("축하합니다. 정답입니다.");
//	}
//	else
//	{
//		printf("틀렸습니다.");
//	}
//}

//===============================================================================================================================================//

//int main(void)
//{
//	//비교할 문자열 초기화
//	char str1[80] = "pear";
//	char str2[80] = "peach";
//
//	printf("사전에 나중에 나오는 과일 이름 : ");
//
//	//배열 2개 비교 
//	if (strcmp(str1, str2) > 0)
//		printf("%s\n", str1);
//	else
//		printf("%s\n", str2);
//
//	//========혼자해보기
//
//		//비교할 문자열 초기화
//
//
//	printf("사전에 나중에 나오는 과일 이름 : ");
//
//	//배열 2개 비교 
//
//
//}

//===============================================================================================================================================//
////함수 선언
////char *my_strcpy(char *pd, char *ps);
////int main(void)
////{
////	//문자열 초기화
////	char str[80] = "strawberry";
////
////	printf("바꾸기 전 문자열 : %s\n", str);
////
////	//문자열 apple 복사
////	my_strcpy(str, "apple");
////
////	printf("바꾼 후 문자열 :  %s\n", str);
////
////	//printf를 활용 다른문자열 나오게 해보기
////	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));
////}
////char *my_strcpy(char *pd, char *ps)
////{
////	//나중에 반환하기 위한 포인터 초기화
////	char *po = pd;
////
////	//strcpy 기능과 동일한 기능 수행가능하게 함수구현해보기
////	while (*ps != '\0')
////	{
////		*pd = *ps;
////		pd++;
////		ps++;
////	}
////
////	*pd = '\0';
////
////	//반환값 리턴
////	return po;
//
////=======혼자해보기===============
//
////함수선언
//
//
//	int main(void)
//	{
//		//문자열 초기화
//
//
//		printf("바꾸기 전 문자열 : %s\n", str);
//
//		//문자열 apple 복사
//	
//
//		printf("바꾼 후 문자열 :  %s\n", str);
//
//		//printf를 활용 다른문자열 나오게 해보기
//		
//	}
//	char *my_strcpy(char *pd, char *ps)
//	{
//		//나중에 반환하기 위한 포인터 초기화
//		
//
//		//strcpy 기능과 동일한 기능 수행가능하게 함수구현해보기
//	
//
//		//반환값 리턴
//		return ;
//}

//===============================================================================================================================================//

////문자열 추가하는 함수선언
//char *my_strcat(char *pd, char *ps);
//int main(void)
//{
//	char str[80] = "strawberry";
//
//	printf("문자열 복사전 : %s\n", str);
//
//	my_strcat(str, "apple");
//	printf("문자열 복사 후 : %s\n", str);
//
//	printf("다른 문자열 붙이기 : %s\n", my_strcat(str, " tree"));
//}
////문자열 추가하는 함수 기능 구현
//char *my_strcat(char *pd, char *ps)
//{
//	char *po = pd;
//
//	while (*pd != '\0')
//	{
//		pd++;
//	}
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	*pd = '\0';
//	return po;
//}
////=========혼자 해보기
//	//문자열 추가하는 함수선언
//
//int main(void)
//{
//	
//
//	printf("문자열 복사전 : %s\n", str);
//
//	
//	printf("문자열 복사 후 : %s\n", str);
//
//	printf("다른 문자열 붙이기 : %s\n", my_strcat(str, " tree"));
//}
////문자열 추가하는 함수 기능 구현
//char 
//{
//	
//
//	
//	return po;
//}

//===============================================================================================================================================//

////문자열 길이 함수 선언
//int my_strlen(char *ps);
//int main(void)
//{
//	//문자열 배열 초기화
//	char str[80] = "red빨강";
//
//	printf("문자열 갯수 : %d\n", my_strlen(str));
//}
////문자열 길이구하는 함수 기능 구현
//int my_strlen(char *ps)
//{
//	int cnt = 0;
//
//	while (*ps != '\0')
//	{
//		cnt++;
//		ps++;
//	}
//	return cnt;
//}
//
////=============혼자해보기
////문자열 길이 함수 선언
//
//int main(void)
//{
//	//문자열 배열 초기화
//	
//
//	printf("문자열 갯수 : %d\n", my_strlen(str));
//}
////문자열 길이구하는 함수 기능 구현


//===============================================================================================================================================//

//int my_strcmp(char *pd, char *ps);
//int main(void)
//{
//	char str[80] = "red빨강";
//	char str2[80];
//	
//	printf("색상의 영어와 한글을 입력하세요(예:red빨강) : \n"  );
//	scanf("%s\n", str2);
//	if (my_strcmp(str, str2) == 0)
//		printf("제가 지정한 색과 같은색입니다.");
//	else
//		printf("제가 지정한 색과 다른색입니다.");
//	
//}
//int my_strcmp(char* pa, char* pb)
//{
//	while ((*pa == *pb) && (*pa != '\0'))
//	{
//		pa++;
//		pb++;
//	}
//
//	if (*pa > *pb)return 1;
//	else if (*pa < *pb)return -1;
//	else return 0;
//
//}

//===============================================================================================================================================//
//
//void main(void)
//{
//	char str[256];
//	char *ptr;
//	int count = 0;
//
//	printf("아무 문자나 입력하세요(공백없이 최대 255문자)");
//	scanf("%s", str);
//	for (ptr = str;;)
//	{
//		ptr = strchr(ptr, 'a');
//		if (ptr == NULL)
//		{
//			break;
//		}
//		count++;
//		ptr++;
//	}
//	printf("입력문자열에는 a가 %d개 있습니다.\n", count);
//}


//void main()
//{
//	char str[] = "I am a boy, you are a girl";
//	char *p;
//
//	p = strtok(str, " ,");
//	while (p != NULL)
//	{
//		puts(p);
//		p = strtok(NULL, " ,");
//	}
//}

//void main(void)
//{
//	char str[] = "Made in Korea";
//	char str2[16];
//
//	strcpy(str2, str);
//	_strupr(str2);
//	printf("strupr=> %s\n", str2);
//
//	strcpy(str2, str);
//	_strlwr(str2);
//	printf("strlwr => %s\n", str2);
//
//	strcpy(str2, str);
//	_strrev(str2);
//	printf("strrev => %s\n", str2);
//
//	strcpy(str2, str);
//	_strset(str2, '*');
//	printf("strset => %s\n", str2);
//}
//
//
//void main() //len 길이의 char *형을 요소로 가지는 num크기의 배열을 동적 할당하는 예제
//{
//	int len = 10, num = 5, i;
//	char **name;
//
//	name = (char**)malloc(num * sizeof(char *));
//
//	for (i = 0; i < num; i++)
//	{
//		name[i] = (char *)malloc(len * sizeof(char));
//	}
//
//	for (i = 0; i < num; i++)
//	{
//		sprintf(name[i], "string %d", i);
//		puts(name[i]);
//	}
//
//	for (i = 0; i < num; i++)
//	{
//		free(name[i]);
//	}
//	free(name);
//}
//
//


//void my_puts(const char *str)
//{
//	while (*str)putch(*str++);
//	putch('\n');
//}
//
//void my_puts2(const char *str)
//{
//	int i;
//	for (i = 0; str[i]; i++)
//	{
//		printf("%s", str[i]);
//	}
//	printf("\n");
//}
//
//char *my_strcpy(char *dest, const char *src)
//{
//	char *d = dest;
//	while (*dest++ = *src++) { ; }
//	return d;
//}
//
//size_t my_strlen(const char *str)
//{
//	const char *p;
//	for (p = str; *p; p++) { ; }
//	return p - str;
//}
//
//size_t my_strlen2(const char *str)
//{
//	int i;
//	for (i = 0; str[i]; i++) { ; }
//	return i;
//}
//
//char *my_strcat(char *dest, const char *src)
//{
//	my_strcpy(dest + my_strlen(dest), src);
//	return dest;
//}
//
//char *my_strchr(const char *string, int c)
//{
//	while (*string)
//	{
//		if (*string == c)
//		{
//			return (char *)string;
//		}
//		string++;
//	}
//	return NULL;
//}
//
//char *my_strstr(const char *string, const char *strSearch)
//{
//	const char *s, *sub;
//
//	for (; *string; string++)
//	{
//		for (sub = strSearch, s = string; *sub && *s && *s == *sub; sub++, s++) { ; }
//		if(*sub == 0)return (char *)string;
//	}
//	return NULL;
//}
//
//void main()
//{
//	char dest[256];
//
//	my_puts("Korea");
//	my_puts2("한글 잘된다.");
//
//	my_puts(my_strcpy(dest, "my string copy function test"));
//
//	printf("문자열 길이 %d\n", my_strlen("1234"));
//	printf("문자열 길이 %d\n", my_strlen2("123456789"));
//
//	char str[128] = "abcd";
//	my_puts(my_strcat(str, "efgh"));
//
//	printf("o가 %s습니다.\n", my_strchr("notebook", 'o') == NULL ? "없" : "있");
//	printf("z가 %s습ㄴ다.\n", my_strchr("notebook", 'z') == NULL ? "없" : "있");
//	printf("under가 %s습니다.\n", my_strstr("misunderstand", "under") == NULL ? "없" : "있");
//	printf("above가 %s습니다.\n", my_strstr("misunderstand", "above") == NULL ? "없" : "있");
//
//}

//void main(void)
//{
//	char str[] = "Korea/Japan WorldCup";
//	char *ptr;
//	int count = 0;

//	
//	for (ptr = str;;)
//	{
//		ptr = strstr(ptr, "World");
//		if (ptr == NULL)
//		{
//			break;
//		}
//		count++;
//		ptr++;
//	}
//	printf("%d", count);
//}
