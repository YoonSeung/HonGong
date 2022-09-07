#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k)
{
	int* answer = (int*)calloc(id_list_len, sizeof(int));
	int i, j;
	int check[1000][1000] = { 0, }; // �Ű����� üũ�� �������迭 (id_list���̰� 1000������ 1000 * 1000)
	int count[1000] = { 0, }; // �Ű���� Ƚ�� (id_list�� 1000������ ����)
	char copy[22];      // ������ ���ڹ迭 (report ���ұ��� 21�̱⿡ null���� 22)

	char* user_id = NULL;      // �Ű��� ID
	char* report_id = NULL;  // �Ű���� ID
	int user_id_count = 0;
	int report_id_count = 0;

	for (i = 0; i < report_len; i++) {  // �Ű��ϱ��̸�ŭ �ݺ�
		strcpy(copy, report[i]);        //report�� const�� strtok�� �ٷ������ ����

		user_id = strtok(copy, " ");    //�Ű��� ID ����
		report_id = strtok(NULL, " ");  //�Ű���� ID ����

		for (j = 0; j < id_list_len; j++) { // id_list��� ��
			if (strcmp(user_id, id_list[j]) == 0) // �Ű��� ID�� id_list�� �ִ� ��ġ��
				user_id_count = j;                 // �Ű��� ID ī��Ʈ������ ��ȣ ����
			else if (strcmp(report_id, id_list[j]) == 0) // �Ű���� ID�� id_list�� �ִ� ��ġ��
				report_id_count = j;                 // �Ű����ID ī��Ʈ������ ��ȣ ����
		}
		if (check[user_id_count][report_id_count] == 0) { //�� ��ġ�� 2�����迭��ġ�� 0(üũ�ȵ�)�̸� 1�� üũ
			check[user_id_count][report_id_count] = 1;
			count[report_id_count] += 1;                //�Ű����ID�� üũ ���� ����
		}

	}

	for (i = 0; i < id_list_len; i++) {
		for (j = 0; j < id_list_len; j++) {
			if (check[i][j] > 0 && count[j] >= k)       //�������迭�� üũ�� �Ǿ��ְ�, �Ű����ID ������ k�̻��� ���
				answer[i] ++;                           //id_list������ �°� 1�� ����
		}
	}

	return answer;
}
