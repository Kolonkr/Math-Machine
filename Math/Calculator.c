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
			printf("0으로 나눌 수 없습니다. \n");
		break;
	default:
		printf("잘못된 연산자 입니다. \n");
	}
	return result;
}