#include "variadic_functions.h"
/**
 * print_strings - Prints strings followed by new line.
 * @separator: String to be printed between strings.
 * @n: The number of strings passed to the function.
 *
 * Description: This function takes a variable number of string arguments
 * and prints them separated by the `separator`. If a string is `NULL`,
 * it prints`(nil)`.
 * A new line is added at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
