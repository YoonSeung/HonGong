//#include<stdio.h>	
//#include<stdlib.h>
//#include<string.h>
//
////binary data를 hex encoding 하는 함수
//char *bin2hex(const unsigned char *bin, int bin_len);
//char *hexs2bin(const char *hex, int hex_len);
//
////hex 문자열에 있는 요소하나를 ascii 값으로 바꾸는 함수 
//int hexchr2bin(const char hex, char *out);
//
//int main() {
//	unsigned char bin_data[] = { 0x01, 0x20 ,0x02, 0x03, 0x20 ,0x64, 0xA0 ,0x00 };
//	int bin_len = 8;
//	int hex_len;
//	char *hex;
//	unsigned char *h2bin;
//
//
//	printf("원문 bin \n");
//	printf("=========== \n");
//	printf("%s\n", bin_data);
//	printf("\n\n");
//
//	hex = bin2hex(bin_data, bin_len);
//
//	printf("B2H ---> %s\n", hex);
//	printf("\n\n");
//
//	hex_len = strlen(hex);
//	h2bin = hexs2bin(hex, hex_len);
//
//	printf("Hex 문자열 디코딩후 \n");
//	printf("=========== \n");
//	printf("%s\n", h2bin);
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
//char *bin2hex(const unsigned char *bin, int bin_len) {
//	char *out;
//	int i;
//	char *hexstr = "0123456789ABCDEF";
//
//	if (bin == NULL || bin_len == 0) return NULL;
//
//	out = calloc(bin_len * 2 + 1, sizeof(unsigned char));
//
//	for (i = 0; i < bin_len; i++) {
//		out[i * 2] = hexstr[bin[i] >> 4];
//		out[i * 2 + 1] = hexstr[bin[i] & 0x0F];
//	}
//	out[bin_len * 2] = '\0';
//	return out;
//}
//
////오류가 나면 0반환, 정상적으로 종료되면 1 반환
//int hexchr2bin(const char hex, char *out) {
//	if (out == NULL) return 0;
//
//	if(hex >= '0' && hex <= '9') {
//		*out = hex - '0';
//	}else if (hex >= 'A' && hex <= 'F') {
//		*out = hex - 'A' + 10;
//	}else if (hex >= 'a' && hex <= 'f') {
//		*out = hex - 'a' + 10;
//	}else {
//		return 0;
//	}
//	return 1;
//}
//
//char *hexs2bin(const char *hex, int hex_len) {
//	char *out;
//	char b1;
//	char b2;
//	int i;
//
//	if (hex == NULL || *hex == '\0') return 0;
//	hex_len /= 2;
//
//	out = calloc(hex_len, sizeof(char));
//	for (i = 0; i < hex_len; i++) {
//
//		//문자변환을 둘중 하나라도 실패했다면 0 아니면 out배열에 타겟데이터 넣고 out 주소 반환
//		if (!hexchr2bin(hex[i * 2], &b1) || !hexchr2bin(hex[i * 2 + 1], &b2)) {
//			return 0;
//		}
//		out[i] = (b1 << 4) | b2;
//	}
//
//	return out; 
//}
