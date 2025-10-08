#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>

typedef struct s_list
{
    struct s_list *next;
    void *data;
}                       t_list;

void ft_lst_add_back(t_list **begin_list, t_list *new);

#endif