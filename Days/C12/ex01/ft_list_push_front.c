// #include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));

    if (!new_node)
        return;

    new_node->data = data;
    new_node->next = *begin_list;

    if (!begin_list)
    {
        *begin_list = new_node;
        return;
    }

    *begin_list = new_node;
}

void print_nodes(t_list *nodes)
{
    while (nodes)
    {
        printf("%d", *(int *)nodes->data);
        nodes = nodes->next;
    }
}

int main()
{
    int a = 10;
    t_list *head = (t_list *)malloc(sizeof(t_list));
    
    head = NULL;

    ft_list_push_front(&head, &a);

    int b = 5;

    ft_list_push_front(&head, &b);

    print_nodes(head);
}