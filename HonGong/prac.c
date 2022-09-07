#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k)
{
	int* answer = (int*)calloc(id_list_len, sizeof(int));
	int i, j;
	int check[1000][1000] = { 0, }; // 신고유무 체크할 이차원배열 (id_list길이가 1000까지라 1000 * 1000)
	int count[1000] = { 0, }; // 신고당한 횟수 (id_list가 1000개까지 가능)
	char copy[22];      // 복사할 문자배열 (report 원소길이 21이기에 null포함 22)

	char* user_id = NULL;      // 신고한 ID
	char* report_id = NULL;  // 신고당한 ID
	int user_id_count = 0;
	int report_id_count = 0;

	for (i = 0; i < report_len; i++) {  // 신고목록길이만큼 반복
		strcpy(copy, report[i]);        //report가 const라 strtok로 다루기위해 복사

		user_id = strtok(copy, " ");    //신고한 ID 저장
		report_id = strtok(NULL, " ");  //신고당한 ID 저장

		for (j = 0; j < id_list_len; j++) { // id_list들과 비교
			if (strcmp(user_id, id_list[j]) == 0) // 신고한 ID가 id_list에 있는 위치를
				user_id_count = j;                 // 신고한 ID 카운트변수에 번호 저장
			else if (strcmp(report_id, id_list[j]) == 0) // 신고당한 ID가 id_list에 있는 위치를
				report_id_count = j;                 // 신고당한ID 카운트변수에 번호 저장
		}
		if (check[user_id_count][report_id_count] == 0) { //각 위치에 2차원배열위치가 0(체크안됨)이면 1로 체크
			check[user_id_count][report_id_count] = 1;
			count[report_id_count] += 1;                //신고당한ID의 체크 갯수 취합
		}

	}

	for (i = 0; i < id_list_len; i++) {
		for (j = 0; j < id_list_len; j++) {
			if (check[i][j] > 0 && count[j] >= k)       //이차원배열에 체크가 되어있고, 신고당한ID 갯수가 k이상인 경우
				answer[i] ++;                           //id_list순서에 맞게 1씩 증가
		}
	}

	return answer;
}
