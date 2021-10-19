#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	 float hight, weight, BMI;

	printf("enter your hight(cm) and weight(kg)");
	scanf_s("%f %f", &hight, &weight);
	BMI = weight/((hight/100)*(hight/100));
	
    printf("Your BMI = %.2f\n", BMI);
	printf("BMI VALUES\n");
	printf("Underweight:\tLess than 18.5\n");
	printf("Normal:\t\tbetween 18.5 and 24.9\n");
	printf("Overweight:\tbetween 25 and 29.9\n");
	printf("Obese:\t\t30 or greater");

	return 0;

}