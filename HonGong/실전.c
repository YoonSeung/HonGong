#include<stdio.h>

//���� chapter 9 
	/*void swap(double *pa, double *pb);
	void line_up(double *maxp, double *midp, double *minp);

	int main(void)
	{
		double max, mid, min;

		printf("�Ǽ��� 3�� �Է� : ");
		scanf_s("%lf%lf%lf", &max, &mid, &min);
		printf("������ ���� �ּ� ��� : %p,%p,%p\n\n", &max, &mid, &min); //���� ���� üũ�� ����
		line_up(&max, &mid, &min);
		printf("���ĵ� �� ��� : %.1lf,%.1lf,%.1lf\n", max, mid, min);
		printf("���ĵ� ���� �ּ� ��� : %p,%p,%p\n", &max, &mid, &min);//���� ���� üũ�� ����
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
				 //swap2(&maxp, &midp); //Ʋ���κ�
				swap(maxp, midp);
		}
		else if (*midp < *minp)
		{
			//swap2(&midp, &minp); //Ʋ���κ�
			swap(midp, minp);

			if (*maxp < *midp)
				//swap2(&maxp, &midp); //Ʋ���κ�
				swap(maxp, midp);
		}
			// �� &�� swap �ϸ� �ȵǴ��� ==> �����غ��� �翬�ϴ� �츮�� �ٲܰ� �޸��ּ� ���� ���ε� &�� ���� �ּ���ü�� �ٲٴ°��̱� �����̴�.
			// �׷��� ���� &�� �ϰ� �Լ��� ������ �ּ����� �ٲ��� ���� ���̴�. �ֳĸ� swap �Լ��� �޸� ���� ���� �ٲٴ� �Լ��̱� ������ �ּҰ� �ٲ��� �ʴ´�
	
	}*/

	//chapter 10 . �����ؾ���
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
		printf("��ȣ�Է� : ");
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
			printf("���� ���� �ֽ��ϴ�.\n");
			i--;
		}
	}

}

void print_nums(int* lotto_nums)
{
	int i;

	printf("�ζ� ��ȣ ; ");
	for (i = 0; i < 6; i++)
	{
		printf("%d  ", lotto_nums[i]);
	}
}*/
