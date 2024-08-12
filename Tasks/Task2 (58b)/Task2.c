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