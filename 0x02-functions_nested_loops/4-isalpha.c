#include "main.h"

/**
 * _isalpha - function check if a char is alpha lower or upper
 * @c: char to be checked
 * Return: 1 (if char is alpha) otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')  || (c >= 'a' && c <= 'z'));
	/*
	 * if((c >= 'A' && c <= 'Z')  || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	 */
}
