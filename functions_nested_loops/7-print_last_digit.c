#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: the value of int
 *
 * Return: nn
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{

	lastDigit = lastDigit * -1;
	}

	_putchar (lastDigit + '0');

	return (lastDigit);
}
