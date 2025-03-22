#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then uppercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 97;

	while (c >= 97 && c <= 122)
	{
		putchar(c);
		c++;
	}

	c = 65;

	while (c >= 65 && c <= 90)
	{
		putchar(c);
		c++;
	}

	putchar(10);
	return (0);
}

