//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include<string.h>
//
//typedef struct NODE {
//	int index;
//	char name[10];
//	struct NODE *next;
//}NODE;
//
//void InitList();
////NODE *InsertNode(NODE *Target, NODE *newNode);
//NODE *InsertNode(NODE *Target, int *index, char *name);
//NODE *SortInsertNode(NODE *Target, NODE *newNode);
//bool DeleteNode(NODE *Target);
//void UnInitList();
//NODE *head;
//void printNode();
//
//void test() {
//	
//	int i;
//	NODE *Now, Temp;
//	char name[10];
//	InitList();
//	
//	//현재 노드는 head 하나
//	Now = head;
//
//	//Now가 head, InsertNode함수는 Now다음노드에 새노드 삽입 함수이므로 head이후에 1부터 5까지 데이터를 담는 노드들이 한개씩 생성 
//	for (i = 1; i <= 5; i++) {
//		Temp.index = i;
//		scanf("%s",name);
//		Now = InsertNode(Now, &i, name);
//	}
//
//	//현재노드 head->next(1)부터 증가된 Now노드까지 , Now는 Now->next로 이동하면서 Now노드의 index와 문자열을 찍어낸다.
//	//for (Now = head->next; Now; Now = Now->next) {
//	//	printf("%d---> %s\n", Now->index, Now->name);
//	//}
//
//	////head->next노드 (1) 다음노드에 7번,6번인덱스와 문자열넣기
//	//Now = head->next;
//	//Temp.index = 7;
//	//Temp.name = "newname";
//	//InsertNode(Now,&Temp);
//
//	//Now = head->next->next;
//	//Temp.index = 6;
//	//Temp.name = "newname2";
//	//InsertNode(Now, &Temp);
//
//	//head->next노드 다음에 9번,8번인덱스와 문자열 오름차순으로 삽입
//	//Now = head->next;
//	//Temp.index = 10;
//	//Temp.name = "newname3";
//	//SortInsertNode(Now, &Temp);
//
//	//Now = head->next->next;
//	//Temp.index = 8;
//	//Temp.name = "newname4";
//	//SortInsertNode(Now, &Temp);
//
//	printf("\n==데이터삽입 후 리스트==\n");
//
//
//	//head->next 는 head가 가리키는 주소 코드상 1 => DeleteNode함수의 매개변수는 매개변수다음노드 삭제 즉, 1다음노드삭제이므로 2가 삭제되는것
//	DeleteNode(head->next);
//
//	printf("\n==삭제후 리스트==\n");
//
//
//	//UnInitList();
//
//	//할당해제후 찍히나 확인하기 위해 작성(오류나는게 맞음)
//	//for (Now = head->next; Now; Now = Now->next) {
//	//	printf("%d\n", Now->data);
//	//}
//}
//
//void printNode()
//{
//	NODE * node = head->next;
//	for (; node != NULL; node = node->next) {
//		printf("%d---> %s\n", node->index, node->name);
//	}
//}
//
//main()
//{
//	test();
//	printNode();
//	UnInitList();
//}
//
////리스트 head 초기화
//void InitList() {
//	head = (NODE *)malloc(sizeof(NODE));
//	head->next = NULL;
//}
//
////Target노드 다음에 새로운 노드 삽입함수(정렬x)
////NODE *InsertNode(NODE *Target, NODE *newNode)
//NODE *InsertNode(NODE *Target, int *index, char *name) {
//	
//	//새 노드 메모리할당 및 노드 안의 값 대입 (아직 주소는 연결 x)
//	NODE *New = (NODE *)malloc(sizeof(NODE));
//	New->index = *index;
//	strcpy(New->name, name);
//	
//	//새로만든 노드의 다음주소가 기존Target이 가리키던 주소로 대입
//	New->next = Target->next;
//
//	//기존노드가 가리키는 주소를 새 노드의 주소로 바꿈
//	Target->next = New;
//
//	return New;
//
//}
//
////오름차순 정렬 삽입
//NODE *SortInsertNode(NODE *Target, NODE *newNode) {
//
//	NODE *New = (NODE *)malloc(sizeof(NODE));
//	*New = *newNode;
//
//	//Target이 가리키는 주소가 NULL이면 NULL과 new를 비교하려해서 오류가 남, new노드의index와 target이 연결중인 다음노드의 인덱스 비교할 것이기 때문
//	//Target 다음 노드의 index가 new index보다 작을동안 반복
//	//&&연산자 왼쪽에서 오른쪽 (확인더 해보기)
//	while (Target->next != NULL && Target->next->index < New->index) {
//		Target = Target->next;
//	}
//	//target이 가리키던 주소를 new가 가리키게하고 타켓은 new 노드를 가리키게 설정
//	New->next = Target->next;
//	Target->next = New;
//
//	return New;
//}
//
////target 다음 노드 삭제 함수
//bool DeleteNode(NODE *Target) {
//	//삭제할 노드 선언
//	NODE *Del;
//	//삭제할 노드가 target이 가리키는 주소
//	Del = Target->next;
//	if (Del == NULL) {
//		return false;
//	}
//	Target->next = Del->next;
//	free(Del);
//	return true;
//}
//
////동적할당 전체 해제 함수
//void UnInitList() {
//
//	//DeleteNode함수로 head 다음노드까지 전부 삭제하면서 DeleteNode내의 free를 활용해 할당해제 
//	while (DeleteNode(head)) { ; }
//
//	//DeleteNode함수가 Target 다음 노드를 삭제하는 함수이므로 while문을 통해 head만 남게되니 head를 따로 해제해줘야함
//	free(head);
//
//	head = NULL;
//}