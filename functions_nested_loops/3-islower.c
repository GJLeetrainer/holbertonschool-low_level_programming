#include "main.h"
/**
 * _islower - checks for lowercase chars
 * @c: character to be checked
 * Return: 1 if character is lowercase or 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
