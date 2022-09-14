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
//	//���� ���� head �ϳ�
//	Now = head;
//
//	//Now�� head, InsertNode�Լ��� Now������忡 ����� ���� �Լ��̹Ƿ� head���Ŀ� 1���� 5���� �����͸� ��� ������ �Ѱ��� ���� 
//	for (i = 1; i <= 5; i++) {
//		Temp.index = i;
//		scanf("%s",name);
//		Now = InsertNode(Now, &i, name);
//	}
//
//	//������ head->next(1)���� ������ Now������ , Now�� Now->next�� �̵��ϸ鼭 Now����� index�� ���ڿ��� ����.
//	//for (Now = head->next; Now; Now = Now->next) {
//	//	printf("%d---> %s\n", Now->index, Now->name);
//	//}
//
//	////head->next��� (1) ������忡 7��,6���ε����� ���ڿ��ֱ�
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
//	//head->next��� ������ 9��,8���ε����� ���ڿ� ������������ ����
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
//	printf("\n==�����ͻ��� �� ����Ʈ==\n");
//
//
//	//head->next �� head�� ����Ű�� �ּ� �ڵ�� 1 => DeleteNode�Լ��� �Ű������� �Ű������������ ���� ��, 1�����������̹Ƿ� 2�� �����Ǵ°�
//	DeleteNode(head->next);
//
//	printf("\n==������ ����Ʈ==\n");
//
//
//	//UnInitList();
//
//	//�Ҵ������� ������ Ȯ���ϱ� ���� �ۼ�(�������°� ����)
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
////����Ʈ head �ʱ�ȭ
//void InitList() {
//	head = (NODE *)malloc(sizeof(NODE));
//	head->next = NULL;
//}
//
////Target��� ������ ���ο� ��� �����Լ�(����x)
////NODE *InsertNode(NODE *Target, NODE *newNode)
//NODE *InsertNode(NODE *Target, int *index, char *name) {
//	
//	//�� ��� �޸��Ҵ� �� ��� ���� �� ���� (���� �ּҴ� ���� x)
//	NODE *New = (NODE *)malloc(sizeof(NODE));
//	New->index = *index;
//	strcpy(New->name, name);
//	
//	//���θ��� ����� �����ּҰ� ����Target�� ����Ű�� �ּҷ� ����
//	New->next = Target->next;
//
//	//������尡 ����Ű�� �ּҸ� �� ����� �ּҷ� �ٲ�
//	Target->next = New;
//
//	return New;
//
//}
//
////�������� ���� ����
//NODE *SortInsertNode(NODE *Target, NODE *newNode) {
//
//	NODE *New = (NODE *)malloc(sizeof(NODE));
//	*New = *newNode;
//
//	//Target�� ����Ű�� �ּҰ� NULL�̸� NULL�� new�� ���Ϸ��ؼ� ������ ��, new�����index�� target�� �������� ��������� �ε��� ���� ���̱� ����
//	//Target ���� ����� index�� new index���� �������� �ݺ�
//	//&&������ ���ʿ��� ������ (Ȯ�δ� �غ���)
//	while (Target->next != NULL && Target->next->index < New->index) {
//		Target = Target->next;
//	}
//	//target�� ����Ű�� �ּҸ� new�� ����Ű���ϰ� Ÿ���� new ��带 ����Ű�� ����
//	New->next = Target->next;
//	Target->next = New;
//
//	return New;
//}
//
////target ���� ��� ���� �Լ�
//bool DeleteNode(NODE *Target) {
//	//������ ��� ����
//	NODE *Del;
//	//������ ��尡 target�� ����Ű�� �ּ�
//	Del = Target->next;
//	if (Del == NULL) {
//		return false;
//	}
//	Target->next = Del->next;
//	free(Del);
//	return true;
//}
//
////�����Ҵ� ��ü ���� �Լ�
//void UnInitList() {
//
//	//DeleteNode�Լ��� head ���������� ���� �����ϸ鼭 DeleteNode���� free�� Ȱ���� �Ҵ����� 
//	while (DeleteNode(head)) { ; }
//
//	//DeleteNode�Լ��� Target ���� ��带 �����ϴ� �Լ��̹Ƿ� while���� ���� head�� ���ԵǴ� head�� ���� �����������
//	free(head);
//
//	head = NULL;
//}