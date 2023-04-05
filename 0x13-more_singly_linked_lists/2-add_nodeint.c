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
	
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->next = *head;
	}
	new_node->n = n;
	*head = newnode;

	return (*head);
}
