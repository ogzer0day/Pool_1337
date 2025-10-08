#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
    t_list *prev;
    t_list *curr;
    t_list *nxt;

    if (!*begin_list)
        return ;
    prev = NULL;
    curr = *begin_list;
    nxt = curr;
    while (nxt)
    {
        nxt = nxt->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    *begin_list = prev;
}

void print_nodes(t_list *node)
{
    while (node)
    {
        printf("%d\n", *(int *)node->data);
        node = node->next;
    }
}
int	main()
{
	t_list *head, *first, *secand;

	head = (t_list *)malloc(sizeof(t_list));
	first = (t_list *)malloc(sizeof(t_list));
	secand = (t_list *)malloc(sizeof(t_list));

	int a = 5;
	int b = 10;
	int c = 15;

	head->data = &a;
	head->next = first;

	first->data = &b;
	first->next = secand;

	secand->data = &c;
	secand->next = NULL;

	ft_list_reverse(&head);

    if (!head)
        printf("error\n");
    else
        print_nodes(head);
}