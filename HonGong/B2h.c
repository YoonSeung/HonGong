//#include<stdio.h>	
//#include<stdlib.h>
//#include<string.h>
//
////확장 아스키 
//void B2H_func(unsigned char *bin, int bin_len ,char *hex_data);
//void H2B_func(char *hex_data, unsigned char *H2B_data);
//
//int main() {
//	unsigned char bin_data[] = { 0x01, 0x20 ,0x02, 0x03, 0x20 ,0x64, 0xA0 ,0x00 };
//	//바이너리 데이터는 길이를 모르면 쓸 수 없다.
//	int len = 8;
//	char *B2H_data = (char*)calloc( len * 2 + 1 , sizeof(char));
//	unsigned char *H2B_data = (unsigned char *)calloc(len+1, sizeof(unsigned char));
//
//
//	printf("원문 bin \n");
//	printf("=========== \n");
//	printf("%s\n", bin_data);
//	printf("\n\n");
//
//	B2H_func(bin_data, len ,B2H_data);
//	printf("B2H ---> %s\n", B2H_data);
//	printf("\n\n");
//
//	
//	H2B_func(B2H_data, H2B_data);
//	printf("Hex 문자열 디코딩후 \n");
//	printf("=========== \n");
//	printf("%s\n", H2B_data);
//
//	//원문과 헥사를 디코딩한 data가 같은 크기인지 구하는 함수 틀리면 프린트문 실행
//	if(memcmp(bin_data, H2B_data, sizeof(bin_data)) != 0)
//		printf ("-----------------!!!!!!!!!!\n");
//
//
//	free(H2B_data);
//	free(B2H_data);
//
//
//}
//
///*평문 hex인코딩 하는 함수*/
//void B2H_func(unsigned char *bin, int bin_len ,char *hex_data) {
//
//	int iter;
//	for (iter = 0; iter < bin_len; iter++)
//		sprintf(hex_data + (iter * 2), "%02x", bin[iter]);
//	hex_data[bin_len * 2 - 1] = '\0';
//	/*
//	int i;
//	char hexc[3] = { 0, };
//	for (i = 0; i < bin_len; i++) {
//		sprintf(hexc, "%02X", bin[i]);
//		strcat(hex_data, hexc);
//	}
//	*/
//}
//
//
///*hex인코딩된 문자열 평문으로 디코딩 하는 함수*/
//void H2B_func(char *hex_data, unsigned char *H2B_data) {
//	int i = 0, j = 0, sp = 0;
//	int imsi[2] = { 0, };
//	int lsum = 0, rsum = 0, final_sum = 0, lcount = 0, rcount = 0;
//	int len = strlen(hex_data);
//
//	while (i < len) {
//		sp = (int)hex_data[i];
//
//		if (i % 2 == 0) {
//			if (sp >= '0' && sp <= '9') {
//				lsum = sp - '0';
//			}
//			else if (sp >= 'A' && sp <= 'F') {
//				lsum = sp - 'A' + 10;
//			}
//			else if (sp >= 'a' && sp <= 'f') {
//				lsum = sp - 'a' + 10;
//			}
//
//			/* lsum *16 과 rsum 표현 대신 쓸 수 있는 방법
//			lsum = data << 4; // 타겟data를 4비트 왼쪽으로 옮겨 *16과 같은 처리 앞열만 남음
//			lsum | (data & 0x0f);// 혹시 모를 앞열 데이터를 and 연산으로 지워서 뒤 4비트만 남기게 한 후 lsum과 or연산으로 합치기
//			*/
//			lsum = lsum * 16;
//			imsi[0] = lsum;
//			lcount++;
//		}
//		else {
//			if (sp >= '0' && sp <= '9') {
//				rsum = sp - '0';
//			}
//			else if (sp >= 'A' && sp <= 'F') {
//				rsum = sp - 'A' + 10;
//			}
//			else if (sp >= 'a' && sp <= 'f') {
//				rsum = sp - 'a' + 10;
//			}
//			imsi[1] = rsum;
//			rcount++;
//		}
//		
//		/*인코딩된 앞글자 if문 , 뒷글자 if문이 실행되었을때만 결과도출하는 함수*/
//		if (lcount == 1 && rcount == 1) {
//			final_sum = lsum + rsum;
//			H2B_data[i/2] = final_sum;
//			imsi[0] = 0;
//			imsi[1] = 0;
//			lcount = 0;
//			rcount = 0;
//			j++;
//		}
//		i++;
//	}
//}
//
