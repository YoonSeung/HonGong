#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<stdlib.h>
#include<memory.h>

/*test.txt ������ ������ file2.txt�� �Ű� ���� �ǽ� */

//void main(){
//	FILE *src, *dest;
//	char buf[256];
//	size_t nread;
//
//	src = fopen("test.txt", "rb");
//	if (src != NULL) {
//		dest = fopen("file2.txt", "wb");
//		if (dest != NULL) {
//			while (!feof(src)) {
//				nread = fread(buf, 1, 256, src);
//				fwrite(buf, 1, nread, dest);
//			}
//			fclose(dest);
//		}
//		fclose(src);
//	}
//}

/*fseek���� test.txt �а��ϱ� */
//void main() {
//	FILE *fp;
//	char buf[256];
//
//	fp = fopen("test.txt", "rt");
//	if (fp != NULL) {
//		fseek(fp, 0, SEEK_SET);
//		fgets(buf, 256, fp);
//		printf("%s", buf);
//		fclose(fp);
//	}
//}

/*�ؽ�Ʈ���� ���� �о���� */
//int main() {
//	char buffer[5] = { 0, };
//	int count = 0;
//	int total = 0;
//
//	FILE *fp = fopen("test.txt", "r");
//
//	while (feof(fp) == 0) {
//		count = fread(buffer, sizeof(char), 4, fp);//fread�� �ѹ� �а� �� �о�ö�
//		printf("%s", buffer);
//		memset(buffer, 0, 5);
//		total += count;
//	}
//
//	printf("\ntotal: %d\n", total);
//	fclose(fp);
//}

//void main() {
//	char str[128] = "String";
//	int i = 1234;
//	double d = 3.1416;
//	int j = 0;
//	FILE *fp;
//
//	fp = fopen("file_exam.txt", "wb");
//	if (fp != NULL) {
//		fprintf(fp, "%d %f\n", i, d);
//		for (j = 0; j < 7; j++) {
//			fprintf(fp, "%2X", str[i]);
//		}
//		fclose(fp);
//	}
//
//	i = 0;
//	d = 0.0;
//	fp = fopen("file_exam.txt", "rb");
//	if (fp != NULL) {
//		fscanf(fp, "%d %lf %s", &i, &d, &str);
//		printf("���Ͽ��� ���� ������ =%d, �Ǽ���=%f, ���ڿ�=%s\n", i, d, str);
//		fclose(fp);
//	}
//}

