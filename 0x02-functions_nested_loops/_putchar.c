#include <unistd.h>
#include "main.h"

 /*_putchar - writes the character c to stdout
 *c : the character to print
 *Return: on success 1.
  */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
