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

/**
 * print_string - prints string
 *
 * Return: Returns the count of printed characters
 *
 */

int print_string(va_list args)
{
	int count = 0;
	int i = 0;

	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		count += write(1, str++, 1);
	}

	return (count);
}


/**
 * print_percent - prints percentage
 *
 * Return: Returns the percent sign
 *
 *
 */

int print_percent(va_list args)
{
	(void)args;

	return (write(1, "%", 1));
}
