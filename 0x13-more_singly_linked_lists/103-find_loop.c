#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *booring = head;
	listint_t *fire = head;

	if (!head)
		return (NULL);

	while (booring && fire && fire->next)
	{
		fire = fire->next->next;
		booring = booring->next;
		if (fire == booring)
		{
			booring = head;
			while (booring != fire)
			{
				booring = booring->next;
				fire = fire->next;
			}
			return (fire);
		}
	}

	return (NULL);
}
