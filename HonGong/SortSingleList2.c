#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>

typedef struct NODE {
	int index;
	char *name;
	struct NODE *next;
}NODE;


void InitList();
NODE *InsertNode(NODE *Target, int *index, char *name);
//NODE *SortInsertNode(NODE *Target, NODE *newNode);
NODE *SortInsertNode(NODE *Target, int *index, char *name);
bool DeleteNode(NODE *Target);
void UnInitList();
NODE *head;
void printNode();
void test();

void main() {
	InitList();
	test();
	printf("===인덱스, 이름입력후 리스트===\n");
	printNode();
	
	UnInitList();
}

void test() {

	int i = 0;
	NODE *Now;
	Now = head;
	char *name = malloc(sizeof(char*)) ;

	while (i < 99) {
		if (i == 99) break;
		scanf("%d %s", &i, name);
		name = (char*)realloc(name, sizeof(char)*strlen(name));
		Now = SortInsertNode(Now, &i, name);
	}

}

void printNode()
{
	NODE * node = head->next;
	for (; node != NULL; node = node->next) {
		printf("%d---> %s\n", node->index, node->name);
	}
}

//리스트 head 초기화
void InitList() {
	head = (NODE *)malloc(sizeof(NODE));
	head->next = NULL;
}

//Target노드 다음에 새로운 노드 삽입함수(정렬x)
NODE *InsertNode(NODE *Target, int *index, char *name) {

	NODE *New = (NODE *)malloc(sizeof(NODE));

	New->index = *index;
	strcpy(New->name, name);

	New->next = Target->next;
	Target->next = New;

	return New;

}

//오름차순 정렬 삽입
NODE *SortInsertNode(NODE *Target, int *index, char *name) {

	NODE *New = (NODE *)malloc(sizeof(NODE));
	New->index = *index;
	strcpy(New->name, name);


	if (Target->index > New->index) {
		New->next = Target->next;
		Target = New;
	}
	else {
		while (Target->next != NULL && Target->next->index < New->index) {
			Target = Target->next;
		}

		New->next = Target->next;
		Target->next = New;
	}
	return New;
}

//target 다음 노드 삭제 함수
bool DeleteNode(NODE *Target) {
	//삭제할 노드 선언
	NODE *Del;
	//삭제할 노드가 target이 가리키는 주소
	Del = Target->next;
	if (Del == NULL) {
		return false;
	}
	Target->next = Del->next;
	free(Del);
	return true;
}

//동적할당 전체 해제 함수
void UnInitList() {

	//DeleteNode함수로 head 다음노드까지 전부 삭제하면서 DeleteNode내의 free를 활용해 할당해제 
	while (DeleteNode(head)) { ; }

	//DeleteNode함수가 Target 다음 노드를 삭제하는 함수이므로 while문을 통해 head만 남게되니 head를 따로 해제해줘야함
	free(head);

	head = NULL;
}