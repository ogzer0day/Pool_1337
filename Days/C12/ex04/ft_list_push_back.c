#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return;
    t_list *temp = *begin_list;

    new_node->data = data;
    new_node->next = NULL;

    if (!temp)
    {
        *begin_list = new_node;
        return;
    }

    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void print_nodes(t_list *nodes)
{
    while (nodes)
    {
        printf("%d\n", *(int *)nodes->data);
        nodes = nodes->next;
    }
}

int main()
{
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;

    t_list *head = (t_list *)malloc(sizeof(t_list));
    head = NULL;

    ft_list_push_back(&head, &a);
    ft_list_push_back(&head, &b);
    ft_list_push_back(&head, &c);

    ft_list_push_back(&head, &d);

    print_nodes(head);
}