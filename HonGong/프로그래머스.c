#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//1번 문제 
char* solution(int num) {
	// 리턴할 값은 메모리를 동적 할당해주세요
	char* answer = (char*)malloc(sizeof(num));
	if (num % 2 == 0) answer = "Even";
	if (num % 2 != 0) answer = "Odd";

	free(answer); // 이부분을 반드시 체크해야할것 free로 해제 안하면 메모리 누수 위험 있음

	return answer;
}
// 2번 아예 못품