#include "main.h"

/**
 * _isdigit - checks if a character is a digit.
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')  /* Check if c is between '0' and '9' */
		return (1);
	else
		return (0);
}
