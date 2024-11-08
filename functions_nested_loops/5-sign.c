#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: the numbewr to be checked
 * Return: 1 for positive, -1 for else
 */

 int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

}
