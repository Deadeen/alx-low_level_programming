#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int o7a = 0;

	while (*s != '\0')
	{
		o7a++;
		s++;
	}

	return (o7a);
}
