#include <stdio.h>
#include <string.h>

int main(void) {
	char S[51] = { 0 };
	char base64[64] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	unsigned int bitBuffer[24] = { 0 };
	int bufferIdx = 0, SIdx = 0;
	int encodedValue = 0;

	fgets(S, sizeof(S), stdin);

	while (1) {
		// 1byte ---> Bit pattern
		for (int i = 7; i >= 0; i--)
			bitBuffer[bufferIdx++] = (S[SIdx] >> i) & 1;

		// ���۰� ���� �� ������ ��� �� ���� �ʱ�ȭ
		if (bufferIdx == 24) {
			for (int i = 0, j = 5; i < 24; i++) {
				if (bitBuffer[i]) encodedValue += 1 << j;
				if (--j == -1) {
					j = 5;
					printf("%c", base64[encodedValue]);
					encodedValue = 0;
				}
			}
			memset(bitBuffer, 0, sizeof(int) * 24);
			bufferIdx = 0;

			// ���۰� ���� ���� ���� ���ڰ� ���� ���
			if (!S[++SIdx]) break;
		}

		// ���۰� ���� ���� �ʾҴµ� ���� ���ڿ��� ���� ���
		else if (bufferIdx && !S[++SIdx]) {
			if (SIdx % 3 == 1) { // �Էµ� ����Ʈ�� �ϳ�
				for (int i = 0, j = 5; i < 12; i++) {
					if (bitBuffer[i]) encodedValue += 1 << j;
					if (--j == -1) {
						j = 5;
						printf("%c", base64[encodedValue]);
						encodedValue = 0;
					}
				}
				printf("==");
			}
			else if (SIdx % 3 == 2) { // �Էµ� ����Ʈ�� ��
				for (int i = 0, j = 5; i < 18; i++) {
					if (bitBuffer[i]) encodedValue += 1 << j;
					if (--j == -1) {
						j = 5;
						printf("%c", base64[encodedValue]);
						encodedValue = 0;
					}
				}
				printf("=");
			}
			break;
		}
	}
}
