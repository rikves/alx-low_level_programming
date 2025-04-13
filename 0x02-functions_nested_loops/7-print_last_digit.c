#include "main.h"

/**
 * print_last_digit - function that prints last digit
 * @n: the number to be traited
 * Return:(n)
 */

int print_last_digit(int n)
{
	int res;

	if (n < 0)
		n = -n;

	res = n % 10;
	if (res < 0)
		res = -res;

	_putchar(res + 48);

	return (res);
}
