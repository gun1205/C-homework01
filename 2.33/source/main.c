#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float my, ap, as, pe, ts, total;

	printf("miles driven per day:");
	scanf_s("%f", &my);
	printf("a gallon of gasoline price:");
	scanf_s("%f", &ap);
	printf("a gallon of gasoline driven miles:");
	scanf_s("%f", &as);
	printf("parking fee:");
	scanf_s("%f", &pe);
	printf("tolls:");
	scanf_s("%f", &ts);

	total = (my / as * ap) + pe + ts;
	printf("total cost are %.2f", total);

	return 0;
}