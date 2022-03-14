#include <stdio.h>

/**
 * main - main blocks
 * print using `putchar` to print alphabet in lowercase
 * letters q and e are not included
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
