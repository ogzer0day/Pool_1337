#include <stdlib.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
    t_list *elem = (t_list *)malloc(sizeof(t_list));

    if (!elem)
    return (NULL);

    elem->data = data;
    elem->next = NULL;

    return (elem);
}

// int main()
// {
//     int data = 5;

//     t_list *result = ft_create_elem(&data);

//     printf("%d", *(int *)result->data);
// }