#include "variadic_functions.h"
/**
 * sum_them_all - Sums all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: Variable number of parameters to sum.
 *
 * Description:Function that calculates the sum of a variabe.
 * If `n` is 0, the function returns 0.
 *
 * Return: The sum of parameters. If `n` is 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	unsigned int i;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
