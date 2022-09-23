//#include<stdio.h>	
//#include<stdlib.h>
//#include<string.h>
//
//void B2H_func(char *bin, int bin_len, char *hex_data);
//void H2B_func(char *hex_data, char *H2B_data, int len);
//
//int main() {
//	char bin_data[] = { 00000001,00000010,00000011,00000111 };
//	int len = strlen(bin_data);
//
//	char *B2H_data = (char*)calloc(len * 2+1 , sizeof(char));
//	char *H2B_data = (char *)calloc(len, sizeof(char));
//
//	B2H_func(bin_data, len, B2H_data);
//	printf("B2H ---> %s\n", B2H_data);
//
//	
//	H2B_func(B2H_data, H2B_data, len);
//
//	free(B2H_data);
//	free(H2B_data);
//
//}
//
///*평문 hex인코딩 하는 함수*/
//void B2H_func(char *bin, int bin_len ,char *hex_data) {
//	int i;
//	char hexc[9] = { 0, };
//	for (i = 0; i < bin_len/2; i++) {
//		
//		sprintf(hexc, "%02X", bin[i]);
//		strcat(hex_data, hexc);
//		if (hexc[i] == 0) break;
//	}
//}
//
///*hex인코딩된 문자열 평문으로 디코딩 하는 함수*/
//void H2B_func(char *hex_data, char *H2B_data, int len) {
//	int i = 0;
//	while (hex_data[i])
//	{
//		switch (hex_data[i])
//		{
//		case '0':
//			printf("0000"); break;
//		case '1':
//			printf("0001"); break;
//		case '2':
//			printf("0010"); break;
//		case '3':
//			printf("0011"); break;
//		case '4':
//			printf("0100"); break;
//		case '5':
//			printf("0101"); break;
//		case '6':
//			printf("0110"); break;
//		case '7':
//			printf("0111"); break;
//		case '8':
//			printf("1000"); break;
//		case '9':
//			printf("1001"); break;
//		case 'A':
//		case 'a':
//			printf("1010"); break;
//		case 'B':
//		case 'b':
//			printf("1011"); break;
//		case 'C':
//		case 'c':
//			printf("1100"); break;
//		case 'D':
//		case 'd':
//			printf("1101"); break;
//		case 'E':
//		case 'e':
//			printf("1110"); break;
//		case 'F':
//		case 'f':
//			printf("1111"); break;
//		default:
//			break;
//		}
//		i++;
//	}
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

void B2H_func(char *bin, int bin_len, char *hex_data);
int H2B_func(char *hex_data, char *binary_data);

int main(){
	char bin_data[] = { 0x01, 0x02, 0x03, 0x64 ,0x0A, 0x0C, 0x0D, 0x6D ,0x00 };
	int len = sizeof(bin_data);
	int len2 = 0;

	char *B2H_data = (char*)calloc(len * 2 + 1, sizeof(char));
	char *H2B_data = (char *)calloc(len, sizeof(char));

	printf("원문 bin \n");
	printf("=========== \n");
	printf("%s\n", bin_data);

	B2H_func(bin_data, len, B2H_data);
	printf("B2H ---> %s\n", B2H_data);

	len2 = H2B_func(B2H_data, H2B_data);
	printf("H2B ---> %s\n",  H2B_data);

	free(B2H_data);
	free(H2B_data);
}

/*평문 hex인코딩 하는 함수*/
void B2H_func(char *bin, int bin_len, char *hex_data)
{
	int i;
	char *ptr = hex_data;
	for (i = 0; i < bin_len; i++) {
		sprintf(ptr, "%02X", bin[i] & 0xFF);
		ptr += 2;
	}
	*ptr = 0;
}

/*hex인코딩된 문자열 평문으로 디코딩 하는 함수*/
int H2B_func(char *hex_data, char *binary_data)
{
	int len = strlen(hex_data);
	int i = 0, val = 0;
	int ch;
	for (i = 0; i < len; i++) {
		ch = hex_data[i];
		val *= 16;
		if (isdigit(ch)) val += ch - '0';
		else if (isupper(ch)) val += ch - 'A' + 10;
		else if (islower(ch)) val += ch - 'a' + 10;
		if (i % 2) {
			binary_data[i / 2] = val;
			val = 0;
		}
	}
	return i / 2;
}