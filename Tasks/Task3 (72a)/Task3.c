// Дано действительное число а. Вычислить f(a), где f—периодическая функция с периодом 2, совпадающая на отрезке [—1, 1]:
// а) с функцией — x2 + 1;
#include <stdio.h>
#include <math.h>

int main(void)
{
	float x, y, remains;
	int main;
	printf("Input X - ");
	scanf_s("%f", &x);

	main = (int) x;
	printf("R = %d", main);
	remains = x - main;

	if (x > 1)
	{
		if (main % 2 == 0)
		{
			x = 0 + remains;
		}
		else
			x = -1 + remains;
	}
	else if(x < -1)
	{
		if (main % 2 == 0)
		{
			x = 0 + remains;
		}
		else
			x = 1 + remains;
	}

	y = -1 * (x * x) + 1;
	
	printf("\nK = %f\n", remains);
	printf("X = %f\n", x);
	printf("Y = %f\n", y);
	return 0;
}