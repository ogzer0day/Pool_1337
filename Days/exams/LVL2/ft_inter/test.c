#include <unistd.h>
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int len = 0;

    while (str[len])
      len++;
    return len;
}

char *doubles(char *str) {
    int i = 0, j, k = 0;
    char *clean_str = malloc((ft_strlen(str)+1)*sizeof(char));
    char *start =  clean_str;
    while (str[i]) {
        j = 0;
        int found = 0;


        while (j < i) { 
            if (str[i] == str[j]) { 
                found = 1; 
                break; 
            }
            j++;
        }

        
        if (!found) 
            *clean_str++ = str[i];

        i++; 
    }
    
    *clean_str = '\0';
    return start; 
}

