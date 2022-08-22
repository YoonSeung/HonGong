#include<stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(void)
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf_s("%lf%lf%lf", &max, &mid, &min);
	printf("정렬전 값의 주소 출력 : %p,%p,%p\n", &max, &mid, &min); //오답 이유 체크용 라인
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf,%.1lf,%.1lf\n", max, mid, min);
	printf("정렬된 값의 주소 출력 : %p,%p,%p\n", &max, &mid, &min);//오답 이유 체크용 라인
}

void swap(double *pa, double *pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double *maxp, double *midp, double *minp)
{
	/* 내가 쓴 답(오답) 
	if (*midp > *minp)
	{
		if (*maxp < *midp)
			swap(&maxp, &midp); //틀린부분
	}
	else if (*midp < *minp)
	{
		swap(&midp, &minp);//틀린부분

		if (*maxp < *midp)
			swap(&maxp, &midp);//틀린부분
	}
		// 왜 &로 swap 하면 안되는지 ==> 생각해보면 당연하다 우리가 바꿀건 메모리 안의 값인데 &를 쓰면 주소를 바꾸는거기때문이다.
		// 그런데 막상 &로 하고 함수를 돌려도 주소조차 바뀌지 않을 것이다. 왜냐면 swap 함수는 메모리 안의 값을 바꾸는 함수이기 때문에 주소가 바뀌지 않는다
		//만약 주소를 바꾸고 싶다면 swap 함수도 고쳐야한다.
	*/

	if (*midp > *minp)
	{
		if (*maxp < *midp)
			swap(maxp, midp); 
	}
	else if (*midp < *minp)
	{
		swap(midp, minp);

		if (*maxp < *midp)
			swap(maxp, midp);
	}

}
