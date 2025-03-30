#include <stdio.h>

/**
* main - prints all possible different combinations of three digits.
*
* Return: 0 Always(Succeses)
*/
int main(void)
{
	int	m = 48;
	int	n = 49;
	int	o = 50;

	while (m <= 55)
	{
		n = m + 1;
		while (n <= 56)
		{
			o = n + 1;
			while (o <= 57)
			{
				putchar(m);
				putchar(n);
				putchar(o);
				if (m != 55)
				{
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			n++;
		}
		m++;
	}
	putchar(10);
	return (0);
}
