#include "lists.h"
/**
 * listint_len - function to list number of elements
 * @h: a pointer to listint_t
 *
 * Return: returns number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
