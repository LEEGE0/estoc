#include <stdio.h>

int main(void)
{
	double weight, height, bmi;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf_s("%lf%lf", &weight, &height);

	height = height / 100.0;
	bmi = weight / (height * height);
	
	if (bmi >= 20.0 && bmi < 25.0) {
	printf("ǥ�� �Դϴ�.\n");
	}
	else {
	printf("ü�߰����� �ʿ��մϴ�.\n");
	}
		
}