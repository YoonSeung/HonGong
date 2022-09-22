//#include<stdio.h>	
//#include<stdlib.h>
//#include<string.h>
//
//void make_bin(char *str, FILE *plain_file);
//void B2H_func(FILE *plain_file, FILE *hexa_file);
//void H2B_func(FILE *hexa_file);
//
//int main(){
//	FILE *plain_file, *hexa_file;
//
//	char test_str[] = {"my name is yoon" };
//
//	if ((plain_file = fopen("out.bin", "wb")) == NULL) {
//		printf("failed");
//		exit(0);
//	}
//
//	make_bin(test_str, plain_file);
//
//
//	if ( plain_file !=NULL) {
//		hexa_file = fopen("test_hex_file.txt", "wt");
//
//		B2H_func(plain_file, hexa_file);
//
//		fclose(hexa_file);
//	}
//	fclose(plain_file);
//
//}
//
//void make_bin(char *str, FILE *plain_file) {
//	int i;
//	int len = strlen(str);
//
//	for (i = 0; i < len; i++) {
//		if (fputc(str[i], plain_file) == EOF) {
//			printf("failed");
//			exit(0);
//		}
//	}
//	fclose(plain_file);
//}
//
//void B2H_func(FILE *plain_file , FILE *hexa_file) {
//	char buf[1];
//	if (hexa_file == NULL) {
//		printf("failed");
//		fclose(plain_file);
//	}
//	
//	while (fread(buf, sizeof(char), 1, plain_file) == 1) {
//		fprintf(hexa_file, "%02X", buf[0]);
//	}
//	printf("hexa encoding success");
//
//}
//
//void H2B_func(FILE *hexa_file) {
//
//}