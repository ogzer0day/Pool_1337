//#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i = 0;
    while ((i < size) && (*src != '\0'))
    {
        *dest++ = *src++;
        i++;
    }
    *dest++ = '\0';
    return (i);
}

//int main(){
   // char src[] = "";
   // char dest[20];

   // int size = sizeof(src) / sizeof(src[0]);
   // ft_strlcpy(dest, src, size);
   // printf("%d", size);

//}