#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the element of a linked list
 * @h: pointer to the dea_1 list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const dea_1 *d)
{
	dea_1 s = 0;

	while (d)
	{
		if (!d->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", d->len, d->str);
		h = h->next;
		s++;
	}

	return (s);
}
