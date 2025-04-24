//#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int result;
    while (*s1 != '\0' && *s2 != '\0')
    {
      result = *s1 - *s2;  
      s1++;
      s2++;
    }
    return(result);
}

//int main()
//{
  //  char s1[] = "hello";
    //char s2[] = "world";

//    if (ft_strcmp(s1, s2) > 0)
  //      printf("%d", 1);
    //else if (ft_strcmp(s1, s2) < 0)
      //  printf("%d", -1);
    //else 
      //  printf("%d", 0);
//}