//#include<stdio.h>	
//#include<stdlib.h>
//#include<string.h>
//
////binary data는 길이를 알아야 하기에 길이값이 주어져야할 것이고 그 길이를 기반으로 hex문자열을 만들어 낸다.
//int bin2hex(const unsigned char *in_bin, int bin_len, char *out_hex);
//
////반대로 hex문자열은 문자열이기에 문자열의 마지막 null이 주어질것이고 그렇기에 길이는 hex 문자열을 이용하면 구할 수 있기에 매개변수로 던질필요가 딱히 없다.
//size_t hexs2bin(const char *in_hexs, unsigned char *out_h2b);
//
////hex 문자열에 있는 요소하나를 ascii 값으로 바꾸는 함수 
//int hexchr2ascii(const char in_hex_elements, char *out_ascii);
//
//int main() {
//	unsigned char bin_data[] = { 0x01, 0x20 ,0x02, 0x03, 0x20 ,0x64, 0xA0, 0xFE ,0x00 };
//	int bin_len = 8;
//	char *hex = calloc(bin_len * 2 + 1, sizeof(char));
//	
//	unsigned char *h2bin = calloc(bin_len, sizeof(unsigned char));
//	
//	//만약 hex 문자열을 디코딩하는 것부터 한다면 h2bin 할당은 아래처럼 해야하나??
//	//int hex_len = strlen(hex);
//	//unsigned char *h2bin = calloc(hex_len /2  - 1, sizeof(unsigned char));
//
//	/*
//	지금은 내가 직접 binarydata를 encoding하고 그 hex를 다시 decoding하는 과정이라 길이를 안다는 전제하에 코딩하지만
//
//	애초에 hex로 되어있는 데이터를 binary로 바꿀때는 해당 binarydata와 같이 길이또한 출력해서 binarydata와 길이가 같이 다니게 하기 위해 만듦
//	*/
//	size_t H2B_len;
//	
//	printf("원문 bin \n");
//	printf("=========== \n");
//	printf("%s\n", bin_data);
//	printf("\n\n");
//
//	if(!bin2hex(bin_data, bin_len, hex)) printf("encoding error");
//	
//
//	printf("B2H ---> %s\n", hex);
//	printf("\n\n");
//
//	H2B_len = hexs2bin(hex,h2bin);
//
//	printf("Hex 문자열 디코딩후 \n");
//	printf("=========== \n");
//	printf("디코딩data길이 %d %s\n", H2B_len ,h2bin);
//
//	if (memcmp(bin_data, h2bin, sizeof(bin_data)) != 0)
//		printf("-----------------!!!!!!!!!!\n");
//
//	free(h2bin);
//	free(hex);
//
//
//}
//
////b2h 함수
//int bin2hex(const unsigned char *in_bin, int bin_len, char *out_hex) {
//	int i;
//	char *hexstr = "0123456789ABCDEF";
//
//	if (in_bin == NULL || bin_len == 0) return 0;
//
//	for (i = 0; i < bin_len; i++) {
//		out_hex[i * 2] = hexstr[in_bin[i] >> 4];
//		out_hex[i * 2 + 1] = hexstr[in_bin[i] & 0x0F];
//	}
//	out_hex[bin_len * 2] = '\0';
//
//	return 1;
//}
//
//size_t hexs2bin(const char *in_hexs, unsigned char *out_h2b) {
//	int len = strlen(in_hexs);
//	char b1;
//	char b2;
//	int i;
//
//	if (in_hexs == NULL || *in_hexs == '\0' || out_h2b == NULL) return 0;
//
//	len /= 2;
//
//	out_h2b = calloc(len, sizeof(char));
//	for (i = 0; i < len; i++) {
//
//		//문자변환을 둘중 하나라도 실패했다면 0 아니면 out배열에 타겟데이터 넣고 out 주소 반환
//		if (!hexchr2ascii(in_hexs[i * 2], &b1) || !hexchr2ascii(in_hexs[i * 2 + 1], &b2)) {
//			return 0;
//		}
//		out_h2b[i] = (b1 << 4) | b2;
//	}
//
//
//	return len;
//
//}
//
////오류가 나면 0반환, 정상적으로 종료되면 1 반환(오류코드)
//int hexchr2ascii(const char in_hex_elements, char *out_ascii) {
//	if (out_ascii == NULL) return 0;
//
//	if (in_hex_elements >= '0' && in_hex_elements <= '9') {
//		*out_ascii = in_hex_elements - '0';
//	}
//	else if (in_hex_elements >= 'A' && in_hex_elements <= 'F') {
//		*out_ascii = in_hex_elements - 'A' + 10;
//	}
//	else if (in_hex_elements >= 'a' && in_hex_elements <= 'f') {
//		*out_ascii = in_hex_elements - 'a' + 10;
//	}
//	else {
//		return 0;
//	}
//	return 1;
//}