#include<stdio.h>	
#include<stdlib.h>
#include<string.h>


//char* print_hex(const char buf);
//
//void main() {
//	char *test_str = "my name is yoon seung hwan"; // �̷��� �־��� ��� ���ڿ� ���� txt������ hex�ϴ� ����� ã�ƺ���
//	int len = strlen(test_str);
//	char *hex_test_str = (char*)calloc(len*2,sizeof(char));
//	int i;
//
//	hex_test_str = print_hex(test_str,len);
//
//	printf("\n");
//	printf("%s", hex_test_str);
//
//	for (i = 0; i < len; i++) {
//		char ch = fgetc(test_str[i]);
//		hex_test_str[i] = print_hex(ch);
//	}
//	
//
//}
//char* print_hex(const char buf) {
//	int i;
//	char buf_cpy = buf;
//	int buf_cpy_num = (int)buf_cpy;
//	char hexc[2] = { 0, };
//	int position = 0;
//	char *hex_buf = malloc(sizeof(char) * 2);
//	
//	while (1) {
//		int mod = (int)buf % 16;
//		if (mod < 10) {
//			hexc[position] = 48 + mod;
//		}
//		else {
//			hexc[position] = 65 + (mod - 10);
//		}
//		buf_cpy_num = buf_cpy_num / 16;
//		position++;
//		if (buf_cpy_num == 0)
//			break;
//	}
//	return hexc;
//}





	//for (i = 0; i < len; i++) {
	//	c_hex = buf[i]/ 16;
	//	c_hex_back = buf[i] % 16;

	//	//���ڸ��� 10 ~ 19 �̸�
	//	if (c_hex >9 && c_hex < 20 ) {
	//		c_hex = c_hex - 48;
	//	}
	//	//����ҹ��� �� ��� 
	//	else if (buf[i] < 103 && buf[i] >96) {
	//		ch = buf[i] - 87;
	//	}
	//	else
	//		ch = buf[i];
	//}


//void main() {
//	FILE *src, *dest;
//	unsigned char ch;
//
//	src = fopen("test.txt", "rb");
//	if (src != NULL) {
//
//		dest = fopen("test_hex_file.txt", "wb");
//		if (dest == NULL) printf("����");
//
//		if (dest != NULL) {
//			while (!feof(src)) {
//				ch = fgetc(src);
//					fprintf(dest, "%02X", (unsigned char)ch);
//			}
//			fclose(dest);
//		}
//		fclose(src);
//		printf("����");
//	}
//}
//
//void fprint_hex(const char *buf) {
//	char ch;
//
//
//}



//#include <stdio.h>
//int main() {
//	int bindata, hexdata = 0, i = 1, remainder;
//	printf("Enter the binary number: ");
//
//	scanf("%ld", &bindata);
//
//	while (bindata != 0) {
//		remainder = bindata % 10;
//		hexdata = hexdata + remainder * i;
//		i = i * 2;
//		bindata = bindata / 10;
//	}
//	printf("Equivalent hexdata value: %lX", hexdata);
//	return 0;
//}

//int main(void)
//{
//	FILE *src, *dest;
//	char buf[1];
//	//int nread;
//	int i = 0;
//
//	// �Է� ������ ���̳ʸ� ���
//	src = fopen("test.txt", "rb");
//	if (NULL != src) {
//
//		// ��� ������ �ؽ�Ʈ ���. "\n"�� "\n", "\r\n", "\r" �� �ϳ��� �ڵ� �����.
//		dest = fopen("test_hex_file.txt", "wt");
//		if (NULL == dest) {
//			fclose(src);
//			puts("����");
//			exit(1);
//		}
//		while (1 == fread(buf, sizeof(char), 1, src)) {
//			if (i != 0 && i % 16 == 0)
//				fprintf(dest, "\n");
//			fprintf(dest, "%02x ", buf[0]);
//			i++;
//		}
//		if ((i - 1) % 16 != 0)
//			fprintf(dest, "\n");
//		fclose(dest);
//	}
//	fclose(src);
//	return 0;
//}
//
//int string2hex(char *str, char *hex) {
//	int i = 0;
//	int j = 0;
//	char temp = 0;
//	int str_len = strlen(str);
//	char *str_cpy = malloc(sizeof(char)*str_len);
//	strcpy(str_cpy, str);
//
//	if (str_len == 0) return 1;
//
//	while (i < str_len) {
//		if (str_cpy[i] >= '0' && str_cpy[i] <= 'F') {
//			if (str_cpy[i] >= '0' && str_cpy[i] <= '9') {
//				temp = (str_cpy[i] & 0x0f) << 4;
//			}
//			else if (str_cpy[i] >= 'A' && str_cpy[i] <= 'F') {
//				temp = ((str_cpy[i] + 0x09) & 0x0f) << 4;
//			}
//			else
//				return 1;
//		}
//		else
//			return 1;
//		i++;
//	}
//}

/*
** ���ڵ� ������ �� ������ **

1. ���� ���ڵ��� ���ڿ��� �����Ҷ� ��� ó������ ������ ���� ���� (�������� ���ڿ� ����ȯ���� ���⸸�߱⶧��)
2. ������ ��� �� �� �Լ� �����κп��� ���ڿ��� strcpy�� �Ϸ��� �ؼ� ���� �ڲ� 2���ڸ� ������ 
	���� �ٽ� ���� => �� 1������ �б� -> 16���� ���ڵ��ϱ� -> ���ڵ��� ���ڿ� ���� -> ���� �� 1�� ���� �б� -> 16�������ڵ� -> ������ ����� ���ڿ��ڿ� ����
	������ (������ ����� ���ڿ� �ڿ� ����) �̶�� Ű���带 �����ϴµ��� �ð��� �ʹ� ���� ����
3. strcat�� Ȱ���ؼ� ���̸� �ǰڴٰ� ������ �� �Լ������µ� ������ ��.
4. ������� �غ��� hex_str�� �����Ⱚ�� ���ְ� �� �ڷ� ���ڵ��� ���ڿ��� �ٿ����� ���� Ȯ��
5. malloc ��� calloc���� 0���� ��� �ʱ�ȭ �ϰ� �ٽ� �����ؼ� ���� �ذ�

6. ubuntu������ malloc���� �ص� ���� ����� �����°� ���߿� Ȯ���غ���(�� ������ vs ������忡���� �����Ⱚ�� �־��ִ� ���� vs���� �˷��ذŶ�� ����)
7. free �� �������

feedback
void* �� �Լ��� ��ȯ�ؾ��Ѵٴ°� �ƴµ� ������ ��ȯ�ϴ����� ���� ��Ȯ�� ���ذ� �ʿ���
�Լ��� ��� �ȿ��� �ذ��ϰ� �����°ǵ� void* �� ���� ��ȯ���� �ʿ�� �ϱ� ������ �ȵ�.
�ַ�� �ٽ� ���� ������ ������ warning �� ���� ���� �ؾ���
*/

void T2h(const char *Text, int len, char *hex_data);
void h2T(char *hex_str, char *conv_str);

int main() {
	char *test_str = "my name is yoon";
	int len = strlen(test_str);
	char *hex_str = (char*)calloc(len*2+1, sizeof(char));
	char *hex_conv_str = (char*)calloc(len+1, sizeof(char));

	T2h(test_str,len ,hex_str);
	printf("%s\n", hex_str);

	h2T(hex_str,hex_conv_str);
	printf("%s\n", hex_conv_str);
	
	free(hex_conv_str);
	free(hex_str);
}

//�� hex �ϴ� �Լ�
void T2h(const char *Text, int len, char *hex_data) {
	int i;
	char hexc[3] = { 0, };
	for (i = 0; i < len; i++) {
		sprintf(hexc, "%02X", Text[i]);
		strcat(hex_data, hexc);
	}
}

void h2T(char *hex_str, char *conv_str) {
	int i = 0;
	char sp = NULL;
	int lsum = 0, rsum = 0, final_sum = 0;
	int len = strlen(hex_str);

	while (i < len) {

		if (i % 2 == 0) {
			sp = hex_str[i];
			if (sp >= '0' && sp <= '9') {
				lsum = sp - 48;
			}
			else if (sp >= 'A' && sp <= 'F') {
				lsum = sp - 65 + 10;
			}
			lsum = lsum * 16;
		}
		else {
			sp = hex_str[i];
			if (sp >= '0' && sp <= '9') {
				rsum = sp - 48;
			}
			else if (sp >= 'A' && sp <= 'F') {
				rsum = sp - 65 + 10;
			}
		}
		i++;
		if (lsum != 0 && rsum != 0)
			final_sum = lsum + rsum;
		conv_str[i] = final_sum;
	}
}


		///*ó�� 2���� �� �տ� */
		//sp = hex_str[0];
		//if (sp >= '0' && sp <= '9') {
		//	lsum = sp - 48;
		//}
		//else if (sp >= 'A' && sp <= 'F') {
		//	lsum = sp - 65 + 10;
		//}
		//lsum = lsum * 16;
		///*ó�� 2���� �� �޿� */
		//sp = hex_str[1];
		//if (sp >= '0' && sp <= '9') {
		//	rsum = sp - 48;
		//}
		//else if (sp >= 'A' && sp <= 'F') {
		//	rsum = sp - 65 + 10;
		//}

		//final_sum = lsum + rsum;
		//conv_str[0] = (char)final_sum;

		///*���� 2���� �� �տ� */
		//sp = hex_str[2];
		//if (sp >= '0' && sp <= '9') {
		//	lsum = sp - 48;
		//}
		//else if (sp >= 'A' && sp <= 'F') {
		//	lsum = sp - 65 + 10;
		//}
		//lsum = lsum * 16;
		///*���� 2���� �� �޿� */
		//sp = hex_str[3];
		//if (sp >= '0' && sp <= '9') {
		//	rsum = sp - 48;
		//}
		//else if (sp >= 'A' && sp <= 'F') {
		//	rsum = sp - 65 + 10;
		//}

		//final_sum = lsum + rsum;
		//conv_str[1] = (char)final_sum; // �Ǵ°� Ȯ������
