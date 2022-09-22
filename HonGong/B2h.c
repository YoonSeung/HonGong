#include<stdio.h>	
#include<stdlib.h>
#include<string.h>

void B2H_func(char *bin, int bin_len ,char *hex_data);
void H2B_func(char *hex_data, char *binary_data);

int main() {
	char bin_data[] = { 0x01, 0x02, 0x03, 0x64 ,0x0A, 0x0C, 0x0D, 0x6D ,0x00 };
	int len = strlen(bin_data);
	char *B2H_data = (char*)calloc( len * 2 + 1 , sizeof(char));
	char *H2B_data = (char *)calloc(len, sizeof(char));

	printf("원문 bin \n");
	printf("=========== \n");
	printf("%s\n", bin_data);

	B2H_func(bin_data, len ,B2H_data);
	printf("B2H ---> %s\n", B2H_data);

	H2B_func(B2H_data, H2B_data);
	printf("디코딩후 bin \n");
	printf("=========== \n");
	printf("%s\n", H2B_data);

	free(H2B_data);
	free(B2H_data);


}

/*평문 hex인코딩 하는 함수*/
void B2H_func(char *bin, int bin_len ,char *hex_data) {
	int i;
	char hexc[3] = { 0, };
	for (i = 0; i < bin_len; i++) {
		if (bin[i] == '\0') break;
		sprintf(hexc, "%02X", bin[i]);
		strcat(hex_data, hexc);
	}
}


/*hex인코딩된 문자열 평문으로 디코딩 하는 함수*/
void H2B_func(char *hex_data, char *binary_data) {
	int i = 0, j = 0;
	char sp = ' ';
	int imsi[2] = { 0, };
	int lsum = 0, rsum = 0, final_sum = 0, lcount = 0, rcount = 0;
	int len = strlen(hex_data);

	while (i < len) {
		sp = hex_data[i];

		if (i % 2 == 0) {
			if (sp >= '0' && sp <= '9') {
				lsum = sp - 48;
			}
			else if (sp >= 'A' && sp <= 'F') {
				lsum = sp - 65 + 10;
			}
			else if (sp >= 'a' && sp <= 'f') {
				lsum = sp - 97 + 10;
			}
			lsum = lsum * 16;
			imsi[0] = lsum;
			lcount++;
		}
		else {
			if (sp >= '0' && sp <= '9') {
				rsum = sp - 48;
			}
			else if (sp >= 'A' && sp <= 'F') {
				rsum = sp - 65 + 10;
			}
			else if (sp >= 'a' && sp <= 'f') {
				rsum = sp - 97 + 10;
			}
			imsi[1] = rsum;
			rcount++;
		}

		/*인코딩된 앞글자 if문 , 뒷글자 if문이 실행되었을때만 결과도출하는 함수*/
		if (lcount == 1 && rcount == 1) {
			final_sum = lsum + rsum;
			binary_data[i] = final_sum;
			imsi[0] = 0;
			imsi[1] = 0;
			lcount = 0;
			rcount = 0;
			j++;
		}
		i++;
	}
}