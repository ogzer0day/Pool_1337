#include <stdlib.h>
#include <stdio.h>

int len(int num)
{
    int len = 0;
    while (num != 0)
    {
        len++;
        num /= 10;
    }
    return len;
}

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
      len++;
    return len;
}




char    *moment(unsigned int duration)
{
    char *buff = malloc((len(duration)+8)*sizeof(char));
    char *first = buff;
    char second[13] = "seconds ago.";
    char minute[13] = "minutes ago.";
    char hour[13] = "hours ago.";
    char day[9] = "days ago.";
    char month[12] = "months ago.";
    int hours = 60, days = 24, months = 24*30, i = 0, div = 0;

    if (duration >= 0 && duration < 60)
    { 
        if (duration > 9)
        {
            char *num = put_nbr(duration);
            while (*num)
               *buff++ = *num++;
        }
        else 
            *buff++ = duration + '0';
        *buff++ = ' ';
        while (second[i])
          *buff++ = second[i++];
    }
    else 
    {
       div = duration / 60;
       if (div < 60)
       {
        if (duration > 9)
        {
            char *num = put_nbr(div);
            while (*num)
               *buff++ = *num++;
        }
        else 
            *buff++ = duration + '0';
        *buff++ = ' ';
        while (minute[i])
          *buff++ = minute[i++];
       }
       //else if (div >= 60 )
    }
    *buff = '\0';
     return first;  
}

int main()
{
    unsigned int duration = 120;
    char *result = moment(duration);

    printf("%s", result);
    free(result);
}