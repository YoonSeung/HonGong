//#include<stdio.h>	
//#include<stdlib.h>
//#include<string.h>
//
//void T2H_func(const char *Text, int Text_len, char *hex_data);
//void H2T_func(char *hex_data, char *conv_str);
//
//int main() {
//	char *test_str;
//	test_str = (char *)calloc(1001, sizeof(char));
//
//	printf("원문 --->");
//	fgets(test_str, 1000, stdin);
//
//	int test_str_len = strlen(test_str);
//	char *T2H_str = (char*)calloc(test_str_len * 2 + 1, sizeof(char));
//	char *H2T_str = (char*)calloc(test_str_len + 1, sizeof(char));
//
//	printf("원문 ---> %s", test_str);
//	printf("크기---> %d\n", strlen(test_str) / sizeof(test_str));
//
//	T2H_func(test_str, test_str_len, T2H_str);
//	printf("T2H ---> %s\n", T2H_str);
//	printf("크기---> %d\n", strlen(T2H_str) / sizeof(T2H_str));
//
//	H2T_func(T2H_str, H2T_str);
//	printf("H2T ---> %s\n", H2T_str);
//	printf("크기 ---> %d\n", strlen(H2T_str) / sizeof(H2T_str));
//
//	free(H2T_str);
//	free(T2H_str);
//
//}
//
////평문 hex인코딩 하는 함수
//void T2H_func(const char *Text, int Text_len, char *hex_data) {
//	int i;
//	char hexc[3] = { 0, };
//	for (i = 0; i < Text_len; i++) {
//		if (Text[i] == '\n') break;
//		sprintf(hexc, "%02X", Text[i]);
//		strcat(hex_data, hexc);
//	}
//}
//
//
////hex인코딩된 문자열 평문으로 디코딩 하는 함수
//void H2T_func(char *hex_data, char *conv_str) {
//	int i = 0, j = 0;
//	char sp = ' ';
//	int imsi[2] = { 0, };
//	int lsum = 0, rsum = 0, final_sum = 0, lcount = 0, rcount = 0;
//	int len = strlen(hex_data);
//
//	while (i < len) {
//		sp = hex_data[i];
//
//		if (i % 2 == 0) {
//			if (sp >= '0' && sp <= '9') {
//				lsum = sp - 48;
//			}
//			else if (sp >= 'A' && sp <= 'F') {
//				lsum = sp - 65 + 10;
//			}
//			else if (sp >= 'a' && sp <= 'f') {
//				lsum = sp - 97 + 10;
//			}
//			lsum = lsum * 16;
//			imsi[0] = lsum;
//			lcount++;
//		}
//		else {
//			if (sp >= '0' && sp <= '9') {
//				rsum = sp - 48;
//			}
//			else if (sp >= 'A' && sp <= 'F') {
//				rsum = sp - 65 + 10;
//			}
//			else if (sp >= 'a' && sp <= 'f') {
//				rsum = sp - 97 + 10;
//			}
//			imsi[1] = rsum;
//			rcount++;
//		}
//
//		// 인코딩된 앞글자 if문 , 뒷글자 if문이 실행되었을때만 결과도출하는 함수
//		if (lcount == 1 && rcount == 1) {
//			final_sum = lsum + rsum;
//			conv_str[j] = (char)final_sum;
//			imsi[0] = 0;
//			imsi[1] = 0;
//			lcount = 0;
//			rcount = 0;
//			j++;
//		}
//		i++;
//	}
//}
