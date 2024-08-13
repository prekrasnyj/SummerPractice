//Дано действительное число a. Для функции f(x), графики которых представланы на рис.1 а - г, вычислить f(a).
// y = -1/(x^2) (-inf; -1)
// y = x^2 (-1; 2)
// y = 4 (2; +inf)

#include <stdio.h>

int main(void)
{
	double x,y;
	printf("Input X - ");
	scanf_s("%lf", &x);

	if (x <= -1)
		y = -1 / (x * x);
	else if (x > -1 && x < 2)
		y = x * x;
	else
		y = 4;

	printf("Y = %f", y);
	return 0;
}