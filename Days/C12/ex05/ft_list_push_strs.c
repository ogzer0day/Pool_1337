// #include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_lst_add_back(t_list **begin_list, t_list *new)
{
    t_list *temp;

    if (!new)
        return;

    if (!*begin_list)
    {
        *begin_list = new;
        return;
    }

    temp = *begin_list;
    while (temp->next)
        temp = temp->next;
    temp->next = new;
}

int ft_strlen(char *str)
{
    int count;
    
    count = 0;
    while (str[count])
        count++;
    return (count);
}

char *ft_strdup(char *str)
{
    char *buff;
    char *first;

    buff = malloc((ft_strlen(str) + 1) * sizeof(char));
    if (!buff)
        return NULL;
    first = buff;

    while (*str)
        *buff++ = *str++;
    *buff = '\0';
    return (first);
}

t_list *ft_list_push_strs(int size, char **strs)
{
    int index = size - 1;
    t_list *head = 0;

    while (index >= 0)
    {
        t_list *new_node = (t_list *)malloc(sizeof(t_list));
        if (!new_node)
            return (head);
        new_node->data = ft_strdup(strs[index]);
        new_node->next = 0;
        ft_lst_add_back(&head, new_node);
        index--;
    }
    return (head);
}

// void print_nodes(t_list *nodes)
// {
//     while (nodes)
//     {
//         printf("%s\n", (char *)nodes->data);
//         nodes = nodes->next;
//     }
// }

// int  main()
// {
//     char *strs[] = {"hello", "world", "42", NULL};
//     int size = 3;

//     t_list *result = ft_list_push_strs(size, strs);

//     print_nodes(result);
// }