#include "main.h"

/**
 * times_table - print the nine table starting from 0
 * Return: Always 0
 */

void times_table(void)
{
	int i, h, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (h = 1; h <= 9; h++)
		{
			_putchar(',');
			_putchar(' ');

			j = i * h;

			if (j <= 9)
				_putchar(' ');
			else
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
