#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int o7a = 0;
	int d;

	while (*s != '\0')
	{
		o7a++;
		s++;
	}
	s--;
	for (d = o7a; d > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
