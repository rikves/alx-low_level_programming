#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,/
 *  starting from 00:00 to 23:59.
 * In this task we use combinitation trick (For older task (printcomb5.c))
 */

void jack_bauer(void)
{
	int n, m;

	n = 0;
	while (n < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar(10);
			m++;
		}
		n++;
	}
}
