#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a skip list.
 *
 * @list: Pointer to the head of the skip list.
 * @value: Value to search for.
 *
 * Return: Pointer to the node containing the value, or NULL if not found
 *         or if the list is NULL.
 *
 * Description: Prints the checked values and their indices in the list.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *next;

    if (list == NULL)
        return NULL;

    current = list;

    while (current)
    {
        next = current->express;
        printf("Value checked at index [%d] = [%d]\n", (int)next->index, next->n);

        if (next->n >= value || next->express == NULL)
        {
            printf("Value found between indexes [%d] and [%d]\n",
                   (int)current->index, (int)next->index);

            while (current)
            {
                printf("Value checked at index [%d] = [%d]\n",
                       (int)current->index, current->n);

                if (current->n == value)
                    return current;

                current = current->next;
            }

            break;
        }

        current = next;
    }

    return NULL;
}
