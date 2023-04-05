#include "lists.h"

/*
 * *add_nodeint - inserts node at index zero
 * @newnode : points to the head
 * @n : valu added to node
 * Return : the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	new_node = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;

	newnode->n = n;
	*head = newnode;

	return (*head);
}
