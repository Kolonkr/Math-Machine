#include <stdio.h>
#include "function.h"

int main() {
	int select = 0;;
	float r = 0;
	float a = 0, b = 0;
	float lat1 = 0, lon1 = 0, lat2 = 0, lon2 = 0;
	char ch;

	printf("수학 계산 자동 시스템에 오신 것을 환영합니다. \n");
	
	while (select != 5)
	{
		printf("------------------------------------------------------------------------------------------- \n");
		printf("실행할 함수를 선택하여 주십시오. \n");
		printf("<1>원의 넓이 <2>직각삼각형의 빗변길이 <3>좌표까지의 실제거리 <4>사칙연산 계산기 <5>종료 >");
		scanf_s("%d", &select);

		switch (select)
		{
		case 1://원의 넓이
			printf("반지름을 입력하세요. >");
			scanf_s("%f", &r);
			printf("원의 넓이는 %lf 입니다. \n", Circle_Area(r));
			break;
		case 2://삼각형의 빗변길이
			printf("두 변의 길이를 각각 입력하세요. >");
			scanf_s("%f %f", &a, &b);
			printf("직각삼각형의 빗변의 길이는 %f 입니다. \n", Triangle_Hypotenuse(a, b));
			break;
		case 3://좌표까지의 실제거리
			printf("현재 위치의 위치 좌표를 입력하세요. >");
			scanf_s("%f %f", &lat1, &lon1);		
			printf("목적지의 위치 좌표를 입력하세요. >");
			scanf_s("%f %f", &lat2, &lon2);
			printf("목적지 까지의 거리는 %lfKm 입니다. \n", ManhattanDistance(lat1, lon1, lat2, lon2));
			break;
		case 4://사칙연산 계산기
			printf("수식을 한줄로 띄어쓰기로 입력하세요 (+ - * /): ");
			scanf_s("%f %c %f", &a, &ch, 1, &b);
			printf("연산 결과는 %lf 입니다. \n", Calulator(a, ch, b));
			break;
		case 5:
			printf("시스템을 종료합니다.");
			break;
		default:
			printf("잘못 입력하셨습니다. 다시 입력하십시오.");
		}
	}
	return 0;
}