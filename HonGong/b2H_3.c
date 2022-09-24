#include<stdio.h>	
#include<stdlib.h>
#include<string.h>

//binary data�� ���̸� �˾ƾ� �ϱ⿡ ���̰��� �־������� ���̰� �� ���̸� ������� hex���ڿ��� ����� ����.
int bin2hex(const unsigned char *in_bin, int bin_len, char *out_hex);

//�ݴ�� hex���ڿ��� ���ڿ��̱⿡ ���ڿ��� ������ null�� �־������̰� �׷��⿡ ���̴� hex ���ڿ��� �̿��ϸ� ���� �� �ֱ⿡ �Ű������� �����ʿ䰡 ���� ����.
size_t hexs2bin(const char *in_hexs, unsigned char *out_h2b);

//hex ���ڿ��� �ִ� ����ϳ��� ascii ������ �ٲٴ� �Լ� 
int hexchr2ascii(const char in_hex_elements, char *out_ascii);

int main() {
	unsigned char bin_data[] = { 0x01, 0x20 ,0x02, 0x03, 0x20 ,0x64, 0xA0, 0xFE ,0x00 };
	int bin_len = 8;
	char *hex = calloc(bin_len * 2 + 1, sizeof(char));
	
	unsigned char *h2bin = calloc(bin_len, sizeof(unsigned char));
	
	//���� hex ���ڿ��� ���ڵ��ϴ� �ͺ��� �Ѵٸ� h2bin �Ҵ��� �Ʒ�ó�� �ؾ��ϳ�??
	//int hex_len = strlen(hex);
	//unsigned char *h2bin = calloc(hex_len /2  - 1, sizeof(unsigned char));

	/*
	������ ���� ���� binarydata�� encoding�ϰ� �� hex�� �ٽ� decoding�ϴ� �����̶� ���̸� �ȴٴ� �����Ͽ� �ڵ�������

	���ʿ� hex�� �Ǿ��ִ� �����͸� binary�� �ٲܶ��� �ش� binarydata�� ���� ���̶��� ����ؼ� binarydata�� ���̰� ���� �ٴϰ� �ϱ� ���� ����
	*/
	size_t H2B_len;
	
	printf("���� bin \n");
	printf("=========== \n");
	printf("%s\n", bin_data);
	printf("\n\n");

	if(!bin2hex(bin_data, bin_len, hex)) printf("encoding error");
	

	printf("B2H ---> %s\n", hex);
	printf("\n\n");

	H2B_len = hexs2bin(hex,h2bin);

	printf("Hex ���ڿ� ���ڵ��� \n");
	printf("=========== \n");
	printf("���ڵ�data���� %d %s\n", H2B_len ,h2bin);

	if (memcmp(bin_data, h2bin, sizeof(bin_data)) != 0)
		printf("-----------------!!!!!!!!!!\n");

	free(h2bin);
	free(hex);


}

//b2h �Լ�
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

size_t hexs2bin(const char *in_hexs, unsigned char *out_h2b) {
	int len = strlen(in_hexs);
	char b1;
	char b2;
	int i;

	if (in_hexs == NULL || *in_hexs == '\0' || out_h2b == NULL) return 0;

	len /= 2;

	out_h2b = calloc(len, sizeof(char));
	for (i = 0; i < len; i++) {

		//���ں�ȯ�� ���� �ϳ��� �����ߴٸ� 0 �ƴϸ� out�迭�� Ÿ�ٵ����� �ְ� out �ּ� ��ȯ
		if (!hexchr2ascii(in_hexs[i * 2], &b1) || !hexchr2ascii(in_hexs[i * 2 + 1], &b2)) {
			return 0;
		}
		out_h2b[i] = (b1 << 4) | b2;
	}


	return len;

}

//������ ���� 0��ȯ, ���������� ����Ǹ� 1 ��ȯ(�����ڵ�)
int hexchr2ascii(const char in_hex_elements, char *out_ascii) {
	if (out_ascii == NULL) return 0;

	if (in_hex_elements >= '0' && in_hex_elements <= '9') {
		*out_ascii = in_hex_elements - '0';
	}
	else if (in_hex_elements >= 'A' && in_hex_elements <= 'F') {
		*out_ascii = in_hex_elements - 'A' + 10;
	}
	else if (in_hex_elements >= 'a' && in_hex_elements <= 'f') {
		*out_ascii = in_hex_elements - 'a' + 10;
	}
	else {
		return 0;
	}
	return 1;
}