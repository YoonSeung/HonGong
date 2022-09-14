//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//typedef struct NODE {
//	int index;
//	char *name;
//	struct NODE *next;
//}NODE;
//
//NODE *head;
//void InitList();
//NODE *InsertNode(NODE *Target, NODE *newNode);
//bool DeleteNode(NODE *Target);
//void UnInitList();
//
//void main() {
//
//	int i;
//	NODE *Now, Temp;
//
//	InitList();
//
//	//���� ���� head �ϳ�
//	Now = head;
//
//	//Now�� head, InsertNode�Լ��� Now������忡 ����� ���� �Լ��̹Ƿ� head���Ŀ� 1���� 5���� �����͸� ��� ������ �Ѱ��� ���� 
//	for (i = 1; i <= 5; i++) {
//		Temp.index = i;
//		Temp.name ="name";
//		Now = InsertNode(Now, &Temp);
//	}
//
//	//head->next �� head�� ����Ű�� �ּ� ��, 1�� => DeleteNode�Լ��� �Ű������� �Ű������������ ���� ��, 1�����������̹Ƿ� 2�� �����Ǵ°�
//	//DeleteNode(head->next);
//	
//	//������ head->next(1)���� ������ Now������ , Now�� Now->next�� �̵��ϸ鼭 Now����� data�� ����.
//	for (Now = head->next; Now; Now = Now->next) {
//		printf("%d---> %s\n", Now->index,Now->name);
//	}
//
//	UnInitList();
//
//	//�Ҵ������� ������ Ȯ���ϱ� ���� �ۼ�(�������°� ����)
//	//for (Now = head->next; Now; Now = Now->next) {
//	//	printf("%d\n", Now->data);
//	//}
//}
//
////����Ʈ head �ʱ�ȭ
//void InitList() { 
//	head = (NODE *)malloc(sizeof(NODE));
//	head->next = NULL;
//}
//
////Target��� ������ ���ο� ��� �����Լ�
//NODE *InsertNode(NODE *Target, NODE *newNode){
//	
//	//�� ��� �޸��Ҵ� �� ��� ���� �� ���� (���� �ּҴ� �����Ⱚ)
//	NODE *New = (NODE *)malloc(sizeof(NODE));
//	*New = *newNode;
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
////target ���� ��� ���� �Լ�
//bool DeleteNode(NODE *Target) {
//	//������ ��弱��
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