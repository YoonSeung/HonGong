#include<stdio.h>

//실전 chapter 9 
	/*void swap(double *pa, double *pb);
	void line_up(double *maxp, double *midp, double *minp);

	int main(void)
	{
		double max, mid, min;

		printf("실수값 3개 입력 : ");
		scanf_s("%lf%lf%lf", &max, &mid, &min);
		printf("정렬전 값의 주소 출력 : %p,%p,%p\n\n", &max, &mid, &min); //오답 이유 체크용 라인
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
		if (*midp > *minp)
		{
			if (*maxp < *midp)
				 //swap2(&maxp, &midp); //틀린부분
				swap(maxp, midp);
		}
		else if (*midp < *minp)
		{
			//swap2(&midp, &minp); //틀린부분
			swap(midp, minp);

			if (*maxp < *midp)
				//swap2(&maxp, &midp); //틀린부분
				swap(maxp, midp);
		}
			// 왜 &로 swap 하면 안되는지 ==> 생각해보면 당연하다 우리가 바꿀건 메모리주소 안의 값인데 &를 쓰면 주소자체를 바꾸는것이기 때문이다.
			// 그런데 막상 &로 하고 함수를 돌려도 주소조차 바뀌지 않을 것이다. 왜냐면 swap 함수는 메모리 안의 값을 바꾸는 함수이기 때문에 주소가 바뀌지 않는다
	
	}*/

	//chapter 10 . 공부해야함
/*void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{
	int num;
	int i,j;
	int dup;

	for (i = 0; i < 6; i++)
	{
		printf("번호입력 : ");
		scanf_s("%d", &num);
		dup = 0;

		for (j=0 ; j < i; j++)
		{
			if (num == lotto_nums[j])
			{
				dup = 1;
				break;
			}
		}
		if (!dup)
		{
			lotto_nums[i] = num;
		}
		else
		{
			printf("같은 값이 있습니다.\n");
			i--;
		}
	}

}

void print_nums(int* lotto_nums)
{
	int i;

	printf("로또 번호 ; ");
	for (i = 0; i < 6; i++)
	{
		printf("%d  ", lotto_nums[i]);
	}
}*/
