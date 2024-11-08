#include "main.h"
/**
 * _isalpha - checks for alphabetic char
 * @c: the char to be checked
 * Return: 1 for alphabetic char 0 for everything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
