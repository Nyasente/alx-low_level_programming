#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function to return the number of element
 * @h: pointer to list_t
 *
 * Return: returns the number of elements inthe linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
