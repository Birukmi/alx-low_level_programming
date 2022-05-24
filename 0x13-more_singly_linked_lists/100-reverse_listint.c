#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *second = NULL;

	while (*head)
	{
		second = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = second;
	}
	*head = first;
	return (*head);
}
