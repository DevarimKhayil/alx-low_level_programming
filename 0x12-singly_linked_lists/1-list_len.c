#include "lists.h"
/**
  *list_len - returns the num of elements in a linkd list_t
  *@h: pointer to head of struct sll
  *Return: num of elements in linked list
  */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
