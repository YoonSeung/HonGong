
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
	int* answer = (int*)calloc(id_list_len, sizeof(int));
	char *name, user[20];

	for (int t = 0; t < report_len; t++) {
		strcpy(user, report[t]);
		name = strtok(user, " ");
		for (int i = 0; i < id_list_len; i++) {
			if (strcmp(name, id_list[i]) == 0) {
				name = strtok(NULL, " ");
				for (int j = 0; j < id_list_len; j++) {
					if (strcmp(name, id_list[j]) == 0) {
						if (arr[i][j] == 0) {
							arr[i][j] += 1;
							count[j] += 1;
						} break;
					}
				} break;
			}
		}
	}


	for (int a = 0; a < id_list_len; a++) {
		if (count[a] >= k) {
			for (int b = 0; b < id_list_len; b++) {
				if (arr[b][a] == 1) {
					answer[b] += 1;
				}
			}
		}
	}


	return answer;
}