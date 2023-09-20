#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value well
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dea, char *rom)
{
	int a;
	int b;

	i = 0;
	while (dea[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (rom[b] != '\0')
	{
		dea[a] = rom[b];
		a++;
		b++;
	}

	dea[a] = '\0';
	return (dea);
}
