#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: A pointer to the head node of the list.
 *
 * Return: The data of the head node that was deleted,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
/* Declare a variable to hold value of the head node */
int value;
/* Declare a temporary pointer */
listint_t *temp;
/* Check if the list is empty */
if (head == NULL || *head == NULL)
return (0);
/* Save the address of head node to free */
temp = *head;
/* Save the value of head node to return */
value = temp->n;
/* Move head to next node */
*head = temp->next;
/* Free head node */
free(temp);
return (value);
}
