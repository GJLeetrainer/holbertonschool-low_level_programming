#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Executes a function that prints a name.
 * @name: The name be printed, passed as a string.
 * @f: A pointer to a function that takes a string and returns nothing.
 *
 * Description: Function that takes a string `name` and a function pointer `f`and
 *  calls `f` with `name` as the  argument to process/print the name.
 * If `name` or `f` is NULL, the function does nothing and returns early.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
