#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *temp;

	if (!begin_list || !f)
        return ;
	temp = begin_list;
	while (temp)
	{
		f(temp->data);
		temp = temp->next;
	}
}

void f(void *data)
{
    *(int *)data *= 2;
}

void print_nodes(t_list *node)
{
    while (node)
    {
        printf("%d\n", *(int *)node->data);
        node = node->next;
    }
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
	*c = 30;

	head->data = a;
	head->next = first;

	first->data = b;
	first->next = secand;

	secand->data = c;
	secand->next = NULL;

	ft_list_foreach(head, f);

	if (!head)
        printf("error\n");
    else
        print_nodes(head);
}