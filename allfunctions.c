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
int print_decimal(va_list args)
{
	int digit_count = 1;
	unsigned int temp;

	int n = va_arg(args, int);
	unsigned int abs_value;
	int count;

	if (n < 0)
	{
		abs_value = (unsigned int)(-n);
		count = write(1, "-", 1);
	}

	else
	{
		abs_value = (unsigned int)n;
		count = 0;
	}

	if (abs_value == 0)
	{
		count += write(1, "0", 1);
		return (count);
	}

	for (temp = abs_value; temp > 9; temp /= 10)
		digit_count *= 10;

	while (digit_count != 0)
	{
		char digit_char = ((abs_value / digit_count) % 10) + '0';

		count += write(1, &digit_char, 1);
		digit_count /= 10;
	}

	return (count);
}

/**
 * print_integer - Function that prints integer
 *
 * Return: Returns 
 */

int print_integer(va_list args)
{
	return (print_decimal(args));
}


