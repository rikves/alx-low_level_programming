#include <stdio.h>
#include <unistd.h>
/**
* main - prints all possible different combinations of three digits.
*
* Return: 0 Always(Succeses)
*/
void _putchar(char c)
{
	write(1, &c, 1);
}
int main(void)
{
	int	m = 48;
	int	n = 49;
	int	o = 50;

	while (m <= 55)
	{
		while (n <= 56)
		{
			while (o <= 57)
			{
				if (m < n && n < o)
				{
					_putchar(m);
					_putchar(n);
					_putchar(o);
					if (m != 55 || n != 56 || o != 57)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				o++;
			}
			o = 50;
			n++;
		}
		n = 49;
		m++;
	}
	_putchar(10);
	return (0);
}
