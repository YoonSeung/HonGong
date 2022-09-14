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
	printf("===�ε���, �̸��Է��� ����Ʈ===\n");
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

//����Ʈ head �ʱ�ȭ
void InitList() {
	head = (NODE *)malloc(sizeof(NODE));
	head->next = NULL;
}

//Target��� ������ ���ο� ��� �����Լ�(����x)
NODE *InsertNode(NODE *Target, int *index, char *name) {

	NODE *New = (NODE *)malloc(sizeof(NODE));

	New->index = *index;
	strcpy(New->name, name);

	New->next = Target->next;
	Target->next = New;

	return New;

}

//�������� ���� ����
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

//target ���� ��� ���� �Լ�
bool DeleteNode(NODE *Target) {
	//������ ��� ����
	NODE *Del;
	//������ ��尡 target�� ����Ű�� �ּ�
	Del = Target->next;
	if (Del == NULL) {
		return false;
	}
	Target->next = Del->next;
	free(Del);
	return true;
}

//�����Ҵ� ��ü ���� �Լ�
void UnInitList() {

	//DeleteNode�Լ��� head ���������� ���� �����ϸ鼭 DeleteNode���� free�� Ȱ���� �Ҵ����� 
	while (DeleteNode(head)) { ; }

	//DeleteNode�Լ��� Target ���� ��带 �����ϴ� �Լ��̹Ƿ� while���� ���� head�� ���ԵǴ� head�� ���� �����������
	free(head);

	head = NULL;
}