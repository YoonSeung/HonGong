//------------- 포인터 주소값 찾아보기 실습
/*
int main(void) {
	int *array[4] = { 5,6,7,8 };

	char *pi;




	printf("%p = %p\n", array, array + 1);
	printf("%p" , &pi);
}

// 포인터를 활용해서 값 변경하기.
int main(void) {
	int Num = 629;
	int *pi;
	char test[100];

	memset(test, 0xff, 100); // test배열안의 값을 0xff로 100개 수정해라

	pi = &Num;
	*pi = 1;
	printf("Num값은 %d입니다.\n", Num);
}*/