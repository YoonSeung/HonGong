#include<stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(void)
{
	double max, mid, min;

	printf("�Ǽ��� 3�� �Է� : ");
	scanf_s("%lf%lf%lf", &max, &mid, &min);
	printf("������ ���� �ּ� ��� : %p,%p,%p\n", &max, &mid, &min); //���� ���� üũ�� ����
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
	/* ���� �� ��(����) 
	if (*midp > *minp)
	{
		if (*maxp < *midp)
			swap(&maxp, &midp); //Ʋ���κ�
	}
	else if (*midp < *minp)
	{
		swap(&midp, &minp);//Ʋ���κ�

		if (*maxp < *midp)
			swap(&maxp, &midp);//Ʋ���κ�
	}
		// �� &�� swap �ϸ� �ȵǴ��� ==> �����غ��� �翬�ϴ� �츮�� �ٲܰ� �޸� ���� ���ε� &�� ���� �ּҸ� �ٲٴ°ű⶧���̴�.
		// �׷��� ���� &�� �ϰ� �Լ��� ������ �ּ����� �ٲ��� ���� ���̴�. �ֳĸ� swap �Լ��� �޸� ���� ���� �ٲٴ� �Լ��̱� ������ �ּҰ� �ٲ��� �ʴ´�
		//���� �ּҸ� �ٲٰ� �ʹٸ� swap �Լ��� ���ľ��Ѵ�.
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
