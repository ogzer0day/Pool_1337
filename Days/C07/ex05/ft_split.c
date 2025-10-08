#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_len_word(char *str, char *charset)
{
    int len = 0;
    while (*str)
    {
        int i = 0;
        
        while (charset[i])
        {
            if (*str == charset[i])
            {
                return len; 
            }
            i++;
        }
        len++; 
        str++;  
    }
    return len;
}

int ft_len_blocks(char *str, char *charset)
{
    int len = 0;
    while (*str)
    {
        int i = 0;

        while (charset[i])
        {
            if (*str == charset[i])
            {
                len++;
                break; 
            }
            i++;
        }
        str++; 
    }
    return len; 
}

char **ft_split(char *str , char *charset)
{
    int len_blocks = ft_len_blocks(str, charset);
    char **buff1 = malloc((len_blocks + 1) * sizeof(char *)); 
    if (!buff1) return NULL;
    int i = 0;
    
    while (i < len_blocks)
    {
        int len_word = ft_len_word(str, charset);
        buff1[i] = malloc((len_word + 1) * sizeof(char));
        if (!buff1[i]) return NULL;
        str += len_word; 
        int j = 0;
        
        while (*str && !strchr(charset, *str)) 
        {
            buff1[i][j++] = *str; 
            str++;
        }
        buff1[i][j] = '\0'; 
        
        
        if (*str) str++; 
    }
    
    buff1[i] = NULL; 
    return buff1;
}

int main()
{
    char *str = "Hello,world;this|is:a)test";
    char *charset = ",;|:)";

    char **result = ft_split(str , charset);
    if (!result) return 1;

    int i = 0;
    while (result[i])
    {
        printf("%s, ", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return 0;
}