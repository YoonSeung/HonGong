//#include<stdio.h>	
//#include<stdlib.h>
//#include<string.h>
//
//void main() {
//		FILE *src, *dest;
//		char buf[5];
//		int nread;
//		int i = 0;
//
//		src = fopen("test.txt", "rb");
//		if (src != NULL) {
//
//			dest = fopen("test_hex_file.txt", "wb");
//			if (dest == NULL) printf("����");
//
//			if (dest != NULL) {
//				while (!feof(src)) {
//					fread(buf, sizeof(char), 1, src);
//
//					/*���ڵ� �� ���� ����*/
//					fprintf(dest, "%02X\n", buf);
//					fwrite(buf, sizeof(char), 1, dest);
//					memset(buf, 0, 1);
//				}
//				fclose(dest);
//			}
//			fclose(src);
//			printf("����");
//		}
//	}
