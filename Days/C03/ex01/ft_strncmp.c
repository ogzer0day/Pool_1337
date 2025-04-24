//#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
    int result;
    while (i < n)
    {
      result = s1[i] - s2[i];
      i++;
    }
   return (result);
} 

//int main()
//{
    //char s1[] = "hello, world";
    //char s2[] = "world, hello";
    //unsigned int n = 5;
    
    //if (ft_strncmp(s1, s2, n) > 0)
      //  printf("%d", 1);
    //else if (ft_strncmp(s1, s2, n) < 0)
      //  printf("%d", -1);
    //else 
        //printf("%d", 0);
//}