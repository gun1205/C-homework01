#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, M = 0, m;

	printf("enter three different integers\n");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b && a > c)
	{
		if (b > c)
			M = a, m = c;

		else
			M = a, m = b;
	}

	if (b > a && b > c)
	{
		if (a > c)
			M = b, m = c;
		else
			M = b, m = a;
	}

	if (c > a && c > b)
	{
		if (a > b)
			M = c, m = b;
		else
			M = c, m = a;
	}

	printf("Max=%d\n", M);
	printf("min=%d\n", m);

	return 0;
}