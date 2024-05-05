#include "sort.h"
#include <stdio.h>


/**
 * insertion_sort_list - sorts a doubly linked list
 * in ascending order using the insertion sort algorithm
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *tmp;
listint_t *head = *list;
if (head == NULL || head->next == NULL)
return;
current = head->next;
while (current != NULL)
{
if (head->n > current->n)
{
tmp = current->next;
current->next = head;
current->prev = head->prev;
head->prev = current;
if (current->prev != NULL)
current->prev->next = current;
else
*list = current;
head->next = tmp;
if (tmp != NULL)
tmp->prev = head;
}
else
current = current->next;
}
}
