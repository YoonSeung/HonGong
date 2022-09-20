#include<stdio.h>	
#include<stdlib.h>
#include<string.h>


//char* print_hex(const char buf);
//
//void main() {
//	char *test_str = "my name is yoon seung hwan"; // 이렇게 주어진 상수 문자열 말고 txt파일을 hex하는 방법을 찾아보자
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

	//	//앞자리가 10 ~ 19 이면
	//	if (c_hex >9 && c_hex < 20 ) {
	//		c_hex = c_hex - 48;
	//	}
	//	//영어소문자 일 경우 
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
//		if (dest == NULL) printf("실패");
//
//		if (dest != NULL) {
//			while (!feof(src)) {
//				ch = fgetc(src);
//					fprintf(dest, "%02X", (unsigned char)ch);
//			}
//			fclose(dest);
//		}
//		fclose(src);
//		printf("성공");
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
//	// 입력 파일은 바이너리 모드
//	src = fopen("test.txt", "rb");
//	if (NULL != src) {
//
//		// 출력 파일은 텍스트 모드. "\n"은 "\n", "\r\n", "\r" 중 하나로 자동 변경됨.
//		dest = fopen("test_hex_file.txt", "wt");
//		if (NULL == dest) {
//			fclose(src);
//			puts("실패");
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
** 인코딩 구현중 내 문제점 **

1. 평문을 인코딩한 문자열을 저장할때 어떻게 처리할지 방향을 잡지 못함 (기존에는 문자열 형변환으로 찍어내기만했기때문)
2. 방향을 잡고 난 후 함수 구현부분에서 문자열을 strcpy로 하려고만 해서 값이 자꾸 2글자만 나왔음 
	순서 다시 정리 => 평문 1개문자 읽기 -> 16진수 인코딩하기 -> 인코딩된 문자열 저장 -> 다음 평문 1개 문자 읽기 -> 16진수인코딩 -> 기존에 저장된 문자열뒤에 저장
	마지막 (기존에 저장된 문자열 뒤에 저장) 이라는 키워드를 생각하는데에 시간이 너무 오래 쓰임
3. strcat을 활용해서 붙이면 되겠다고 생각한 후 함수돌리는데 에러가 뜸.
4. 디버깅을 해보니 hex_str가 쓰레기값이 들어가있고 그 뒤로 인코딩한 문자열이 붙여지는 것을 확인
5. malloc 대신 calloc으로 0으로 모두 초기화 하고 다시 실행해서 에러 해결

6. ubuntu에서는 malloc으로 해도 값이 제대로 찍히는거 나중에 확인해보기(내 생각엔 vs 디버깅모드에서만 쓰레기값을 넣어주는 모드라서 vs에서 알려준거라고 생각)
7. free 또 까먹을뻔

feedback
void* 형 함수는 반환해야한다는건 아는데 무엇을 반환하는지에 대한 명확한 이해가 필요함
함수의 경우 안에서 해결하고 끝나는건데 void* 을 쓰면 반환값이 필요로 하기 때문에 안됨.
솔루션 다시 빌드 했을때 나오는 warning 다 없앨 생각 해야함
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

//평문 hex 하는 함수
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


		///*처음 2문자 중 앞열 */
		//sp = hex_str[0];
		//if (sp >= '0' && sp <= '9') {
		//	lsum = sp - 48;
		//}
		//else if (sp >= 'A' && sp <= 'F') {
		//	lsum = sp - 65 + 10;
		//}
		//lsum = lsum * 16;
		///*처음 2문자 중 뒷열 */
		//sp = hex_str[1];
		//if (sp >= '0' && sp <= '9') {
		//	rsum = sp - 48;
		//}
		//else if (sp >= 'A' && sp <= 'F') {
		//	rsum = sp - 65 + 10;
		//}

		//final_sum = lsum + rsum;
		//conv_str[0] = (char)final_sum;

		///*다음 2문자 중 앞열 */
		//sp = hex_str[2];
		//if (sp >= '0' && sp <= '9') {
		//	lsum = sp - 48;
		//}
		//else if (sp >= 'A' && sp <= 'F') {
		//	lsum = sp - 65 + 10;
		//}
		//lsum = lsum * 16;
		///*다음 2문자 중 뒷열 */
		//sp = hex_str[3];
		//if (sp >= '0' && sp <= '9') {
		//	rsum = sp - 48;
		//}
		//else if (sp >= 'A' && sp <= 'F') {
		//	rsum = sp - 65 + 10;
		//}

		//final_sum = lsum + rsum;
		//conv_str[1] = (char)final_sum; // 되는거 확인했음
