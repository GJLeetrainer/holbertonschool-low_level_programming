#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: Lowercase to be checked
 *Return: 1 for lowercase 0 for everything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
