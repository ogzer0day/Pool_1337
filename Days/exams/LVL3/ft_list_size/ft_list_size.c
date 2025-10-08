#include "ft_list_size.h"
#include <stdlib.h>
#include <stdio.h>

int ft_list_size(t_list *begin_list) {
    t_list *current = begin_list;
    int count = 0;

    while (current != NULL) {
        count++;
        current = current->next; 
    }
    return count;
}

int main() {
    t_list* begin_list = NULL;
    t_list* second = NULL;
    t_list* third = NULL;

    begin_list = (t_list *)malloc(sizeof(t_list));
    second = (t_list *)malloc(sizeof(t_list));
    third = (t_list *)malloc(sizeof(t_list));

    if (begin_list == NULL || second == NULL || third == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    begin_list->data = (int *)5;    
    begin_list->next = second;      

    second->data = (int *)10; 
    second->next = third;     

    third->data = (int *)15;  
    third->next = NULL;      

    int result = ft_list_size(begin_list);
    printf("%d", result); 

    free(begin_list);
    free(second);
    free(third);
}