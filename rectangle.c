#include <stdio.h>

int main(void)
{
	int height = 7;
	int width = 5;
	int perimeter;
	int area;

	perimeter = (2 * height) + (2 * width);
	area = height * width;
	printf("Perimeter: %d\n", perimeter);
	printf("Area: %d\n", area);
	return (0);
}
