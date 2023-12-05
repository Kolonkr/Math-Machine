#include <stdio.h>
#include "function.h"

int main() {
	int select = 0;;
	float r = 0;
	float a = 0, b = 0;
	float lat1 = 0, lon1 = 0, lat2 = 0, lon2 = 0;
	char ch;

	printf("���� ��� �ڵ� �ý��ۿ� ���� ���� ȯ���մϴ�. \n");
	
	while (select != 5)
	{
		printf("------------------------------------------------------------------------------------------- \n");
		printf("������ �Լ��� �����Ͽ� �ֽʽÿ�. \n");
		printf("<1>���� ���� <2>�����ﰢ���� �������� <3>��ǥ������ �����Ÿ� <4>��Ģ���� ���� <5>���� >");
		scanf_s("%d", &select);

		switch (select)
		{
		case 1://���� ����
			printf("�������� �Է��ϼ���. >");
			scanf_s("%f", &r);
			printf("���� ���̴� %lf �Դϴ�. \n", Circle_Area(r));
			break;
		case 2://�ﰢ���� ��������
			printf("�� ���� ���̸� ���� �Է��ϼ���. >");
			scanf_s("%f %f", &a, &b);
			printf("�����ﰢ���� ������ ���̴� %f �Դϴ�. \n", Triangle_Hypotenuse(a, b));
			break;
		case 3://��ǥ������ �����Ÿ�
			printf("���� ��ġ�� ��ġ ��ǥ�� �Է��ϼ���. >");
			scanf_s("%f %f", &lat1, &lon1);		
			printf("�������� ��ġ ��ǥ�� �Է��ϼ���. >");
			scanf_s("%f %f", &lat2, &lon2);
			printf("������ ������ �Ÿ��� %lfKm �Դϴ�. \n", ManhattanDistance(lat1, lon1, lat2, lon2));
			break;
		case 4://��Ģ���� ����
			printf("������ ���ٷ� ����� �Է��ϼ��� (+ - * /): ");
			scanf_s("%f %c %f", &a, &ch, 1, &b);
			printf("���� ����� %lf �Դϴ�. \n", Calulator(a, ch, b));
			break;
		case 5:
			printf("�ý����� �����մϴ�.");
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�.");
		}
	}
	return 0;
}