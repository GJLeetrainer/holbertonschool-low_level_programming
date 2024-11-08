#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
**/

int main(void)
{
	int h;

	for (h = 'z'; h >= 'a'; --h)
		putchar(h);
	putchar('\n');
	return (0);
}

