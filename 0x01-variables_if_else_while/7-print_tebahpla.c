#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse
*
* Return: 0 Always (Success)
*/

int main(void)
{
	int c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar(10);
	return (0);
}

