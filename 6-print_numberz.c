#include <stdio.h>

/**
 * main -main block
 * print numbers of base 10
 * using putchar
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
