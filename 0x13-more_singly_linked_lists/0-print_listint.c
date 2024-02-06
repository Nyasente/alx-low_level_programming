#include "lists.h"
/**
 * print_listint - function for linked list
 * @h: elements in the list
 *
 * Return: returns all number of nodes in linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
