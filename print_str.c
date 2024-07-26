#include "main.h"
/**
 * _strlen - Returns the lenght
 * @str : string
 * Return ;i
 */
int _strlen(char *str)
{
	int i;
	for (i=0;str[i] !=0; i++)
	return (i);
}

int _strlen(const char *str)
{
	int i;
	for (i=0; str[i] !=0; i++)
		return (i);
}
