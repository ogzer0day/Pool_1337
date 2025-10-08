/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:10:54 by wcorrea-          #+#    #+#             */
/*   Updated: 2025/09/20 06:35:06 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int        ft_intcmp(int a, int b)
{
    return (a - b);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

    i = 0;
    while (i < length - 1)
    {
        if ((*f)(tab[i], tab[i + 1]) > 0)
            return (0);
        i++;
    }
	return (1);
}
/* 
int        main(void)
{
    int	tab1[3] = {1, 3, 2};
    int	tab2[3] = {1, 2, 3};
    int            length = 3;

    printf("Is 'tab1' in order? %d\n", ft_is_sort(tab1, length, &ft_intcmp));
    printf("Is 'tab2' in order? %d\n", ft_is_sort(tab2, length, &ft_intcmp));
} */
