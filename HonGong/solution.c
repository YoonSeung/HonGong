/* ======================������ ������ ��=====================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//long long solution(int a, int b) {
//	long long answer = 0;
//	long long sum = 0;

//	if (a < b) { //���������� ���ϱ����� if else������ �μ���
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


/*===================���ڿ� �ٷ�� �⺻============================*/
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
//	if (len != 4 && len != 6) // ���ڿ��� 4�� 6�ϰ�쿡�� ���̱⿡ �ƴҰ�� false ó���ϱ����� ����
//		return false;
//
//	for (int i = 0; i < len; i++) {
//		if (s[i] > 57 || s[i]<48) // �ƽ�Ű�ڵ尪���� ���ϴ����ǹ�-> 57���� ũ�ٴ°� ����9�̻��̰�, 48���� �۴ٴ°� ����0�����ΰ���̴�. 
//			return false;
//	}
//
//	return answer;
//}
/*�ƽ�Ű�ڵ尪�� Ȱ���ϴ� ���� ������Ű�� ������ ����� �����ؾ��Ѵ�. ���� ��� ù��° ������ ���ڿ��� 4�� 6�ϰ�츦 ó�������ʾƼ� �׽�Ʈ���̽����� ������ ������.*/

/*==================��� ���ϱ�===================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//double solution(int arr[], size_t arr_len) {
//	double answer = 0;
//	double sum = 0;
//	double evg = 0;
//
//	if (arr_len <= 100) {//arr�� ���̰� 100������� ��õǾ��־��⶧���� 100���� ������쿡�� ���� ������ �־���
//		for (int i = 0; i < arr_len; i++)
//		{
//			sum += arr[i];
//		}
//		evg = sum / arr_len;
//		return answer = evg;
//	}
//	return answer;
//}

/*=========¦���� Ȧ�� =========== */
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//char* solution(int num) {
//	char* answer = (char*)malloc(sizeof(5)); // ���� ����ؾ��ϴ°��� even �Ǵ� odd �� ���ۿ������� 5����Ʈ�� �����Ҵ����൵ �ȴ�.
//	if (num % 2 == 0)
//		answer = "Even";
//	else
//		answer = "Odd";
//	return answer;
//}

/*==========���簢�� ����� ========== */
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

/*========== ��� ���� ��������  ========== */
//char* solution(const char* s) {
//
////	char* answer = (char*)malloc(strlen(s)); //���� �� �Ҵ��� (�ȵǴ����� �� �ּ� ����)
//	char* answer = (char*)malloc(3); //������ �Ҵ���
//	int len = strlen(s);
//
//	if (len % 2 != 0)
//	{
//		answer[0] = s[len / 2]; // ���� ����ؾ��� answer ���ڿ��� ���������� s���ڿ��� ��ġ�ּҷ� �����Ѵ�. ���� �߰����̰� �Ǵ°� Ȯ����
//		answer[1] = '\0';		//�ι��ڸ� �־ answer���ڿ��� ���� �˷���� �Ѵ�. �ȱ׷��� ���׸����̼� ������ ����.
//								//segmentaition Fault = �޸� ���ÿ����ν� ���������� �޸� ������ ������ �õ��ϰų� �������ʴ� '���'���� �޸� ������ ������ �õ��Ұ�� ��Ÿ����.
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
//	printf("%c", res); // �̺κ��� %c�� �ϴ� ������ �����ʴ°�ó�� ������. ������  ���α׷��ӽ����� ������ ����. �Ʒ� �ּ�����!!
//	free(res);
//
//	res = solution("qwer");
//	printf("%s", res);
//	free(res);
//}
///* ���� ��� 
//���ڿ��� ¦���϶� ���ڵΰ��� ����ϱ� ���� answer�� 0���� s���ڿ��� �߰� ù���ڿ�, answer 1���� s���ڿ� �߰� �������ڸ� �������� �����غ��Ҵ���
//���׸�Ʈ������ ����. ���׸�Ʈ������ �������� ���۸����غ��� �޸𸮰��� ������� ���� �˾Ƴ°� �޸� ���� ������ ������ ������ �����غ��ٰ�
//answer�� ���ڿ��� �������̸� ���ڰ� ��� �������� ��Ȯ�ؾߵȴٴ°��� �˾Ƴ°� �� �ܾ��� �������� �ι��ڱ��� �����Ͽ� �ش繮�ڿ��� �����ٴ°��� ǥ���ߴ��� ������ �ذ�Ǿ���.
//
//���ڿ��� Ȧ���� ��쿡 ���� �������� ���Ѱ��� main�Լ����� printf() ���� ����� %c�� �߱⿡ �Ѵܾ ��Ÿ���� ó���ϰڴٰ� �ϴ� ���α׷��󿡼��� ������ �����ʾҴ�.
//������ ���α׷��ӽ������� �Ȱ��� ���׸����̼� ������ ���� ����� �Ѵܾ �ƴ� ���ڿ��� ����ϴ°��̶�°��� �����߰� �Ȱ��� �ΰ��� �־��־ �ذ��ߴ�.
//
//������ �ǵ�� : �������϶��� �����Ҵ綧 strlen ���̰��� �־ ������ ���� 'C' �ϳ��� ���ð���? ���̰� 1�� �Ǵµ� answer ���ڿ��� �ΰ����� 2���� �̿��Ѵٰ� �س��⶧���� �޸� ħ���� ������ִ�.
//�� ��쿡 �޸𸮸� ħ���ϰ� �ִ� ���̴�. 
//�׷��⶧���� ���� ������ ��� strlen���� ���̰���ŭ �����Ҵ��� �ϴ°� �������� ������������ ���۸� ħ���Ҽ��ֱ⶧����  �ִ밪��ŭ �Ҵ��� ���س����� �ȴ�.
//��� malloc(3)���� 3����Ʈ�� �����Ҵ��س��� �ϸ� �ȴ�. (���ѻ����� ���̰� 1�̻� 100�����̱⶧���� �ּ� 1 ~ �ִ� 3 ����Ʈ��ŭ �Ҵ��ϸ��.
//*/



///*==================���ڿ� ������������ ��ġ�ϱ�===================*/
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
//		if (answer[i] < 64 && answer>122)			//���ڿ��� �빮��A���� �ƽ�Ű�ڵ尡 �۰ų� �ҹ���z���� Ŭ��� ����
//			return "����ڸ� �Է��ϼ���";			
//		else if (answer[i] > 90 && answer[i] < 97)  
//			return "����ڸ� �Է��ϼ���";			//���ڿ��� �빮��Z�� �ҹ���a���� Ư�������ϰ�� ����
//		else {										//���ڿ��� ����빮�ڻ��� �̰ų� ����ҹ��� �����ϰ�츸 ã������ ���ǽ�
//			for (int j = 0; j < len; j++)			//���ڿ� ��� �ϳ��� ���ϱ����� �ݺ���
//			{
//				for (int k = 0; k < len - 1; k++)	//���ڿ� ��� �ϳ��� ���ڿ� �ٸ� ��ҵ�� ���ϱ� ���� �ݺ���
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
//int main() //�׽�Ʈ���̽� Ȯ���� ���� main �Լ�
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
ó���� for���� �ϳ��� �ؼ� len���� ������ �ɷ� �Լ��� �����ߴ��� �Ǿձ��� �ϳ��� ������ ���� �� ������ ����Ǿ���. 
�׷��� �����غ��� for�� �ϳ��� ���ڿ�� �ϳ��� ������ ��ҵ�� ���ϴ� �ݺ����̴� �� ������ ���ڿ���Ұ� �ٸ� ���ڿ���� ���ϴ� �ݺ����� �ʿ��ϴٴ� ���� �������� �׷��� for���� �ΰ��� Ȱ���ؼ�
���ڿ���� �ϳ��������� �� ���� ���ڿ��� �� �ݺ��ϰԲ� �����ߴ�.

�׸��� ���� �׽�Ʈ���̽��� ������ ��츦 ������ ���Ҵ��� �״�� ����� �Ǵ°��� Ȯ���߰� �̺κ��� ���ǽ��� �߸��ž����� �����ߴ�.
�̺κ��� �������� if ((answer[j] > 64 && answer[j] < 91) || (answer[j] > 96 && answer[j] < 123))
�̷������� �빮���� ���� �ҹ����ΰ�찡 ���϶��� ������ ��µ� ���ǽ��� ���ư����ʾƼ� �ƴѰ����� if ~ elseif������ ������ �����߰� �׽�Ʈ���̽� ����� �ùٸ��� �Ǵ� ���� Ȯ���ߴ�.
*/

/*=========================����� ��==============================*/
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
//		if (n % i == 0) {	// ����� �μ��� ������ �������� 0�϶��̱⶧���� ���ǽ��� �������� 0�ϰ��� ��
//			sum += i;		// ��������� 1~n ���� ���� ���� ���Ѵٰ� �����ؼ� ���ǽ��� �������� i�� sum�� ���ϸ��.
//			answer = sum;
//		}	
//	}
//	return answer;
//}
//
//int main() //�׽�Ʈ���̽��� �����ϱ����� main
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

///*=========== �ڵ��� ��ȣ ������ ====================*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include<string.h>
//
//// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
//char* solution(const char* phone_number) {
//	// return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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
///*
//ó���� strnset�� �̿��Ͽ��� �ܼ��ϰ� �ٲٴ� �������پ˰� Ǯ���� ������ ���α׷��ӽ����� ������ ���� ������ �Լ��� Ǫ�°� �ƴ϶�� ���� ���ݰ� �ٽ� �õ���
//���������� ���̰� 4�̻� 20������ ���ڿ��̱⶧���� �����Ҵ��� 20�� �ְ� ���ڿ��� ������ 4�ڸ��� phone_number�� ���̰� �������� *�� ǥ���Ѵٴ� ������ 
//��ü ���ڿ����̿��� len-4 ������ *�� �����ϸ� �ǰڴٰ� �����ϰ� ���� ������ �迭�� ���� �����ϰ� �ݺ����� ���� arr[0]���� arr[len-5] ������ *�� �ְ�
//arr[len-4] ���� arr[len] ������ ������ phone_number�� ���� �״�� ���Խ�Ų �� answer ���ڿ������Ͱ����� arr���ڿ��� strcpy�� ���� ������ ��½�Ŵ
//*/

/*=============�ڸ��� ���ϱ�====================*/

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
//	// ����� �˱������� �ۼ��ߴ� �ڵ���. �ʹ� �����ϰ� �����ߴ�. while������ �ڿ��� n�� ���̸� ���ϴ� ������ �����ϴ� ���� Ǯ���ִ� ����� �ľ��� ���� 
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
//	while (n > 0) // n�� 0���� Ŭ���� �ݺ�
//	{
//		na = n % 10; //na(������������) �� �ڿ��� n ���� 10�� ���� ���������� ����
//		n /= 10; // �� �� n�� 10������ ������ ����
//		sum += na; // ���� ���ϴ� ���� sum�� �������� na�� ���ؼ� ����
//	}
//	answer = sum; //while���� �����µ��� ������ sum���� answer�� ����
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
///*
//������ �ʹ� ��ư� �����ϸ� �ȵ�. 
//�� �ڸ����� ���� ���ϴ� �����̱� ������ ó���� ���� int*�� c�� ������ �ڿ����� ���̸�ŭ �Ҵ����ְ� for���� ���� c�� �պ��� 
//���ʴ�� n / 10^(len-i-1) ��, �� ���ڸ��� 10���� �ڸ����� ������ ���� ���� �����ϰ� �׵� n�� �������� ������ �� sum�� c[i]������ �ִ� ���� ���ؼ� ����Ϸ��ߴ�.
//������ ���� �ּ��� ���� �ڿ��� n�� ���̸� ���Ϸ��� ��� while������ n /= 10 �� �ݺ��� ���ϴ� �Ŀ��� ���������� �߰��� �װ��� ���ϸ� ���� �ʳ� ��� ������ ����� 
//�� ������ �ݿ��� �����ؼ� ó����
//*/
//
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






///*=========�ϻ��� �� ============*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//bool solution(int x) {
//	bool answer = true;
//	int sum = 0;
//	int x_num = x;			//���� x�� ������� ���� x_num ����
//
//	while (x_num > 0)		//x_num �� 0���� Ŭ������ �ݺ��ϰڴ�
//	{
//		int m = x_num % 10;	//���� x�� 10�� ������ ������ �������� 1�� �ڸ������� �����̰� �װ��� m�� ����
//		x_num /= 10;		//x_num�� x_num�� 0���� Ŭ���� 10���� ���� ������ ����
//		sum += m;			//sum������ �������� ���� ���ڵ��� ��� ����
//	}
//
//	if (x % sum  == 0)		//�ϻ��� �� ��Ģ (���� x �� x�� ���ڸ��� �ִ� ���ڵ��� ������ ������ ���� �ϻ��� �� )�� ������ true Ʋ���� false 
//		answer = true;
//	else
//		answer = false;
//
//	return answer;
//}


/////*========= ���� ���ϱ� ============*/
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//// absolutes_len�� �迭 absolutes�� �����Դϴ�.
//// signs_len�� �迭 signs�� �����Դϴ�.
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

 
/* ===================== �ݶ��� ���� ===================== */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
	int answer = 0;
	long long numcpy = num; // num�� 626331���� ū ���� �������� Ȧ���ϰ�쿡 �������� num���� int ������ ����� ��� �����÷ο찡 �߻��Ѵ�. ������ 626331 ������� ������ 104��°���� ������ ��ȯ�ȴ�. 
	int count = 0;

	while (numcpy != 1) { //numcpy�� 1�� �ƴҵ��� ��� �ݺ�

		if (count > 500) { //3. �׷��� �ݺ��ϸ鼭 �� Ƚ��(count)�� 500�� �Ѵ´ٸ� -1�� ����Ѵ�.
			return answer = -1;
		}
		else if (numcpy % 2 == 0) { // ����1. ¦����� 2�� ������
			numcpy /= 2;
			count++;
		}
		else {
			numcpy = numcpy * 3 + 1; // ����2. Ȧ����� 3�����ϰ� 1�� ���Ѵ�.
			count++;
		}
		answer = count; 
	}
	return answer;
}

int main() {
	int num;
	int res;

	num = 626331;
	res = solution(num);
	printf("%d\n", res);

	num = 6;
	res = solution(num);
	printf("%d\n", res);

	num = 16;
	res = solution(num);
	printf("%d\n", res);
}