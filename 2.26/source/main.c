#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	printf("enter two integers");
	scanf_s("%d%d", &i, &j);

	if (i%j == 0)
	{
		printf("%d is multiple of %d\n", i, j);
	}

	else
	{
		printf("%d is not multiple of %d\n", i, j);
	}

	return 0;
}