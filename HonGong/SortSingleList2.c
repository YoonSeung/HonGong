#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>

typedef struct NODE {
	char *name;
	int index;
	struct NODE *next;
}NODE;


void InitList();
//NODE *InsertNode(NODE *Target, NODE *newNode);
NODE *SortInsertNode(NODE *Target, NODE *newNode);
bool DeleteNode(NODE *Target);
void UnInitList();
NODE *head;
void printNode();
void test();

void main() {
	InitList();
	
	test();
	
	UnInitList();
}

void test() {

	int i = 0;
	NODE *Now,*pre, Temp;
	pre = head;
	Now = (NODE*)malloc(sizeof(NODE));
	memset(&Now, 0x00, sizeof(NODE));
	int len = 10;

	printf("===�Է�===\n");
	while(i<99){
		char *name = (char*)malloc(len * sizeof(char));
		scanf("%d %s", &i, name);
		Temp.index = i;
		Temp.name = name;
		pre = SortInsertNode(pre, &Temp);

	}

	printf("===�ε���, �̸��Է��� ����Ʈ===\n");
	printNode();

	
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
//NODE *InsertNode(NODE *Target, NODE *newNode) {
//
//	NODE *New = (NODE *)malloc(sizeof(NODE));
//
//	New->index = newNode->index;
//	New->name = newNode->name;
//	
//	New->next = Target->next;
//	Target->next = New;
//
//	return New;
//
//}

//�������� ���� ����
NODE *SortInsertNode(NODE *Target, NODE *newNode) {

	NODE *New = (NODE *)malloc(sizeof(NODE));
	memset(&New, 0x00, sizeof(NODE));

	New->index = newNode->index;
	strcpy(New->name, newNode->name);


	if (Target->next == NULL) {
		New->next = Target->next;
		Target->next = New;
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
