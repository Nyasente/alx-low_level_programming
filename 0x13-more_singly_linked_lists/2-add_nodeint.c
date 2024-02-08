#include "lists.h"
/**
 * *add_nodeint - function to add node in a list
 * @n: is integer to be added to new node
 * @head: pointer to listint_t
 *
 * Return: returns the new element added or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
