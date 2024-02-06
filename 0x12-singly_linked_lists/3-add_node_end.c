#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds anew node at the end of the linked list
 * @head: a double pointer to the linked list
 * @str: string for the new code
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[length])
		length++;
	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
