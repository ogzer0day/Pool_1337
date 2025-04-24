//#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return(len);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
  int i = ft_strlen(dest);
  int j = 0;
   while (j <= size || src[j] != '\0')
   {
    dest[i] = src[j];
     i++;
     j++;
   }
   dest[i++] = '\0';
   return (i-1);
}

//int main() {
  //  char dest[20] = "Hello"; 
    //char src[] = ", World"; 
    //unsigned int size = 0;
    //int i = 0;  
    //while (dest[i] != '\0')
   // {
   //   size++;
   //   i++;
   // }
     
    //unsigned int result = ft_strlcat(dest, src, size); 
    //printf("Resulting string: %s\n", dest); 
    //printf("Total length: %u\n", result); 
    //return 0; 
//}