//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int bin2hex(const unsigned char *in_bin, int bin_len, char *out_hex);
//size_t hexs2bin(const char *in_hexs, unsigned char **out_h2b);
//int hexchr2ascii(const char in_hex_elements, char *out_ascii);
//
//int main() {
//	FILE *Binfp , *Hexfp, *H2Bfp;
//	unsigned char *buffer =calloc(5, sizeof(unsigned char));
//	char *hexbuffer = calloc(11, sizeof(char));
//	int count,recount;
//	
//	//���ڵ��ϱ�
//	Binfp = fopen("4.PNG", "rb");
//	if (Binfp == NULL) {
//		fputs("File error", stderr);
//		exit(1);
//	}
//
//	Hexfp = fopen("Hex2Png.PNG", "wb");
//
//	while (!feof(Binfp)) {
//
//		count = fread(buffer, sizeof(unsigned char), 5, Binfp);
//		
//		bin2hex(buffer, count, hexbuffer);
//
//		fwrite(hexbuffer, sizeof(char), count*2, Hexfp);
//		memset(buffer, 0, 5);
//		memset(hexbuffer, 0, 11);
//	}
//
//	fclose(Binfp);
//	fclose(Hexfp);
//
//
//	//���ڵ��ϱ�
//	Hexfp = fopen("Hex2Png.PNG", "rb");
//	if (Hexfp == NULL) {
//		fputs("File error", stderr);
//		exit(2);
//	}
//
//	H2Bfp = fopen("H2B_success.PNG", "wb");
//
//	while (!feof(Hexfp)) {
//		fread(hexbuffer, sizeof(char), 10, Hexfp);
//
//		recount=hexs2bin(hexbuffer, &buffer);
//
//		fwrite(buffer, sizeof(unsigned char), recount, H2Bfp);
//
//		memset(hexbuffer, 0, 11);
//		memset(buffer, 0, 5);
//	}				
//
//	fclose(H2Bfp);
//	fclose(Hexfp);
//
//	//ũ�� ������ ���ϱ�
//	Binfp = fopen("4.PNG", "rb");
//	H2Bfp = fopen("H2B_success.PNG", "rb");
//
//	
//}
//
////b2h �Լ�
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
//size_t hexs2bin(const char *in_hexs, unsigned char **out_h2b) {
//	int len = strlen(in_hexs);
//	char b1;
//	char b2;
//	int i;
//
//	if (in_hexs == NULL || *in_hexs == '\0') return 0;
//	
//	if (len % 2 != 0)
//		return 0;
//
//	len /= 2;
//
//	*out_h2b = calloc(len, sizeof(char));
//	for (i = 0; i < len; i++) {
//
//		//���ں�ȯ�� ���� �ϳ��� �����ߴٸ� 0 �ƴϸ� out�迭�� Ÿ�ٵ����� �ְ� out �ּ� ��ȯ
//		if (!hexchr2ascii(in_hexs[i * 2], &b1) || !hexchr2ascii(in_hexs[i * 2 + 1], &b2)) {
//			return 0;
//		}
//		(*out_h2b)[i] = (b1 << 4) | b2;
//	}
//	return len;
//}
//
////������ ���� 0��ȯ, ���������� ����Ǹ� 1 ��ȯ(�����ڵ�)
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