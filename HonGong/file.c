#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<stdlib.h>
#include<memory.h>

/*test.txt 파일의 내용을 file2.txt에 옮겨 적기 실습 */

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

/*fseek으로 test.txt 읽게하기 */
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

/*텍스트파일 내용 읽어오기 */
//int main() {
//	char buffer[5] = { 0, };
//	int count = 0;
//	int total = 0;
//
//	FILE *fp = fopen("test.txt", "r");
//
//	while (feof(fp) == 0) {
//		count = fread(buffer, sizeof(char), 4, fp);//fread는 한번 읽고 또 읽어올때
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
//		printf("파일에서 읽은 정수값 =%d, 실수값=%f, 문자열=%s\n", i, d, str);
//		fclose(fp);
//	}
//}

