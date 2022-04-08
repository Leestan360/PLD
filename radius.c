#include <stdio.h>

int main(void)
{
	int radius;
	float perimeter = 37.680000, area;

	radius = (perimeter / (3.14 * 2));
	perimeter = 2 * 3.14 * radius;
	area = 3.14 * (radius * radius);
	printf("Perimeter: %f\n", perimeter);
	printf("Area: %f\n", area);
	return (0);
}
