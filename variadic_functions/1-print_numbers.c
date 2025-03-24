#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by a separator.
 * @separator: String to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: This function takes a variable number of integers and
 * prints them separated by `separator` string. If the separator is
 * `NULL`, numbers will be printed without separator and new line is printed
 * at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
	}
	printf("\n");
	va_end(ap);
}
