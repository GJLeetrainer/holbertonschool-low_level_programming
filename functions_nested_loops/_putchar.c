#include "main.h"

void _putchar(const char *message)
{
	while (*message)
	{
	putchar(*message);
	message++;
	}
putchar('\n');
}
