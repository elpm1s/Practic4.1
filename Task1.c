#include <stdio.h>
#include <locale.h>

void main()


{
	// 1 �������
	setlocale(LC_CTYPE, "RUS");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("c = %c i = %i f = %.2f d = %.0e\n", c, i, f, d);

	printf("������� ������ ���� char, int, flotat, double:\n");
	scanf("%c %i %f %le", &c, &i, &f, &d);

	// ������� 1�
	double x, drob;
	int cel;
	printf("������� ������� �����: \n");
	scanf("%lf", &x);
	printf("����� �����: %.0lf\n", x);
	cel = x;
	drob = x - cel;
	printf("������� �����: %g\n", drob);

	system("pause");

	// ������� 1�

	char xx;
	printf("������� ����� ������:\n");
	scanf("%c", &xx);
	printf("���� ������ � ������������ ������� ���������: %i\n", xx);
	printf("���� ������ � ���������������� ������� ���������: %x\n", xx);

	// ������� 1�

	float t;
	printf("������� �����:\n");
	scanf("%f", &t);
	printf("��� ����� � ���� 1/i: %.5f", 1 / t);






}











