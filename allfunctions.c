#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_char - prints character
 *
 * Return: Returns the number of the character printed
 *
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}
