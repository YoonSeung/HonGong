#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//1�� ���� 
char* solution(int num) {
	// ������ ���� �޸𸮸� ���� �Ҵ����ּ���
	char* answer = (char*)malloc(sizeof(num));
	if (num % 2 == 0) answer = "Even";
	if (num % 2 != 0) answer = "Odd";

	free(answer); // �̺κ��� �ݵ�� üũ�ؾ��Ұ� free�� ���� ���ϸ� �޸� ���� ���� ����

	return answer;
}
// 2�� �ƿ� ��ǰ