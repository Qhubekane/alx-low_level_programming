#include "lists.h"

/**
*free_listint2 - frees a list
*@head: pointer to the head of the list
*Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *avail, *temp;

	if (head != NULL)
	{
		avail = *head;

		while ((temp = avail) != NULL)
		{
			avail = avail->next;
			free(temp);
		}

		*head = NULL;
	}
}
