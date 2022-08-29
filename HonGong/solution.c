/* ======================두정수 사이의 합=====================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//long long solution(int a, int b) {
//	long long answer = 0;
//	long long sum = 0;

//	if (a < b) { //시작지점을 정하기위해 if else문으로 두수비교
//		for (int i = a; i <= b;i++)
//			sum += i;
//		return answer = sum;
//	}
//	else {
//		for (int i = b; i <= a; i++)
//			sum += i;
//		return answer = sum;
//	}
//	return answer;
//}


/*===================문자열 다루기 기본============================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//
//bool solution(const char* s)
//{
//	bool answer = true;
//
//	int len = strlen(s); 
//	if (len != 4 && len != 6) // 문자열이 4와 6일경우에만 참이기에 아닐경우 false 처리하기위한 조건
//		return false;
//
//	for (int i = 0; i < len; i++) {
//		if (s[i] > 57 || s[i]<48) // 아스키코드값으로 비교하는조건문-> 57보다 크다는건 숫자9이상이고, 48보다 작다는건 숫자0이하인경우이다. 
//			return false;
//	}
//
//	return answer;
//}
/*아스키코드값을 활용하는 것을 숙지시키고 문제를 제대로 이해해야한다. 나의 경우 첫번째 조건인 문자열이 4와 6일경우를 처리하지않아서 테스트케이스에서 오류가 났었다.*/

/*==================평균 구하기===================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//double solution(int arr[], size_t arr_len) {
//	double answer = 0;
//	double sum = 0;
//	double evg = 0;
//
//	if (arr_len <= 100) {//arr의 길이가 100까지라고 명시되어있었기때문에 100보다 작을경우에만 참인 조건을 넣었음
//		for (int i = 0; i < arr_len; i++)
//		{
//			sum += arr[i];
//		}
//		evg = sum / arr_len;
//		return answer = evg;
//	}
//	return answer;
//}

/*=========짝수와 홀수 =========== */
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//char* solution(int num) {
//	char* answer = (char*)malloc(sizeof(5)); // 내가 출력해야하는것이 even 또는 odd 두 경우밖에없으니 5바이트만 동적할당해줘도 된다.
//	if (num % 2 == 0)
//		answer = "Even";
//	else
//		answer = "Odd";
//	return answer;
//}

/*==========직사각형 별찍기 ========== */
//#include<stdio.h>
//int main(void) {
//	int a;
//	int b;
//
//	scanf("%d %d", &a, &b); 
//
//	for (int i = 0; i < b; i++)
//	{
//		for (int j = 0; j < a; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*========== 가운데 글자 가져오기  ========== */
//char* solution(const char* s) {
//
////	char* answer = (char*)malloc(strlen(s)); //내가 쓴 할당방식 (안되는이유 밑 주석 참고)
//	char* answer = (char*)malloc(3); //수석님 할당방식
//	int len = strlen(s);
//
//	if (len % 2 != 0)
//	{
//		answer[0] = s[len / 2]; // 내가 출력해야할 answer 문자열의 시작지점을 s문자열의 위치주소로 시작한다. 몫이 중간길이가 되는걸 확인함
//		answer[1] = '\0';		//널문자를 넣어서 answer문자열의 끝을 알려줘야 한다. 안그러면 세그멘테이션 오류가 난다.
//								//segmentaition Fault = 메모리 관련오류로써 허용되지않은 메모리 영역에 접근을 시도하거나 허용되지않는 '방법'으로 메모리 영역에 접근을 시도할경우 나타난다.
//	}
//	if (len % 2 == 0)
//	{
//		answer[0] = s[len / 2 - 1];
//		answer[1] = s[len / 2];
//		answer[2] = '\0';
//	}
//	return answer;
//}
//int main()
//{
//	char* s;
//	char* res;
//
//	res = solution("abcde");
//	printf("%c", res); // 이부분을 %c로 하니 오류가 나지않는것처럼 보였다. 하지만  프로그래머스에선 오류가 났다. 아래 주석참고!!
//	free(res);
//
//	res = solution("qwer");
//	printf("%s", res);
//	free(res);
//}
///* 나의 경우 
//문자열이 짝수일때 문자두개를 출력하기 위해 answer의 0번에 s문자열의 중간 첫글자와, answer 1번에 s문자열 중간 다음글자만 대입한후 실행해보았더니
//세그먼트오류가 났다. 세그먼트오류가 무엇인지 구글링을해보니 메모리관련 오류라는 점을 알아냈고 메모리 관련 오류가 무엇이 있을지 생각해보다가
//answer가 문자열로 찍힐것이면 문자가 어디서 끝나는지 명확해야된다는것을 알아냈고 각 단어의 마지막에 널문자까지 대입하여 해당문자열이 끝났다는것을 표현했더니 오류가 해결되었다.
//
//문자열이 홀수일 경우에 내가 인지하지 못한것이 main함수에서 printf() 안의 출력을 %c로 했기에 한단어만 나타나게 처리하겠다고 하니 프로그램상에서는 오류가 나지않았다.
//하지만 프로그래머스에서는 똑같이 세그멘테이션 오류가 났고 출력이 한단어가 아닌 문자열을 출력하는것이라는것을 인지했고 똑같이 널값을 넣어주어서 해결했다.
//
//수석님 피드백 : 가변적일때도 동적할당때 strlen 길이값을 넣어도 되지만 만약 'C' 하나만 나올경우는? 길이가 1이 되는데 answer 문자열이 널값포함 2개를 이용한다고 해놨기때문에 메모리 침범의 우려가있다.
//이 경우에 메모리를 침범하고 있는 것이다. 
//그렇기때문에 위의 문제의 경우 strlen으로 길이값만큼 동적할당을 하는게 문제상은 오류가없지만 버퍼를 침범할수있기때문에  최대값만큼 할당을 정해놓으면 된다.
//고로 malloc(3)으로 3바이트를 동적할당해놓고 하면 된다. (제한사항이 길이가 1이상 100이하이기때문에 최소 1 ~ 최대 3 바이트만큼 할당하면됨.
//*/



///*==================문자열 내림차순으로 배치하기===================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//char* solution(const char* s) {
//	char* answer = (char*)malloc(strlen(s));
//	char temp;
//
//	strcpy(answer, s);
//
//	int len = strlen(answer);
//
//	for (int i = 0; i < len; i++)
//	{
//		if (answer[i] < 64 && answer>122)			//문자열이 대문자A보다 아스키코드가 작거나 소문자z보다 클경우 제외
//			return "영어문자만 입력하세요";			
//		else if (answer[i] > 90 && answer[i] < 97)  
//			return "영어문자만 입력하세요";			//문자열이 대문자Z와 소문자a사이 특수문자일경우 제외
//		else {										//문자열이 영어대문자사이 이거나 영어소문자 사이일경우만 찾기위한 조건식
//			for (int j = 0; j < len; j++)			//문자열 요소 하나씩 비교하기위한 반복문
//			{
//				for (int k = 0; k < len - 1; k++)	//문자열 요소 하나가 문자열 다른 요소들과 비교하기 위한 반복문
//				{
//					if (answer[k] < answer[k + 1])
//					{
//						temp = answer[k];
//						answer[k] = answer[k + 1];
//						answer[k + 1] = temp;
//					}
//				}
//			}
//			return answer;
//		}
//	}
//}
//
//int main() //테스트케이스 확인을 위한 main 함수
//{
//	char* s = "124";
//	char* s2 = "Zbcdefg";
//	char* s3 = "AbCdEfG";
//	char* s4 = "!#$5@$dd";
//	s = solution(s);
//	printf("%s", s);
//	printf("\n");
//
//	s2 = solution(s2);
//	printf("%s", s2);
//	printf("\n");
//
//	s3 = solution(s3);
//	printf("%s", s3);
//	printf("\n");
//
//	s4 = solution(s4);
//	printf("%s", s4);
//}
/*
처음에 for문을 하나로 해서 len까지 돌리는 걸로 함수를 구현했더니 맨앞글자 하나만 끝까지 비교한 후 끝내고 종료되었다. 
그래서 생각해보니 for문 하나는 문자요소 하나가 나머지 요소들과 비교하는 반복문이니 그 이후의 문자열요소가 다른 문자열들과 비교하는 반복문이 필요하다는 것이 생각났고 그래서 for문을 두개를 활용해서
문자열요소 하나가끝나면 그 다음 문자열이 또 반복하게끔 구현했다.

그리고 나서 테스트케이스로 숫자인 경우를 대입해 보았더니 그대로 출력이 되는것을 확인했고 이부분의 조건식이 잘못돼었음을 인지했다.
이부분을 기존에는 if ((answer[j] > 64 && answer[j] < 91) || (answer[j] > 96 && answer[j] < 123))
이런식으로 대문자일 경우와 소문자인경우가 참일때로 조건을 줬는데 조건식이 돌아가지않아서 아닌경우들을 if ~ elseif문으로 지정해 수정했고 테스트케이스 출력이 올바르게 되는 것을 확인했다.
*/

/*=========================약수의 합==============================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int n) {
//	int answer = 0;
//	int sum = 0;
//
//	for (int i = 1; i < n+1; i++)
//	{
//		if (n % i == 0) {	// 약수는 두수로 나눌때 나머지가 0일때이기때문에 조건식을 나머지가 0일경우로 둠
//			sum += i;		// 약수의합은 1~n 까지 나눌 값을 더한다고 생각해서 조건식이 맞을때의 i를 sum에 더하면됨.
//			answer = sum;
//		}	
//	}
//	return answer;
//}
//
//int main() //테스트케이스를 적용하기위한 main
//{
//	int n;
//	int res;
//
//	n = 12;
//	res = solution(n);
//	printf("%d\n", res);
//
//	n = 5;
//	res = solution(n);
//	printf("%d\n", res);
//
//	n = 1;
//	res = solution(n);
//	printf("%d\n", res);
//
//	n = 0;
//	res = solution(n);
//	printf("%d\n", res);
//
//	n = 2999;
//	res = solution(n);
//	printf("%d\n", res);
//
//	n = 3000;
//	res = solution(n);
//	printf("%d\n", res);
//}

/*=========== 핸드폰 번호 가리기 ====================(22 08 29 풀고있는중)*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
	char* answer = (char*)malloc(20);
	answer = strcpy(answer, phone_number);
	int len = strlen(phone_number);

	for (int i = 0; i < len - 4; i++)
	{
		answer = strset(answer[i], '*');
	}
	return answer;
}
int main()
{
	char* pn = "01033334444";
	char* res;
	res = solution(pn);
	printf("%s\n", res);
}