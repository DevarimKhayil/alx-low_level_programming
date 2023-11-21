#include "lists.h"
/**
 * listint_lem - prints number of the elements of a listint_t list
 * @h: pointer to a struct
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
	return (0);

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
