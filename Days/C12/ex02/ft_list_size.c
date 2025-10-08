#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int len = 0;

    while (begin_list)
    {
        len++;
        begin_list = begin_list->next;
    }
    return (len);
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

    int result = ft_list_size(head);
    printf("%d", result);

    free(first);
    free(secand);
    free(third);
    free(head);
}