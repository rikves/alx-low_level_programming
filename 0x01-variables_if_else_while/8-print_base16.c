#include <stdio.h>
#include <unistd.h>
/**
* main - program that prints all single digit numbers 0 to f (base16).
*
* Return:0 Always (Success)
*/

int main(void)
{
	int n = 48;
	int hex = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (hex <= 102)
	{
		putchar(hex);
		hex++;
	}
	putchar(10);
	return (0);
}
