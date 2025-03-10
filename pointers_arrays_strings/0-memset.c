#include "main.h"
/**
 * _memset - fills the first n bytes of mem area pointed by s /constant byte b
 * @s: pointer to mem area
 * @b: constant byte
 * @n: bytes of mem
 * Return: pointer to mem area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int u = 0;

	for (u = 0; u < n; u++)
	{
		s[u] = b;
	}
	return (s);
}
