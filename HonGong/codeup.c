#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main(void)
//{
//	int year, mm, dd;
//	scanf("%d.%d.%d", &year, &mm, &dd);
//
//	if (mm > 10 && dd > 10)
//		printf("%d.%d.%d\n", year, mm, dd);
//	else
//		printf("%04d.%02d.%02d\n", year, mm, dd);
//}

//#include<stdio.h>
//int main(void)
//{
//	char word[20];
//
//	scanf("%s\n", word);
//
//	for (int i = 0; i < strlen(word); i++)
//	{
//		printf("'%c'\n", word[i]);
//		
//	}
//}

//#include<stdio.h>
//int main(void)
//{
//	char c[1001];
//	int a,A;
//
//	scanf("%s", c);
//	for (int i = 0; i < strlen(c); i++)
//	{
//		if (65 <= c[i] && c[i] <= 90)
//		{
//			a = c[i] + 32;
//			printf("%c", a);
//		}
//		else if (97 <= c[i] && c[i] <= 122)
//		{
//			A = c[i] - 32;
//			printf("%c", A);
//		}
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	char* p = (char*)malloc(sizeof(char) * 31);
//
//	scanf("%s", p);
//
//	if (strcmp(p, "love") == 0)
//		printf("%s\n", "I love you.");
//	else
//		exit(0);
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[101];

	gets(str); // 띄어쓰기까지 전부 저장

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ') // 저장된 문자열 배열 중 띄어쓰기가 아니라면 printf를 실행해서 출력하는 함수
			printf("%c", str[i]);
	}

	
}