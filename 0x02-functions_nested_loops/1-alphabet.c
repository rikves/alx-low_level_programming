#include "main.h"

/**
 * print_alphabet - function that prints the alphabet,\
 *  in lowercase, followed by a new line.
 * Return:0
 */

void print_alphabet(void)
{
	int a  = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
