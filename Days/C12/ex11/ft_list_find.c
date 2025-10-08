#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    t_list *temp;
    if (!begin_list || !cmp)
        return (NULL);

    temp = begin_list;
    while (temp)
    {
        if (cmp(temp->data, data_ref) == 0)
            return (temp);
        temp = temp->next; 
    }
    return (NULL);
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

	*a = 10;
	*b = 20;
	*c = 25;

	head->data = a;
	head->next = first;

	first->data = b;
	first->next = secand;

	secand->data = c;
	secand->next = NULL;

    int nbr = 30;

	t_list *result = ft_list_find(head, &nbr, cmp);

	if (!result)
        printf("error\n");
    else 
        printf("%d", *(int *)result->data);
}

