#include "main.h"
/**
 * _isupper - check for uppercase character
 *
 * @c: input character
 * Return: (1) true and (0) false
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
