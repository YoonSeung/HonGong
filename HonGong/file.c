#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<stdlib.h>
#include<memory.h>

//#define ELETYPE int
//ELETYPE *ar;
//unsigned size;
//unsigned num;
//unsigned growby;
//
//void InitArray(unsigned asize, unsigned agrowby) {
//	size = asize;
//	growby = agrowby;
//	num = 0;
//	ar = (ELETYPE*)malloc(size * sizeof(ELETYPE));
//}
//
//void Insert(int idx, ELETYPE value) {
//	unsigned need;
//	need = num + 1;
//	if (need > size) {
//		size = need + growby;
//		ar = (ELETYPE*)realloc(ar, size * sizeof(ELETYPE));
//	}
//	memmove(ar + idx + 1, ar + idx, (num - idx) * sizeof(ELETYPE));
//	ar[idx] = value;
//	num++;
//}
//
//void Delete(int idx) {
//	memmove(ar + idx, ar + idx + 1, (num - idx - 1) * sizeof(ELETYPE));
//	num--;
//}
//
//void Append(ELETYPE value) {
//	Insert(num, value);
//}
//
//void UnInitArray() {
//	free(ar);
//}
//
//void DumpArray(char* sMark) {
//	unsigned i;
//	printf("%16s => ũ��=%02d, ����=%02d :", sMark, size, num);
//	for (i = 0; i < num; i++) {
//		printf("%2d", ar[i]);
//	}
//	printf("\n");
//}
//
//void main() {
//	int i;
//
//	InitArray(10, 5); DumpArray("����");
//	for (i = 1; i <= 8; i++) Append(i); DumpArray("8�� �߰�");
//	Insert(3, 10); DumpArray("10 ����");
//	Insert(3, 11); DumpArray("11 ����");
//	Insert(3, 12); DumpArray("12 ����");
//	Delete(7); DumpArray("��� 7 ����");
//
//	UnInitArray();
//
//}

//int Factorial(int n) {
//	if (n == 0)
//		return 1;
//	else
//		return n * Factorial(n - 1);
//}
//int main() {
//	printf("1! = %d\n", Factorial(1));
//	printf("2! = %d\n", Factorial(2));
//	printf("3! = %d\n", Factorial(3));
//	printf("4! = %d\n", Factorial(4));
//	printf("9! = %d\n", Factorial(9));
//
//}

int Fibo(int n) {
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);

}

int main() {
	int i;
	for (i = 1; i < 15; i++) {
		printf("%d ", Fibo(i));
	}
}