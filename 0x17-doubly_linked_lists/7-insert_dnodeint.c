#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be inserted.
 * @n: Data to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *current = *h;
unsigned int i = 0;

if (idx == 0)
return (add_dnodeint(h, n));

while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}

if (current == NULL && i == idx - 1)
return (add_dnodeint_end(h, n));

if (current != NULL)
{
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = current->next;
new_node->prev = current;

if (current->next != NULL)
current->next->prev = new_node;

current->next = new_node;

return (new_node);
}

return (NULL);
}
