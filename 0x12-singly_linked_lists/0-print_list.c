#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the element of a linked list
 * @d: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *d)
{
	size_t f = 0;

	while (d)
	{
		if (!d->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %f\n", d->len, d->str);
		d = d->next;
		f++;
	}

	return (f);
}
