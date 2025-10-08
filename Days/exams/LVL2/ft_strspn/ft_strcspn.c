#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int count = 0;

   while (*s)
   {
      while (reject[i] != '\0')
      {
         if (*s == reject[i])
         {
            count++;
            break;
         }
        i++;
      }
      s++;
   }
   return (count);
}

int main()
{
    const char s[] = "hello world";
    const char reject[] = "hello";

    int result = ft_strcspn(s, reject);

    printf("%d", result);
}