#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    if (!begin_list)
        return ;
    
    t_list *temp = begin_list;
    while (temp)
    {
        t_list *node = temp->next;
        free_fct(temp->data);
        free(temp);
        temp = node;
    }
}

void free_fct(void *data)
{
    free(data);
}
int main()
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

    ft_list_clear(head, free_fct);
}