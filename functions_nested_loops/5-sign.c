#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: character to be checked
 *
 * Return: 1 if more than 0, 0 if 0, -1 if < than 0 and +- signs accordingly.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
