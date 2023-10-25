#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a fresh node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the fresh node is added
 * @n: data to insert in the fresh node
 *
 * Return: pointer to the fresh node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *fresh;
	listint_t *tmp1 = *head;

	fresh = malloc(sizeof(listint_t));
	if (!fresh || !head)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (idx == 0)
	{
		fresh->next = *head;
		*head = fresh;
		return (fresh);
	}

	for (i = 0; tmp1 && i < idx; i++)
	{
		if (i == idx - 1)
		{
			fresh->next = tmp1->next;
			tmp1->next = fresh;
			return (fresh);
		}
		else
			tmp1 = tmp1->next;
	}

	return (NULL);
}
