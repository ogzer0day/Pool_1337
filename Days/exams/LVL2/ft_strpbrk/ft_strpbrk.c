#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
     char result[20];
     int i = 0;
     int j = 0;

     while (s1[i])
     {
        if (s1[i] == *s2)
        {
            while (s1[i])
            {
                result[j++] = s1[i++];
            }
        }
        i++;  
     }
     result[j++] = '\0';
     return result;
}

int main()
{
    const char s1[] = "hello world";
    const char s2[] = "w";

    char *result = ft_strpbrk(s1, s2);

    printf("%s", result);
}