#include "lists.h"

/*
 * Task: 6. Pop
 * Creator: Jared Naicker
 */

/**
  * pop_listint - ...
  * @head: ...
  *
  * Return: ...
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
