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


void inter(char *str1, char *str2)
{
   int i = 0, j = 0;
     while (str1[i])
     {
      j=i+1;
         while (str2[j])
         {
             if (str1[i] == str2[j])
             {
                ft_putchar(str1[i]);
                break;
             }
            j++;
         }
       i++;
     }
     ft_putchar('\n');
     free(str1);
}

int main(int ac, char *av[])
{
     if (ac != 3)
     {
         ft_putchar('\n');
         return 0;
     }  

     char *str = doubles(av[1]);
     inter(str, av[2]);
}