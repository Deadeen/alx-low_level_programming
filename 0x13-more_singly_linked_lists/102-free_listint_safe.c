#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @i: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **i)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!i || !*i)
		return (0);

	while (*i)
	{
		diff = *i - (*i)->next;
		if (diff > 0)
		{
			temp = (*i)->next;
			free(*i);
			*i = temp;
			len++;
		}
		else
		{
			free(*i);
			*i = NULL;
			len++;
			break;
		}
	}

	*i = NULL;

	return (len);
}
