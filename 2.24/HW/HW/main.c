#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int integer;

	printf("enter an integer\n");
	scanf_s("%d", &integer);

	if (integer % 2 == 0)
	{
		printf("%d is even\n", integer);
	}

	else
	{
		printf("%d is odd\n", integer);
	}

	return 0;
}