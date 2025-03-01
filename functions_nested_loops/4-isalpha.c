#include "main.h"
/**
 * _isalpha - checks for letters
 * @c: character to be checked
 *
 * Return: 1 if char is a letter or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
		return (0);
}
