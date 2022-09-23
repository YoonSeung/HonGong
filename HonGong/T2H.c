////#include<stdio.h>	
////#include<stdlib.h>
////#include<string.h>
////
/////*
////feedback
////void* 형 함수는 반환해야한다는건 아는데 무엇을 반환하는지에 대한 명확한 이해가 필요함
////함수의 경우 안에서 해결하고 끝나는건데 void* 을 쓰면 반환값이 필요로 하기 때문에 안됨.
////솔루션 다시 빌드 했을때 나오는 warning 다 없앨 생각 해야함
////*/
////
/////*
////===인코딩 구현중 내 문제점 ===
////
////1. 평문을 인코딩한 문자열을 저장할때 어떻게 처리할지 방향을 잡지 못함 (기존에는 문자열 형변환으로 찍어내기만했기때문)
////2. 방향을 잡고 난 후 함수 구현부분에서 문자열을 strcpy로 하려고만 해서 값이 자꾸 2글자만 나왔음 
////	순서 다시 정리 => 평문 1개문자 읽기 -> 16진수 인코딩하기 -> 인코딩된 문자열 저장 -> 다음 평문 1개 문자 읽기 -> 16진수인코딩 -> 기존에 저장된 문자열뒤에 저장
////	마지막 (기존에 저장된 문자열 뒤에 저장) 이라는 키워드를 생각하는데에 시간이 너무 오래 쓰임
////3. strcat을 활용해서 붙이면 되겠다고 생각한 후 함수돌리는데 에러가 뜸.
////4. 디버깅을 해보니 hex_str가 쓰레기값이 들어가있고 그 뒤로 인코딩한 문자열이 붙여지는 것을 확인
////5. malloc 대신 calloc으로 0으로 모두 초기화 하고 다시 실행해서 에러 해결
////
////6. ubuntu에서는 malloc으로 해도 값이 제대로 찍히는거 나중에 확인해보기(내 생각엔 vs 디버깅모드에서만 쓰레기값을 넣어주는 모드라서 vs에서 알려준거라고 생각)
////7. free 또 까먹을뻔
////*/
////
/////*
////===디코딩 구현중 내 문제점 ===
////1. 단계별로 되나 확인하기 위해 물리적으로 횟수를 지정해서 결과 도출하는 것 까진 나왔음
////
////2. 반복적으로 수행되는 부분을 반복문처리하는 과정에서 오래걸림
////	의문 1 : 짝수일때와 홀수일때의 if문 두개가 실행 되었을때만 conv_str에 아스키값 대입하는걸 어떻게 처리할지
////	의문 2 : 인코딩된 문자열의 앞은 16진수의 제곱, 뒤 16진수의 1의자리를 어디다 저장할지에 대한 의문
////		- 2번 의문은 프로그래머스에서 풀었던 내용을 응용해 imsi라는 int형 배열 2개를 선언해 저장하기로함
////		- 1번 의문은 if문이 실행되면 1로 값이 증가하는 변수를 선언해 체크한다 생각했음
////	마지막 if문에서 왼쪽문자의 카운트와 오른쪽문자의 카운트가 전부 체크(1)이 되었을때만 두 수를 더해서 아스키값을 구하고 그 아스키값을 char형으로 변환해 문자열배열에 저장하는 것으로 해결
////
////*/
////
////void T2H_func(const char *Text, int Text_len, char *hex_data);
////void H2T_func(char *hex_data, char *conv_str);
////
////int main() {
////	char *test_str = "my name is yoon hi";
////
////	int test_str_len = strlen(test_str);
////	char *T2H_str = (char*)calloc(test_str_len *2+1, sizeof(char));
////	char *H2T_str = (char*)calloc(test_str_len +1, sizeof(char));
////
////	printf("원문 ---> %s\n", test_str);
////	
////
////	T2H_func(test_str, test_str_len, T2H_str);
////	printf("T2H ---> %s\n", T2H_str);
////	
////
////	H2T_func(T2H_str, H2T_str);
////	printf("H2T ---> %s\n", H2T_str);
////	
////
////	free(H2T_str);
////	free(T2H_str);
////
////}
////
/////*평문 hex인코딩 하는 함수*/
////void T2H_func(const char *Text, int Text_len, char *hex_data) {
////	int i;
////	char hexc[3] = { 0, };
////	for (i = 0; i < Text_len; i++) {
////		sprintf(hexc, "%02X", Text[i]);
////		strcat(hex_data, hexc);
////	}
////}
////
////
/////*hex인코딩된 문자열 평문으로 디코딩 하는 함수*/
////void H2T_func(char *hex_data, char *conv_str) {
////	int i = 0, j = 0;
////	char sp = ' ';
////	int imsi[2] = { 0, };
////	int lsum = 0, rsum = 0, final_sum = 0, lcount = 0, rcount = 0;
////	int len = strlen(hex_data);
////
////	while (i < len) {
////		sp = hex_data[i];
////
////		if(i%2 ==0) {	
////			if (sp >= '0' && sp <= '9') {
////				lsum = sp - 48;
////			}
////			else if (sp >= 'A' && sp <= 'F') {
////				lsum = sp - 65 + 10;
////			}
////			else if (sp >= 'a' && sp <= 'f') {
////				lsum = sp - 97 + 10;
////			}
////			lsum = lsum * 16;
////			imsi[0] = lsum;
////			lcount++;
////		}
////		else {
////			if (sp >= '0' && sp <= '9') {
////				rsum = sp - 48;
////			}
////			else if (sp >= 'A' && sp <= 'F') {
////				rsum = sp - 65 + 10;
////			}
////			else if (sp >= 'a' && sp <= 'f') {
////				rsum = sp - 97 + 10;
////			}
////			imsi[1] = rsum;
////			rcount++;
////		}
////
////		 /*인코딩된 앞글자 if문 , 뒷글자 if문이 실행되었을때만 결과도출하는 함수*/
////		if (lcount ==1 && rcount ==1) {
////			final_sum = lsum + rsum;
////			conv_str[j] = (char)final_sum;
////			imsi[0] = 0;
////			imsi[1] = 0;		
////			lcount = 0;
////			rcount = 0;
////			j++;
////		}
////		i++;
////	} 
////}
////		/*처음 2문자 중 앞열 */
////		sp = hex_str[0];
////		if (sp >= '0' && sp <= '9') {
////			lsum = sp - 48;
////		}
////		else if (sp >= 'A' && sp <= 'F') {
////			lsum = sp - 65 + 10;
////		}
////		lsum = lsum * 16;
////		/*처음 2문자 중 뒷열 */
////		sp = hex_str[1];
////		if (sp >= '0' && sp <= '9') {
////			rsum = sp - 48;
////		}
////		else if (sp >= 'A' && sp <= 'F') {
////			rsum = sp - 65 + 10;
////		}
////
////		final_sum = lsum + rsum;
////		conv_str[0] = (char)final_sum;
////
////		/*다음 2문자 중 앞열 */
////		sp = hex_str[2];
////		if (sp >= '0' && sp <= '9') {
////			lsum = sp - 48;
////		}
////		else if (sp >= 'A' && sp <= 'F') {
////			lsum = sp - 65 + 10;
////		}
////		lsum = lsum * 16;
////		/*다음 2문자 중 뒷열 */
////		sp = hex_str[3];
////		if (sp >= '0' && sp <= '9') {
////			rsum = sp - 48;
////		}
////		else if (sp >= 'A' && sp <= 'F') {
////			rsum = sp - 65 + 10;
////		}
////
////		final_sum = lsum + rsum;
////		conv_str[1] = (char)final_sum; // 되는거 확인했음
