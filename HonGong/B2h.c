#include<stdio.h>	
#include<stdlib.h>
#include<string.h>


void print_hex(const char *buf, int size);

void main() {
	char *test_str = "my name is cos\nhappy life is to observe myself"; // �̷��� �־��� ��� ���ڿ� ���� txt������ hex�ϴ� ����� ã�ƺ���
	print_hex(test_str, strlen(test_str));
}
void print_hex(const char *buf, int size) {
	int i;

	for (i = 0; i < size; i++) {
		if (i % 16 == 0)
			printf("\n");

		printf("%02X ", buf[i]);

	}
}

//int main() {
//	FILE *fp = fopen("test.txt", "r");
//	int len = 0;
//	fseek(fp, 0, SEEK_END);
//	len = ftell(fp);
//	rewind(fp);
//	print_hex(fp, len);
//}
//
//void main() {
//	FILE *src, *dest;
//	char buf[5];
//	int nread;
//	int i = 0;
//	char cpydata[10];
//
//	src = fopen("test.txt", "rb");
//	if (src != NULL) {
//
//		dest = fopen("test_hex_file.txt", "wb");
//		if (dest == NULL) printf("����");
//
//		if (dest != NULL) {
//			while (!feof(src)) {
//					nread=fread(buf, sizeof(char), 4, src);
//
//					/*���ڵ� �� ���� ����*/
//
//
//					
//					fwrite(buf, sizeof(char), nread, dest);
//
//			}
//			fclose(dest);
//		}
//		fclose(src);
//		printf("����");
//	}
//}
//


