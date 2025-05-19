#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *buff = malloc((size*size*2)*sizeof(char));
    char *result = buff;
    
    int i = 0;
    int j = 0;
    
    if (size == 0)
      return "";
    
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            *buff++ = strs[i][j++];
        }
      i++;
    if (i < size && *sep != '\0')
      *buff++ = *sep;
    else 
      continue;
    }
    *buff++ = '\0';
    return result;
}

int main() {
    char *strings[] = {"hello", "world", "!"}; 
    char *sep = " "; 
    char *result = ft_strjoin(3, strings, sep); 
    
    if (*result != '\0')
    {
      printf("%s\n", result); 
      free(result); 
    }
    else 
    {
      printf("%s\n", result); 
    }
}