//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int fileB2H(FILE *in_binfile, FILE *out_hexfile);
//int bin2hex(const unsigned char *in_bin, int bin_len, char *out_hex);
//
//int fileH2B(FILE *in_hexfile, FILE *out_B2Hbinfile);
//size_t hexs2bin(const char *in_hexs, unsigned char *out_h2b);
//int hexchr2ascii(const char in_hex_elements, char *out_ascii);
//
//int main() {
//	FILE *Binfp, *Hexfp, *H2Bfp;
//	int result;
//
//	//======= encoding
//	Binfp = fopen("bin.exe", "rb");
//
//	if (Binfp == NULL) {
//		printf("Binfile open failed\n");
//		exit(1);
//	}
//
//	Hexfp = fopen("B2H.exe", "wb");
//	result = fileB2H(Binfp, Hexfp);
//
//	if (result != 1) {
//		printf("encoding err \n");
//		exit(1);
//	}
//
//	//===== decoding
//	Hexfp = fopen("B2H.exe", "rb");
//
//	if (Hexfp == NULL) {
//		printf("hexfile open failed\n");
//		exit(1);
//	}
//	H2Bfp = fopen("H2B_success.exe", "wb");
//	result = fileH2B(Hexfp, H2Bfp);
//
//	if (result != 1) {
//		printf("decoding err \n");
//		exit(1);
//	}
//
//}
//
////File Bin -> Hex 함수
//int fileB2H(FILE *in_binfile, FILE *out_hexfile) {
//	int count;
//	unsigned char buffer[100] = { 0, };
//	char hexbuffer[201] = { 0, };
//
//	while (!feof(in_binfile)) {
//
//		count = fread(buffer, sizeof(unsigned char), 5, in_binfile);
//
//		bin2hex(buffer, count, hexbuffer);
//
//		fwrite(hexbuffer, sizeof(char), count * 2, out_hexfile);
//		memset(buffer, 0, 5);
//		memset(hexbuffer, 0, 11);
//	}
//	printf("file encoding success\n");
//	fclose(in_binfile);
//	fclose(out_hexfile);
//
//	return 1;
//}
//
////bin -> hexstring 함수
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
////File Hex -> bin 함수
//int fileH2B(FILE *in_hexfile, FILE *out_B2Hbinfile) {
//	int readcnt, count;
//	unsigned char buffer[100] = { 0, };
//	char hexbuffer[201] = { 0, };
//
//	while (!feof(in_hexfile)) {
//		readcnt = fread(hexbuffer, sizeof(char), 10, in_hexfile);
//
//		if (readcnt % 2 == 0) {
//
//			count = hexs2bin(hexbuffer, buffer);
//
//			fwrite(buffer, sizeof(unsigned char), count, out_B2Hbinfile);
//
//			memset(hexbuffer, 0, 11);
//			memset(buffer, 0, 5);
//		}
//		else {
//			printf("hexfile read err\n");
//			fclose(in_hexfile);
//			fclose(out_B2Hbinfile);
//			exit(1);
//		}
//	}
//	printf("file decoding success\n");
//	fclose(in_hexfile);
//	fclose(out_B2Hbinfile);
//
//	return 1;
//}
//
////hexstring -> bin data 함수
//size_t hexs2bin(const char *in_hexs, unsigned char *out_h2b) {
//	int len = strlen(in_hexs);
//	char b1;
//	char b2;
//	int i;
//
//	if (in_hexs == NULL || *in_hexs == '\0')
//		return 0;
//
//	if (len % 2 != 0) {
//		printf("hexstring len err");
//		return 0;
//	}
//
//	len /= 2;
//
//	for (i = 0; i < len; i++) {
//
//		if (!hexchr2ascii(in_hexs[i * 2], &b1) || !hexchr2ascii(in_hexs[i * 2 + 1], &b2)) {
//			return 0;
//		}
//		out_h2b[i] = (b1 << 4) | b2;
//	}
//	return len;
//}
//
////hexstring element -> ascii val 함수
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