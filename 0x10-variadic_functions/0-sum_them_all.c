#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all given args
 *@n : start of input variables
 *Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;

	sum = 0;
	i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
