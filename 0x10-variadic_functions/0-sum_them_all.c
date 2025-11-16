#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all given args
 *@n : start of input variables
 *Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum , i = 0;

	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
