#include "lists.h"
#include <stdio.h>

void reverse(listint_t **head);
int lists_compare(listint_t *head, listint_t *center, int len);

/**
 * is_palindrome - checks if singly linked list is a palindrome
 * @head: a pointer to pointer of first list passed
 * Return: 1 if yes, else 0 for no
 */
int is_palindrome(listint_t **head)
{
	int len, n;
	listint_t *temp;
	listint_t *center;

	if (head == NULL || *head == NULL)
		return (1);
	temp = *head;
	center = *head;

	for (len = 0; temp != NULL; len++)
		temp = temp->next;

	len = len/2;

	for (n = 1; n < len; n++)
		center = center->next;
	if (len % 2 != 0 && len != 1)
	{
		center = center->next;
		len = len - 1;
	}
	reverse(&center);
	n = lists_compare(*head, center, len);

	return (n);
}
/**
 * lists_compare - compares two lists
 * @head: pointer to the head node
 * @center: pointer to the center node
 * Return: 1 if the same, else 0
 */
int lists_compare(listint_t *head, listint_t *center, int len)
{
	int i;

	if (head == NULL || center == NULL)
		return (1);

	for (i = 0; i < len; i++)
	{
		if (head->n != center->n)
			return (0);
		head = head->next;
		center = center->next;
	}
	return (1);
}
/**
 * reverse - reverses a list
 * @head: pointer to head node to reverse
 */
void reverse(listint_t **head)
{
	listint_t *current;
	listint_t *pre;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	pre = NULL;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		current->next = pre;
		pre = current;
		current = next;
	}
	*head = pre;
}
