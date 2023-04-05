#include "lists.h"

/**
 * free_listint - function frees list
 *@head: pointer to head of list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *avail;

	while (head != NULL)
	{
		avail = head;
		head = head->next;
		free(avail);
	}
}
