#include "main.h"

/**
 * _islower - function that checks for the lowercase char
 * @c: character to be checked
 * Return:1 (if c lowercase) other wise Return : 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
