/* 1 ======================두정수 사이의 합=====================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//long long solution(int a, int b) {
//	long long answer = 0;
//	long long sum = 0;
//
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

/* 2 ===================문자열 다루기 기본============================*/
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

/* 3 ==================평균 구하기===================*/
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

/* 4 =========짝수와 홀수 =========== */
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

/* 5 ==========직사각형 별찍기 ========== */
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

/* 6 ========== 가운데 글자 가져오기  ========== */
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
/* 나의 경우 
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
*/

/* 7 ==================문자열 내림차순으로 배치하기===================*/
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

/* 8 =========================약수의 합==============================*/
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

/* 9 =========== 핸드폰 번호 가리기 ====================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include<string.h>
//
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//char* solution(const char* phone_number) {
//	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
//	char* answer = (char*)malloc(20);
//
//	char arr[21] = { 0, };
//	//strcpy(answer, phone_number);
//	int len = strlen(phone_number);
//
//	//_strnset(answer, '*',len-4);
//
//	for (int i = 0; i < len ; i++)
//	{
//		if (i < len - 4)
//			arr[i] = '*';
//		else
//			arr[i] = phone_number[i];
//	}
//	strcpy(answer, arr);
//	return answer;
//}
//int main()
//{
//	char* pn = "01033334444";
//	char* res;
//	res = solution(pn);
//	printf("%s\n", res);
//
//	char* pn2 = "027778888";
//	res = solution(pn2);
//	printf("%s\n", res);
//
//	char* pn3 = "00000111112222233333";
//	res = solution(pn3);
//	printf("%s\n", res);
//}
/*
//처음엔 strnset을 이용하여서 단순하게 바꾸는 문제인줄알고 풀었음 하지만 프로그래머스에서 에러가 났고 문제가 함수로 푸는게 아니라는 것을 깨닫고 다시 시도함
//제한조건이 길이가 4이상 20이하인 문자열이기때문에 동적할당을 20을 주고 문자열의 마지막 4자리만 phone_number의 값이고 나머지는 *로 표현한다는 점에서 
//전체 문자열길이에서 len-4 까지를 *을 대입하면 되겠다고 생각하고 값을 대입할 배열을 새로 선언하고 반복문을 통해 arr[0]부터 arr[len-5] 까지를 *을 넣고
//arr[len-4] 부터 arr[len] 까지는 기존의 phone_number의 값을 그대로 대입시킨 후 answer 문자열포인터공간에 arr문자열을 strcpy를 통해 복사해 출력시킴
//*/

/* 10 =============자릿수 더하기====================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
////#include<math.h>
//
//int solution(int n) {
//	int answer = 0;
//	int sum = 0;
//	int na = 0;
//	
//	// 방법을 알기전까지 작성했던 코드임. 너무 복잡하게 생각했다. while문으로 자연수 n의 길이를 구하는 공식을 생각하다 쉽게 풀수있는 방법을 파악해 수정 
//	//int len = 0; 
//	//while (n > 0)
//	//{
//	//	len++;
//	//	n /= 10;
//	//}
//	//int* c = (int*)calloc(len,sizeof(int));
//	//for (int i = 0; i < len; i++)
//	//{
//	//	//c[i] = n / (int)pow((double)10, (double)(len - i - 1));
//	//	//n =  n % (int)pow((double)10, (double)(len - i - 1));
//	//	//sum += c[i];
//	//}
//	//------------------------------------------------
//
//	while (n > 0) // n이 0보다 클동안 반복
//	{
//		na = n % 10; //na(나머지값저장) 에 자연수 n 에서 10을 나눈 나머지값을 저장
//		n /= 10; // 그 후 n은 10을나눈 몫값으로 대입
//		sum += na; // 합을 구하는 변수 sum에 나머지값 na를 더해서 대입
//	}
//	answer = sum; //while문이 끝나는동안 더해진 sum값을 answer에 대입
//
//
//	return answer;
//}
//
//int main()
//{
//	int n;
//	int res;
//
//	n = 123;
//	res = solution(n);
//	printf("%d\n", res);
//
//	n = 987;
//	res = solution(n);
//	printf("%d\n", res);
//
//	n = 111111111;
//	res = solution(n);
//	printf("%d\n", res);
//}
/*
//문제를 너무 어렵게 생각하면 안됨. 
//각 자릿수의 합을 구하는 공식이기 때문에 처음에 나는 int*형 c를 선언해 자연수의 길이만큼 할당해주고 for문을 돌려 c의 앞부터 
//차례대로 n / 10^(len-i-1) 즉, 맨 앞자리의 10진수 자릿수씩 나눠서 나온 몫을 대입하고 그뒤 n은 나머지를 대입한 후 sum에 c[i]번지에 있는 값을 더해서 출력하려했다.
//하지만 위의 주석과 같이 자연수 n의 길이를 구하려고 썼던 while문에서 n /= 10 을 반복해 구하는 식에서 나머지값을 추가해 그것을 더하면 되지 않나 라는 생각이 들었고 
//그 생각을 반영해 수정해서 처리함
*/

/* 11 =========하샤드 수 ============*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//bool solution(int x) {
//	bool answer = true;
//	int sum = 0;
//	int x_num = x;			//숫자 x를 복사받을 변수 x_num 선언
//
//	while (x_num > 0)		//x_num 이 0보다 클때까지 반복하겠다
//	{
//		int m = x_num % 10;	//숫자 x에 10을 나눠서 나오는 나머지가 1의 자리부터의 숫자이고 그것을 m에 저장
//		x_num /= 10;		//x_num은 x_num이 0보다 클동안 10으로 나눈 몫으로 저장
//		sum += m;			//sum변수에 나머지로 나온 숫자들을 계속 더함
//	}
//
//	if (x % sum  == 0)		//하샤드 수 원칙 (숫자 x 가 x의 각자리에 있는 숫자들의 합으로 나누어 지면 하샤드 수 )가 맞으면 true 틀리면 false 
//		answer = true;
//	else
//		answer = false;
//
//	return answer;
//}


/* 12 ========= 음양 더하기 ============*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//// absolutes_len은 배열 absolutes의 길이입니다.
//// signs_len은 배열 signs의 길이입니다.
//int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
//	int answer = 123456789;
//	int sum = 0;
//
//	for (int i = 0; i < absolutes_len; i++)
//	{
//		if (signs[i] == false)
//		{
//			absolutes[i] = -absolutes[i];
//		}
//		sum += absolutes[i];
//	}
//
//
//	answer = sum;
//	return answer;
//}
 
/* 13 ===================== 콜라츠 추측 ===================== */
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//int solution(int num) {
//	int answer = 0;
//	long long numcpy = num; // num이 626331같은 큰 수가 들어가있을때 홀수일경우에 곱해지는 num값이 int 범위를 벗어나는 경우 오버플로우가 발생한다. 실제로 626331 같은경우 돌리면 104번째부터 음수로 변환된다. 
//	int count = 0;
//
//	while (numcpy != 1) { //numcpy가 1이 아닐동안 계속 반복
//
//		if (count > 500) { //3. 그렇게 반복하면서 센 횟수(count)가 500이 넘는다면 -1을 출력한다.
//			return answer = -1;
//		}
//		else if (numcpy % 2 == 0) { // 조건1. 짝수라면 2로 나눈다
//			numcpy /= 2;
//			count++;
//		}
//		else {
//			numcpy = numcpy * 3 + 1; // 조건2. 홀수라면 3을곱하고 1을 더한다.
//			count++;
//		}
//		answer = count; 
//	}
//	return answer;
//}
//
//int main() {
//	int num;
//	int res;
//
//	num = 626331;
//	res = solution(num);
//	printf("%d\n", res);
//
//	num = 6;
//	res = solution(num);
//	printf("%d\n", res);
//
//	num = 16;
//	res = solution(num);
//	printf("%d\n", res);
//}



/* 14 ==========내적=================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//// a_len은 배열 a의 길이입니다.
//// b_len은 배열 b의 길이입니다.
//int solution(int a[], size_t a_len, int b[], size_t b_len) {
//	int answer = 1234567890;
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < b_len; i++)
//	{
//		sum += a[i] * b[i];
//	}
//	answer = sum;
//
//	return answer;
//}

///* 15 =========== 문자열을 정수로 바꾸기 ============= */
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//int solution(const char* s) {
//	int answer = 0;
//	int temp = 0;
//	int len = strlen(s);
//	int i = 1;
//
//	if (s[0] != '+' && s[0] != '-')
//		i = 0;
//
//	for (; i < len; i++)
//	{
//		answer = (answer * 10) + (int)(s[i] - 48);
//	}
//
//	if (s[0] == '-')
//		answer *= -1;
//
//	return answer;
//}

///* 16 ================== 수박수박수 ========================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//char* solution(int n) {
//	// 리턴할 값은 메모리를 동적 할당해주세요.
//	char* answer = (char*)malloc(sizeof(char)*n * 3);
//	char su[] = "수";
//	char back[] = "박";
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		if (i == 0) strcpy(answer, "수");
//
//		else if (i % 2 == 0) {
//			strcat(answer, su);
//		}
//
//		else {
//			strcat(answer, back);
//		}
//
//	}
//	return answer;
//}


/* 17 ================== 숫자 문자열과 영단어(카카오) ============================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//int solution(const char* s) {
//	int answer = 0;
//
// char* scpy = s; // 굳이 동적할당을 할 필요가 없음 (why? => s문자열이 주어져있기 때문에 scpy에 새로운 크기의 동적할당을 할 필요가 없다.
//
//	/* 내가 한 것
//	char* scpy = (char*)malloc(strlen(s)); //이 코드를 할 필요가 없다. 그리고 동적할당을 했다면 free로 해제하는거 까먹지 말것	
//	strcpy(scpy, s); //s가 const로 지정되어있어 문자비교할때 넘기는게 불가하기에 같은값을 복사해 비교하기위한 scpy선언 및 s 문자열 복사
//	int len = strlen(s); (for문에서 쓰려고 했던거 지우는거 잊음)
//	char num[][6] = { "zero","one","two","three","four","five","six","seven","eight","nine" }; (strstr로 비교하려쓴 코드 지우는거 잊음)
//	*/
//
//	while (scpy[0] != '\0') {
//		switch (scpy[0]) {
//		case 'z':
//			answer = answer * 10;
//			scpy = scpy + 4;
//			break;
//		case 'o':
//			answer = answer * 10 + 1;
//			scpy = scpy + 3;
//			break;
//		case 't':
//			scpy++;
//			if (scpy[0] == 'w') {
//				answer = answer * 10 + 2;
//				scpy = scpy + 2;
//				break;
//			}
//			else {
//				answer = answer * 10 + 3;
//				scpy = scpy + 4;
//				break;
//			}
//		case 'f':
//			scpy++;
//			if (scpy[0] == 'o') {
//				answer = answer * 10 + 4;
//				scpy = scpy + 3;
//				break;
//			}
//			else {
//				answer = answer * 10 + 5;
//				scpy = scpy + 3;
//				break;
//			}
//		case 's':
//			scpy++;
//			if (scpy[0] == 'i') {
//				answer = answer * 10 + 6;
//				scpy = scpy + 2;
//				break;
//			}
//			else {
//				answer = answer * 10 + 7;
//				scpy = scpy + 4;
//				break;
//			}
//		case 'e':
//			answer = answer * 10 + 8;
//			scpy = scpy + 5;
//			break;
//		case 'n':
//			answer = answer * 10 + 9;
//			scpy = scpy + 4;
//			break;
//		default:
//			answer = (answer * 10) + (int)(scpy[0] - 48);
//			scpy++;
//			break;
//		}
//	}
//	return answer;
//}

/* 18 ================== 신고 결과 받기(카카오) ============================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <string.h>
//
//// id_list_len은 배열 id_list의 길이입니다.
//// report_len은 배열 report의 길이입니다.
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
//	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
//	int* answer = (int*)calloc(id_list_len, sizeof(int));
//
//	int check[id_list_len][id_list_len];// 신고유무 체크할 2차원배열
//	int count[id_list_len]; // 신고받은ID 신고횟수저장 배열 
//	char* user_id;      // 신고한 ID 저장변수
//	char* report_id;  // 신고받은 ID 저장변수
//	int user_id_num = 0;    //신고한 ID가 있는 행 저장변수
//	int report_id_num = 0;  //신고받은 ID가 있는 행 저장변수
//
//	for (int i = 0; i < id_list_len; i++) { //배열들 0으로 초기화
//		count[i] = 0;
//		for (int j = 0; j < id_list_len; j++) {
//			check[i][j] = 0;
//		}
//	}
//
//	for (int i = 0; i < report_len; i++) {  // 신고목록길이만큼 반복         
//		user_id = strtok(report[i], " ");    //신고한 ID 저장
//		report_id = strtok(NULL, " ");  //신고당한 ID 저장
//
//		for (int j = 0; j < id_list_len; j++) { // id_list들과 비교            
//			if (strcmp(user_id, id_list[j]) == 0) // 신고한 ID가 id_list에 있는 위치를
//				user_id_num = j;                 // 위치변수에 해당위치 번호 저장
//
//			else if (strcmp(report_id, id_list[j]) == 0) // 신고당한 ID가 id_list에 있는 위치
//				report_id_num = j;
//		}
//
//		if (check[user_id_num][report_id_num] == 0) { //(중복체크)해당 2차원배열위치가 0(체크안됨)이면 1로 체크     
//			check[user_id_num][report_id_num] = 1;
//			count[report_id_num] ++;                //1되었을때 신고당한ID 위치 체크 갯수 증가시킴
//		}
//	}
//
//	for (int i = 0; i < id_list_len; i++) {
//		for (int j = 0; j < id_list_len; j++) {
//			if (check[i][j] > 0 && count[j] >= k)       //이차원배열에 체크가 되어있고, 신고당한ID 갯수가 k이상인 경우
//				answer[i] ++;                           //id_list순서에 맞게 1씩 증가
//		}
//	}
//
//	return answer;
//}