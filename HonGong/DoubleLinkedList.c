//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//typedef struct Node {
//	int data;
//	NODE *prev;
//	NODE *next;
//}NODE;
//
//NODE *head;
//void InitList();
//NODE *RightInsertNode(NODE *Target, NODE *newNode);
//void AppendNode(NODE *newNode);
//
//void main() {
//
//}
//
//void InitList(){
//	head = (NODE*)malloc(sizeof(NODE));
//	head->prev = NULL;
//	head->next = NULL;
//}
//
////Target��� �����ʿ� ���ο� ��� ���� �Լ�
//NODE *RightInsertNode(NODE *Target, NODE *newNode) {
//	NODE *New;
//	NODE *Right;
//	
//	New = (NODE *)malloc(sizeof(NODE));
//	*New = *newNode;
//	//���ϰ� �ٸ��� Ÿ�ٳ��, ����� ���� �� ��� ������ ��嵵 ����������Ѵ�. prev������ �ϱ� ����
//	Right = Target->next;
//
//	New->next = Right;
//	New->prev = Target;
//	Target->next = New;
//
//	//Right ��尡 �ִٸ� Right ����� ������带 ������� �ּҸ� ����Ű�� �ض�, Right�� ���ٴ°� �ش� ��尡 ���̹Ƿ� NULL�� ����Ű����
//	if (Right) {
//		Right->prev = New;
//	}
//
//	return New;
//
//}
//
//
////����Ʈ ���� ����߰��ϴ� �Լ�
//void AppendNode(NODE *newNode) {
//	NODE *tail;
//
//	for (tail = head; tail->next; tail = tail->next) { ; }
//	RightInsertNode(tail, newNode);
//}