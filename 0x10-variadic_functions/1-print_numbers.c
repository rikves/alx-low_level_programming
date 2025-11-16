#include "variadic_functions.h"

/**
 * print_numbers - function that sums all given args
 *@n : start of input variables
 *
 *@separator : is the string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	if (separator)
	{
		while (i < n)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1)
				printf("%s", separator);
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
