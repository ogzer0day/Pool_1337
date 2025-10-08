//#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    
    while (*src && i < n)
    {
        *dest++ = *src++;
        i++;
    }
    *dest++ = '\0';
    return (dest);
}

//int main()
//{
    //char src[6] = "hello";
    //char dest[6];
    //unsigned int n = 2;
    
    //ft_strncpy(dest, src, n);
    //printf("%s", dest);
    //return 0;
//}