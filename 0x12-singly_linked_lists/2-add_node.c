#include <stdlib.h>
#include <string.h>
#include "my_lists.h"

/**
 * my_add_node - adds a new node at the beginning of a linked list
 * @my_head: double pointer to the my_list_t list
 * @my_str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
*/
my_list_t *my_add_node(my_list_t **my_head, const char *my_str)
{
    my_list_t *my_new;
    unsigned int my_len = 0;

    while (my_str[my_len])
        my_len++;

    my_new = malloc(sizeof(my_list_t));
    if (!my_new)
        return (NULL);

    my_new->my_str = strdup(my_str);
    my_new->my_len = my_len;
    my_new->my_next = (*my_head);
    (*my_head) = my_new;

    return (*my_head);
}
