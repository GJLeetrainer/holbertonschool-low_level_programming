#include <stdio.h>

/**
 * main - entry point
 * @main - C program to print alphabet a-z lowercase
 * Return: Always (0)
**/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		else
			putchar(i);
	}
	printf("\n");
	return (0);
}