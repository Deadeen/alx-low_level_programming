#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @i: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *i)
{
	size_t numb = 0;

	while (i)
	{
		printf("%d\n", i->n);
		numb++;
		i = i->next;
	}

	return (numb);
}
