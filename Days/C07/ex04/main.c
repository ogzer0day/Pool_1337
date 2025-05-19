#include <stdio.h>
#include "ft_convert_base2.c"

int main()
{
    char *nbr = " -110";
    char *base_from = "01";
    char *base_to = "0123456789";

    char *result = ft_convert_base2(nbr, base_from, base_to);

    printf("%s", result);

    free(result);
}