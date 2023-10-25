#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @i: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *i)
{
	size_t number = 0;

	while (i)
	{
		number++;
		i = i->next;
	}

	return (number);
}
