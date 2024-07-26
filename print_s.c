#include "main.h"
/**
 * printf_string - print a string
 * @val: argument
 * @return: thr lenght of the string
 * */
int printf_string(va_list val)
	char *str;
	int i;
	int lenght;

	str = va_arg(val, char *);
	if (str == NULL)
{
	str = "(null)";
	lenght = _strlen(str);
	for (i = 0; i < lenght; i++)
		_putchar(str[i]);
	return (lennght);
}
else
{
	lenght = _strlen(str);
	for (i =0; i<lenght; i++)
		_putchar(str[i]);
	return (lenght);
}
