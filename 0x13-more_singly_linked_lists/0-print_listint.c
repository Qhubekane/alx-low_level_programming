#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to a list
 * Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
