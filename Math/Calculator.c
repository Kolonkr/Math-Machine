#include "function.h"

double Calulator(float a, char ch, float b) {
	double result = 0;
	switch (ch)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		if (b != 0)
			result = a / b;
		else 
			printf("0���� ���� �� �����ϴ�. \n");
		break;
	default:
		printf("�߸��� ������ �Դϴ�. \n");
	}
	return result;
}