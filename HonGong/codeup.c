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

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	char str[101];
//
//	gets(str); // 띄어쓰기까지 전부 저장
//
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (str[i] != ' ') // 저장된 문자열 배열 중 띄어쓰기가 아니라면 printf를 실행해서 출력하는 함수
//			printf("%c", str[i]);
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	char str[21];
//	char res[21];
//
//	scanf("%s", str);
//
//	for (int i = 0; i < strlen(str); i++)
//	{
//		printf("%c", str[i] + 2);
//		
//	}
//	printf("\n");
//	for (int i = 0; i < strlen(str); i++)
//	{
//		printf("%c", (str[i] * 7) % 80 + 48);
//	}
//	
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c, temp;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0)
//		printf("짝수를 최소 한개는 입력해주세요");
//
//	//쓴이유 : 문제에서 짝수만 '순서대로' 라고 조건이 있어서 오름차순으로 쓰라는걸로 착각했음
//	//if (a > b)
//	//{
//	//	temp = b;
//	//	b = a;
//	//	a = temp;
//	//}
//
//	//if(b>c)
//	//{
//	//	temp = c;
//	//	c = b;
//	//	b = temp;
//	//}
//
//	if (a % 2 == 0) printf("%d\n", a);
//	if (b % 2 == 0) printf("%d\n", b);
//	if (c % 2 == 0) printf("%d\n", c);
//
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//
//	if (n > 12 || n < 0)
//		printf("1월 부터 12월 사이 숫자를 입력해주세요.");
//
//	else {
//		switch (n)
//		{
//		case 12:
//		case 1:
//		case 2:
//			printf("winter");
//			break;
//		case 3:
//		case 4:
//		case 5:
//			printf("spring");
//			break;
//		case 6:
//		case 7:
//		case 8:
//			printf("summer");
//			break;
//		default:
//			printf("fall");
//		}
//	}
//
//}

//#include<stdio.h>
//int main()
//{
//	char c;
//
//	do {
//
//		scanf("%c ", &c);
//		printf("%c\n", c);
//
//	} while (c != 'q');
//
//}
