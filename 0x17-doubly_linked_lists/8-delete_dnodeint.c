#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;

    if (head == NULL || *head == NULL)
        return -1;

    current = *head;

    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    {
        unsigned int i;

        for (i = 0; i < index; i++)
        {
            if (current == NULL)
                return -1;
            current = current->next;
        }
    }

    if (current->prev != NULL)
        current->prev->next = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return 1;
}

