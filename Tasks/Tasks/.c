#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b;
	double x, y, z;

	printf("Input X - ");
	scanf_s("%lf", &x);
	printf("Input Y - ");
	scanf_s("%lf", &y);
	printf("Input Z - ");
	scanf_s("%lf", &z);
	a = (3 + exp(y - 1)) / (1 + x*x * abs(y - tan(z)));
	b = 1 + abs(y - x) + ((y - x) * (y - x)) / 2 + (abs(y - x) * abs(y - x) * abs(y - x)) / 3;
	printf("a = %f\n", a);
	printf("b = %f", b);

	return 0;
}