#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double cosinus(double x)
{
	double y = 1.;
	double sum = 1.;
	int i = 0;
	if (x == 0.) return 1.;
	while (fabs(fabs(cos(x)) - fabs(y)) > 0.000001)
	{
		sum = sum * pow(x, 2);
		sum = sum / (2 * i + 1);
		sum = sum / (2 * i + 2);
		sum = sum * (-1);
		i++;
		y += sum;
	}
	return y;
}

int main()
{
	double x = 0.;
	double y;
	double a = 0.;
	double b = 5.;
	double step = 0.1;

	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
		218, 196, 196, 196, 194, 196, 196,
		196, 196, 196, 196, 196, 196, 191);
	printf("%c%-3c%c%-8c%c\n", 179, 'x', 179, 'y', 179);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
		195, 196, 196, 196, 197, 196, 196,
		196, 196, 196, 196, 196, 196, 180);

	for (int i = 0; i < 6; i++)
	{
		y = cosinus(x);
		printf("%c%.1f%c%8.6f%c\n", 179, x, 179, y, 179);
		x += step;
	}

	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
		192, 196, 196, 196, 193, 196, 196,
		196, 196, 196, 196, 196, 196, 217);
	system("pause");
	return 0;
}