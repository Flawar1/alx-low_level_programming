#include "lists.h"

/**
 * add_nodeint_end - write a function that adds a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: value to be stored in the new node.
 *
 * Return: address of the newly added node. NUll if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
