#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
    if (!begin_list || !f || !cmp)
        return ;
    t_list *temp;

    temp = begin_list;
    while (temp)
    {
        if (cmp(temp->data, data_ref) == 0)
            f(temp->data);
        temp = temp->next; 
    }
}

void f(void *data)
{
    *(int *)data *= 2;
    printf("%d\n", *(int *)data);
}

int cmp(int *nbr1, void *nbr2)
{
    int *ptr = (int *)nbr2;

    return (*nbr1 - *ptr);
}

int main()
{
    t_list *head, *first, *secand;

	head = (t_list *)malloc(sizeof(t_list));
	first = (t_list *)malloc(sizeof(t_list));
	secand = (t_list *)malloc(sizeof(t_list));

	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));

	*a = 30;
	*b = 20;
	*c = 30;

	head->data = a;
	head->next = first;

	first->data = b;
	first->next = secand;

	secand->data = c;
	secand->next = NULL;

    int nbr = 30;

	ft_list_foreach_if(head, f, &nbr, cmp);

	if (!head)
        printf("error\n");
}