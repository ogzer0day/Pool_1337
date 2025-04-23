// #include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest++ = '\0';
 return (dest);
}

//int main(){
    //char src[6] = "hello";
    //char dest[6];

    //printf("%s",  ft_strcpy(dest, src));

//}