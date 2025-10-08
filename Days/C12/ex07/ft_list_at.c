#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
    unsigned int index;
    t_list *temp;

    if (!begin_list)
        return NULL;
    index = 0;
    temp = begin_list;
    while (temp)
    {
        if (index == nbr)
            return (temp);

        index++;
        temp = temp->next;
    }
    return (NULL);
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

	t_list *result = ft_list_at(head, 5);

    if (!result)
        printf("error\n");
    else
        printf("%d\n", *(int *)result->data);
}