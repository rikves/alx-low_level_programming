#include "main.h"


/**
 * print_alphabet_x10 - function that prints the alphabet,\
 *  in lowercase 10 times, followed by a new line.
 * Return:0
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	int a = 97;

	while (counter < 10)
	{
		a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
		counter++;
	}
}
