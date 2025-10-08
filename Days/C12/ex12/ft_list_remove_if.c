#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    if (!*begin_list || !cmp || !free_fct)
        return ;
    t_list *temp;
    t_list *prev;

    temp = *begin_list;
    prev = NULL;
    while (temp)
    {
        t_list *stor_node = temp->next;
        if (cmp(temp->data, data_ref) == 0)
        {
            if (prev)
                prev->next = temp->next;
            else
                prev = temp;
            free_fct(temp->data);
            free(temp);
        }
        else 
        {
            prev = temp;
            temp = stor_node;
        }
    }
}

void free_fct(void *data)
{
    free(data);
}

int cmp(int *nbr1, void *nbr2)
{
    int *ptr = (int *)nbr2;

    return (*nbr1 - *ptr);
}

void print_node(t_list *node)
{
    while (node)
    {
        printf("%d\n", *(int *)node->data);
        node = node ->next;
    }
}

int main()
{
    t_list *head, *first, *secand, *third;

	head = (t_list *)malloc(sizeof(t_list));
	first = (t_list *)malloc(sizeof(t_list));
	secand = (t_list *)malloc(sizeof(t_list));
    third = (t_list *)malloc(sizeof(t_list));

	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));
    int *d = malloc(sizeof(int));

	*a = 5;
	*b = 30;
	*c = 30;
    *d = 30;

	head->data = a;
	head->next = first;

	first->data = b;
	first->next = secand;

	secand->data = c;
	secand->next = third;

    third->data = d;
	third->next = NULL;

    int nbr = 30;

    ft_list_remove_if(&head, &nbr, cmp, free_fct);

    print_node(head);
}