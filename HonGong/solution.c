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

/*=========== �ڵ��� ��ȣ ������ ====================(22 08 29 Ǯ���ִ���)*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* phone_number) {
	// return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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