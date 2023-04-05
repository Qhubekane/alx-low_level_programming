#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end of a linked list
 *@head: pointer to the head of list
 *@n: value to be used as constant
 *Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *last = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (last == NULL)
		*head = newnode;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = newnode;
	}

	return (*head);
}
