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
////Target노드 오른쪽에 새로운 노드 삽입 함수
//NODE *RightInsertNode(NODE *Target, NODE *newNode) {
//	NODE *New;
//	NODE *Right;
//	
//	New = (NODE *)malloc(sizeof(NODE));
//	*New = *newNode;
//	//단일과 다르게 타겟노드, 새노드 말고 새 노드 오른쪽 노드도 지정해줘야한다. prev지정을 하기 위해
//	Right = Target->next;
//
//	New->next = Right;
//	New->prev = Target;
//	Target->next = New;
//
//	//Right 노드가 있다면 Right 노드의 이전노드를 새노드의 주소를 가리키게 해라, Right가 없다는건 해당 노드가 끝이므로 NULL을 가리키는중
//	if (Right) {
//		Right->prev = New;
//	}
//
//	return New;
//
//}
//
//
////리스트 끝에 노드추가하는 함수
//void AppendNode(NODE *newNode) {
//	NODE *tail;
//
//	for (tail = head; tail->next; tail = tail->next) { ; }
//	RightInsertNode(tail, newNode);
//}