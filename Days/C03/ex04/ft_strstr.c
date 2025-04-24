#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;

    if (to_find[j] == '\0')
        return(str);
    while (str[i])
    {
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
            j++;
        if (to_find[j] == '\0')
            return(str + i);
        i++;
        j = 0;
    }
    return(0);
}


int main()
{
    char str[40] = "moahmed is the best person in the world";
    char to_find[5] = "best";

    char *result = ft_strstr(str, to_find);

    if (result) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found\n");
    }
    
}