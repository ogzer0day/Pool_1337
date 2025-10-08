#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
    if (!begin_list)
        return (NULL);

    while (begin_list->next)
        begin_list = begin_list->next;

    return (begin_list);
}

int main()
{
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;

    t_list *head = (t_list *)malloc(sizeof(t_list));
    t_list *first = (t_list *)malloc(sizeof(t_list));
    t_list *secand = (t_list *)malloc(sizeof(t_list));
    t_list *third = (t_list *)malloc(sizeof(t_list));

    head->data = &a;
    head->next = first;

    first->data = &b;
    first->next = secand;

    secand->data = &c;
    secand->next = third;

    third->data = &d;
    third->next = NULL;

    t_list *result = ft_list_last(head);

    printf("%d", *(int *)result->data);

    free(first);
    free(secand);
    free(third);
    free(head);
}
