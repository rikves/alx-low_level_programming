#include <stdio.h>
#include <unistd.h>
/**
* main - program that prints all single digit numbers 0 to 10.
*
* Return:0 Always (Success)
*/

int main(void)
{
	write(1, "0123456789\n", 11);
	return (0);
}
