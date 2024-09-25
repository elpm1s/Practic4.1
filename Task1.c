#include <stdio.h>
#include <locale.h>

void main()


{
	// 1 задание
	setlocale(LC_CTYPE, "RUS");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("c = %c i = %i f = %.2f d = %.0e\n", c, i, f, d);

	printf("¬ведите данные типа char, int, flotat, double:\n");
	scanf("%c %i %f %le", &c, &i, &f, &d);

	// задание 1а
	double x, drob;
	int cel;
	printf("¬ведите дробное число: \n");
	scanf("%lf", &x);
	printf("÷ела€ часть: %.0lf\n", x);
	cel = x;
	drob = x - cel;
	printf("ƒробна€ часть: %g\n", drob);

	system("pause");

	// задание 1б

	char xx;
	printf("¬ведите любой символ:\n");
	scanf("%c", &xx);
	printf("Ётот символ в дес€теричной системе счислени€: %i\n", xx);
	printf("Ётот символ в шестнацетиричной системе счислени€: %x\n", xx);

	// задание 1в

	float t;
	printf("¬ведите число:\n");
	scanf("%f", &t);
	printf("Ёто число в виде 1/i: %.5f", 1 / t);






}











