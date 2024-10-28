#include <stdio.h>

/**
 * main - entry point
 * @main - C program to print alphabet a-z lowercase then A-Z uppercase
 * Return: Always (0)
**/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	{
		for (i = 'A'; i <= 'Z'; i++)
			putchar(i);
	}
	printf("\n");
	return (0);
}
