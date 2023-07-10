#include "lists.h"

/**
 * check_cycle - checks that linked list contains cycle
 * @list: list to check
 *
 * Return: 1 if cycl exists, 0 no cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
