#include <stdlib.h>
#include <stdio.h>

int ft_len_blocks(char *str)
{
   int len = 0, i = 0, space = 0;
   
   if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
   {
     space = 1;
     i++;
   }
     
   while (str[i]) 
   {
      if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && (space != 1)) 
      {
        space = 1;
        len++;
      }
      if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
         space = 0;
         
      i++; 
   }
   return len; 
}

int ft_len_words(char *str)
{
     int len = 0, i = 0, space = 0;
   
   while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
   {
     space++;
     i++;
   }
     
   while (str[i]) 
   {
      if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')) 
         return len + space;
        
      if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
      {
         len++;
        // space = 0;
      }  
      i++; 
   }
   return len + space; 
}

char **ft_split(char *str)
{
    int i = 0; 
    int blocks_count = ft_len_blocks(str); 
    //int len_words = ft_len_words(str);
    char **buff = malloc((blocks_count + 1) * sizeof(char *)); 
    
    if (!buff) return NULL; 

    while (i < blocks_count)
    {
        int len_words = ft_len_words(str);
        buff[i] = calloc((len_words + 1), sizeof(char));
        str += len_words;
        if (!buff[i]) return NULL;
        i++;
    }
    buff[i] = NULL; 

    i = 0; 
    int j = 0;

    while (*str) 
    {
       while ((*str != ' ' && *str != '\t' && *str != '\n')  && *str)
       {
          buff[i][j++] = *str++; 
       }
           buff[i][j] = '\0'; 
           i++;
           j = 0; 

       str++; 
    }
    
    return buff;
}

int main()
{
    char *str =  "   Hello   World    ";
    char **result = ft_split(str); 

    int j= 0;
    for (int i = 0; result[i] != NULL; i++) {
      // if ((result[i][j] >= 'a' && result[i][j] <= 'z') || (result[i][j] >= 'A' && result[i][j] <= 'Z'))
       //{
        printf("%s\n", result[i]); 
        free(result[i]);
    //}
    }
    printf("%s",  NULL); 
    
    free(result); 
}