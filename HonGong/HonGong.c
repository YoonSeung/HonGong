#include<stdio.h>
#include<string.h>

/*int main(void) {
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
}*/

/*int main(void) {
	char frult[20] = "strawberry";
	//frult = "banana"; �迭 ���� �� ���� �����ڷ� ���ڿ� �Է� ���Ѵ�.

	printf("���� : %s\n", frult);
	strcpy(frult, "banana");
	printf("����´ : %s %s\n", frult, "jam");
}*/

/*int main(void) {
	int Num = 629;
	int *pi;
	char test[100];

	memset(test, 0xff, 100);

	pi = &Num;
	*pi = 1;
	printf("Num���� %d�Դϴ�.\n", *pi);
}*/

/*int main(void) {
	int kor = 3;
	int eng = 5;
	int mat = 4;
	int credits, res;
	double kscore = 3.8;
	double escore = 4.4;
	double mscore = 3.9;
	double grade;

	credits = kor + eng + mat;
	grade = (kscore + escore + mscore) / 3;

	if (credits >= 10 && grade > 4.0) {
		res = 1;
	}
	else {
		res = 0;
	}

	printf("%d\n", res);
}*/

/*int main(void) {
	int kor = 3, eng = 5, mat = 4;
	int credits;
	int res;
	double kscore = 3.8, escore = 4.4, mscore = 3.9;
	double grade;

	credits = kor + eng + mat;
	grade = (kor * kscore + eng * escore + mat * mscore) / credits;

	res = (credits >= 10) && (grade > 4.0);
	printf("%d\n", res);
}*/

/*int main(void) {
	int kg;
	double cm, BMI;
	
	printf("������(kg)�� Ű(cm) �Է�: ");
	scanf("%d%lf", &kg, &cm);

	cm /= 100;

	BMI = cm * cm / (double)kg;

	if (20.0 <= BMI && BMI <= 25.0) {
		printf("ǥ���Դϴ�.\n");
	}
	else {
		printf("ü�߰����� �ʿ��մϴ�.");
	}
}*/

/*int main(void) {
	int age = 25, chest = 95;
	char size;

	if (age < 20) {
		if (chest < 85) {
			size = 'S';
		}
		else if (85 <= chest && chest < 95) {
			size = 'M';
		}
		else {
			size = 'L';
		}
	}
	else {
		if (chest < 90) {
			size = 'S';
		}
		else if (90 <= chest && chest < 100) {
			size = 'M';
		}
		else {
			size = 'L';
		}
		
	}
	printf("������� %c�Դϴ�.\n", size);
}*/

/*int main(void) {
	int num1, num2, res;
	char x;

	printf("��Ģ���� �Է�(����) : ");
	scanf("%d%c%d", &num1, &x, &num2);

	if(x != '%')
		switch (x)
		{
		case '+':
			res = num1 + num2;
			printf("%d%c%d=%d", num1, x, num2, res);
			break;
		case '-':
			res = num1 - num2;
			printf("%d%c%d=%d", num1, x, num2, res);
			break;
		case '*':
			res = num1 * num2;
			printf("%d%c%d=%d", num1, x, num2, res);
			break;
		case '/':
			res = num1 / num2;
			printf("%d%c%d=%d", num1, x, num2, res);
			break;
		default:
			printf("��������Դϴ�.");
			break;
		}
	else 
		printf("'%%'�� ��� �Ұ��մϴ�.");
}*/

/*int main(void) {
	{
		int input_number;
		int i;
		int sum = 0;

		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &input_number);

		for (i = 1; i <= input_number; i++)
		{		
			if (input_number % i == 0 ) {

				sum += input_number;
				printf("%d\n", sum);
			}
		}

		printf("%d",sum);

	}
}*/
main() {
	int *array[4] = { 5,6,7,8 };

	char *pi;




	printf("%p = %p\n", array, array + 1);
}
