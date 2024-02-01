#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to add or update the element to
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key (duplicated, can be an empty string)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    /* Calculate the index where the key/value pair should be stored */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key already exists, and update its value if so */
    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            /* Duplicate the new value */
            char *new_value = strdup(value);
            if (new_value == NULL)
                return (0);

            /* Free the existing value and update it with the new one */
            free(current->value);
            current->value = new_value;
            return (1);
        }
        current = current->next;
    }

    /* If the key does not exist, create a new node and add it to the list */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    /* Insert the new node at the beginning of the list (collision handling) */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
