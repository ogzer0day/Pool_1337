#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

char *ft_strdup(char *src) 
{
    char *buff = malloc((ft_strlen(src) + 1) * sizeof(char)); 
    char *start = buff;  
    
    if (!*src)
      return NULL;
    
    while (*src)
    {
        *buff++ = *src++;
    }
    *buff = '\0'; 
    return start; 
}

int main()
{
    char original[] = "Hello, World!";
    char *duplicate = ft_strdup(original);

   printf("%s\n", duplicate); 

    free(duplicate);
    return 0;
}
