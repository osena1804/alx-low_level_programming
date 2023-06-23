#include "main.h"

/**
 * _isdigit - check if is a digit or character
 *
 * @c: input character
 * Return: (1) true and (0) false
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
