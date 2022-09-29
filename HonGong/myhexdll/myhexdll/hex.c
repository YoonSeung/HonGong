#include "hex.h"

//file Bin -> Hex func
int fileB2H(FILE *in_binfile, FILE *out_B2H_hexfile) {
	int count;
	unsigned char buffer[100] = { 0, };
	char hexbuffer[201] = { 0, };

	while (!feof(in_binfile)) {
		count = fread(buffer, sizeof(unsigned char), 100, in_binfile);
		bin2hex(buffer, count, hexbuffer);
		fwrite(hexbuffer, sizeof(char), count * 2, out_B2H_hexfile);
		memset(buffer, 0, 100);
		memset(hexbuffer, 0, 201);
	}
	printf("file encoding success\n");
	fclose(in_binfile);
	fclose(out_B2H_hexfile);

	return 1;
}

//file Hex-> bin func
int fileH2B(FILE *in_hexfile, FILE *out_H2B_binfile) {
	int readcnt, count;
	unsigned char buffer[100] = { 0, };
	char hexbuffer[201] = { 0, };

	while (!feof(in_hexfile)) {
		readcnt = fread(hexbuffer, sizeof(char), 200, in_hexfile);

		if (readcnt % 2 == 0) {
			count = hexs2bin(hexbuffer, buffer);
			fwrite(buffer, sizeof(unsigned char), count, out_H2B_binfile);
			memset(hexbuffer, 0, 201);
			memset(buffer, 0, 100);
		}
		else {
			printf("fileH2B_func --> hexfile read err\n");
			fclose(in_hexfile);
			fclose(out_H2B_binfile);
			return -1;
		}
	}
	return 1;
}

//bindata -> hex func
int bin2hex(const unsigned char *in_bin, int bin_len, char *out_hex) {
	int i;
	char *hexstr = "0123456789ABCDEF";

	if (in_bin == NULL || bin_len == 0) return 0;

	for (i = 0; i < bin_len; i++) {
		out_hex[i * 2] = hexstr[in_bin[i] >> 4];
		out_hex[i * 2 + 1] = hexstr[in_bin[i] & 0x0F];
	}
	out_hex[bin_len * 2] = '\0';

	return 1;
}

//hexString -> bin data func
size_t hexs2bin(const char *in_hexs, unsigned char *out_H2B_bindata) {
	int len = strlen(in_hexs);
	char b1, b2;
	int i;

	if (in_hexs == NULL || *in_hexs == '\0') return 0;
	if (len % 2 != 0) {
		printf("hexs2bin_func --> hexstring len err\n");
		return -1;
	}
	len /= 2;
	
	for (i = 0; i < len; i++) {
		if (!hexchr2ascii(in_hexs[i * 2], &b1) || !hexchr2ascii(in_hexs[i * 2 + 1], &b2)) {
			return 0;
		}
		out_H2B_bindata[i] = (b1 << 4) | b2;
	}
	return len;
}

//hexString element -> ascii func
int hexchr2ascii(const char in_hex_elements, char *out_ascii) {
	if (out_ascii == NULL) return 0;
	if (in_hex_elements >= '0' && in_hex_elements <= '9') {
		*out_ascii = in_hex_elements - '0';
	}
	else if (in_hex_elements >= 'A' && in_hex_elements <= 'F') {
		*out_ascii = in_hex_elements - 'A' + 10;
	}
	else if (in_hex_elements > -'a' && in_hex_elements <= 'f') {
		*out_ascii = in_hex_elements - 'a' + 10;
	}
	else {
		return 0;
	}
	return 1;
}