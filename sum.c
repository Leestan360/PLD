#include <stdio.h>

int main(void)
{
	double w1, a, w2, b;
	double average;

	printf("w1: ");
	scanf("%lf", &w1);
	printf("Items: ");
	scanf("%lf", &a);
	printf("W2: ");
	scanf("%lf", &w2);
	printf("Items2: ");
	scanf("%lf", &b);
	average = (((w1 * a) + (w2 * b)) / (a + b)); 
	printf("Average = %f\n", average);
	return (0);
}
