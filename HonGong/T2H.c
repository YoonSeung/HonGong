//#include<stdio.h>	
//#include<stdlib.h>
//#include<string.h>
//
///*
//feedback
//void* �� �Լ��� ��ȯ�ؾ��Ѵٴ°� �ƴµ� ������ ��ȯ�ϴ����� ���� ��Ȯ�� ���ذ� �ʿ���
//�Լ��� ��� �ȿ��� �ذ��ϰ� �����°ǵ� void* �� ���� ��ȯ���� �ʿ�� �ϱ� ������ �ȵ�.
//�ַ�� �ٽ� ���� ������ ������ warning �� ���� ���� �ؾ���
//*/
//
///*
//===���ڵ� ������ �� ������ ===
//
//1. ���� ���ڵ��� ���ڿ��� �����Ҷ� ��� ó������ ������ ���� ���� (�������� ���ڿ� ����ȯ���� ���⸸�߱⶧��)
//2. ������ ��� �� �� �Լ� �����κп��� ���ڿ��� strcpy�� �Ϸ����� �ؼ� ���� �ڲ� 2���ڸ� ������ 
//	���� �ٽ� ���� => �� 1������ �б� -> 16���� ���ڵ��ϱ� -> ���ڵ��� ���ڿ� ���� -> ���� �� 1�� ���� �б� -> 16�������ڵ� -> ������ ����� ���ڿ��ڿ� ����
//	������ (������ ����� ���ڿ� �ڿ� ����) �̶�� Ű���带 �����ϴµ��� �ð��� �ʹ� ���� ����
//3. strcat�� Ȱ���ؼ� ���̸� �ǰڴٰ� ������ �� �Լ������µ� ������ ��.
//4. ������� �غ��� hex_str�� �����Ⱚ�� ���ְ� �� �ڷ� ���ڵ��� ���ڿ��� �ٿ����� ���� Ȯ��
//5. malloc ��� calloc���� 0���� ��� �ʱ�ȭ �ϰ� �ٽ� �����ؼ� ���� �ذ�
//
//6. ubuntu������ malloc���� �ص� ���� ����� �����°� ���߿� Ȯ���غ���(�� ������ vs ������忡���� �����Ⱚ�� �־��ִ� ���� vs���� �˷��ذŶ�� ����)
//7. free �� �������
//*/
//
///*
//===���ڵ� ������ �� ������ ===
//1. �ܰ躰�� �ǳ� Ȯ���ϱ� ���� ���������� Ƚ���� �����ؼ� ��� �����ϴ� �� ���� ������
//
//2. �ݺ������� ����Ǵ� �κ��� �ݺ���ó���ϴ� �������� �����ɸ�
//	�ǹ� 1 : ¦���϶��� Ȧ���϶��� if�� �ΰ��� ���� �Ǿ������� conv_str�� �ƽ�Ű�� �����ϴ°� ��� ó������
//	�ǹ� 2 : ���ڵ��� ���ڿ��� ���� 16������ ����, �� 16������ 1���ڸ��� ���� ���������� ���� �ǹ�
//		- 2�� �ǹ��� ���α׷��ӽ����� Ǯ���� ������ ������ imsi��� int�� �迭 2���� ������ �����ϱ����
//		- 1�� �ǹ��� if���� ����Ǹ� 1�� ���� �����ϴ� ������ ������ üũ�Ѵ� ��������
//	������ if������ ���ʹ����� ī��Ʈ�� �����ʹ����� ī��Ʈ�� ���� üũ(1)�� �Ǿ������� �� ���� ���ؼ� �ƽ�Ű���� ���ϰ� �� �ƽ�Ű���� char������ ��ȯ�� ���ڿ��迭�� �����ϴ� ������ �ذ�
//
//*/
//
//void T2H_func(const char *Text, int Text_len, char *hex_data);
//void H2T_func(char *hex_data, char *conv_str);
//
//int main() {
//	char *test_str = "my name is yoon hi";
//	
//	int test_str_len = strlen(test_str);
//	char *T2H_str = (char*)calloc(test_str_len *2+1, sizeof(char));
//	char *H2T_str = (char*)calloc(test_str_len +1, sizeof(char));
//
//	printf("���� ---> %s\n", test_str);
//	printf("ũ�� ---> %d\n", test_str_len / sizeof(test_str));
//
//	T2H_func(test_str, test_str_len, T2H_str);
//	printf("T2H ---> %s\n", T2H_str);
//	printf("ũ�� ---> %d\n", strlen(T2H_str) / sizeof(T2H_str));
//
//	H2T_func(T2H_str, H2T_str);
//	printf("H2T ---> %s\n", H2T_str);
//	printf("ũ�� ---> %d\n", strlen(H2T_str) / sizeof(H2T_str));
//
//	free(H2T_str);
//	free(T2H_str);
//
//}
//
/////*�� hex���ڵ� �ϴ� �Լ�*/
//void T2H_func(const char *Text, int Text_len, char *hex_data) {
//	int i;
//	char hexc[3] = { 0, };
//	for (i = 0; i < Text_len; i++) {
//		sprintf(hexc, "%02X", Text[i]);
//		strcat(hex_data, hexc);
//	}
//}
//
//
///*hex���ڵ��� ���ڿ� ������ ���ڵ� �ϴ� �Լ�*/
//void H2T_func(char *hex_data, char *conv_str) {
//	int i = 0, j = 0;
//	char sp = ' ';
//	int imsi[2] = { 0, };
//	int lsum = 0, rsum = 0, final_sum = 0, lcount = 0, rcount = 0;
//	int len = strlen(hex_data);
//
//	while (i < len) {
//		sp = hex_data[i];
//
//		if(i%2 ==0) {	
//			if (sp >= '0' && sp <= '9') {
//				lsum = sp - 48;
//			}
//			else if (sp >= 'A' && sp <= 'F') {
//				lsum = sp - 65 + 10;
//			}
//			else if (sp >= 'a' && sp <= 'f') {
//				lsum = sp - 97 + 10;
//			}
//			lsum = lsum * 16;
//			imsi[0] = lsum;
//			lcount++;
//		}
//		else {
//			if (sp >= '0' && sp <= '9') {
//				rsum = sp - 48;
//			}
//			else if (sp >= 'A' && sp <= 'F') {
//				rsum = sp - 65 + 10;
//			}
//			else if (sp >= 'a' && sp <= 'f') {
//				rsum = sp - 97 + 10;
//			}
//			imsi[1] = rsum;
//			rcount++;
//		}
//
//		 /*���ڵ��� �ձ��� if�� , �ޱ��� if���� ����Ǿ������� ��������ϴ� �Լ�*/
//		if (lcount ==1 && rcount ==1) {
//			final_sum = lsum + rsum;
//			conv_str[j] = (char)final_sum;
//			imsi[0] = 0;
//			imsi[1] = 0;		
//			lcount = 0;
//			rcount = 0;
//			j++;
//		}
//		i++;
//	} 
//}
//		///*ó�� 2���� �� �տ� */
//		//sp = hex_str[0];
//		//if (sp >= '0' && sp <= '9') {
//		//	lsum = sp - 48;
//		//}
//		//else if (sp >= 'A' && sp <= 'F') {
//		//	lsum = sp - 65 + 10;
//		//}
//		//lsum = lsum * 16;
//		///*ó�� 2���� �� �޿� */
//		//sp = hex_str[1];
//		//if (sp >= '0' && sp <= '9') {
//		//	rsum = sp - 48;
//		//}
//		//else if (sp >= 'A' && sp <= 'F') {
//		//	rsum = sp - 65 + 10;
//		//}
//
//		//final_sum = lsum + rsum;
//		//conv_str[0] = (char)final_sum;
//
//		///*���� 2���� �� �տ� */
//		//sp = hex_str[2];
//		//if (sp >= '0' && sp <= '9') {
//		//	lsum = sp - 48;
//		//}
//		//else if (sp >= 'A' && sp <= 'F') {
//		//	lsum = sp - 65 + 10;
//		//}
//		//lsum = lsum * 16;
//		///*���� 2���� �� �޿� */
//		//sp = hex_str[3];
//		//if (sp >= '0' && sp <= '9') {
//		//	rsum = sp - 48;
//		//}
//		//else if (sp >= 'A' && sp <= 'F') {
//		//	rsum = sp - 65 + 10;
//		//}
//
//		//final_sum = lsum + rsum;
//		//conv_str[1] = (char)final_sum; // �Ǵ°� Ȯ������