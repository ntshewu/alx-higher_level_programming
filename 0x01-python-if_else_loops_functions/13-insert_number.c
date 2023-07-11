/*
 * File: 13-insert_number.c
 * Auth: N HEWU
 */
i#include "lists.h"

/**
 * insert_node - Inserts a nr into a singly-linked list
 * @head: A pointer to list's head
 * @number: nr to inster
 *
 * Return: If the func fails - NULL.
 * Otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
