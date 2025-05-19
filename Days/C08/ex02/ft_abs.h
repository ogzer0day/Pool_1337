#ifndef ABS_H
#define ABS_H

#include <stdio.h>

#define ABS(Value) if (Value > 0)\
                     printf("%d", Value);\
                   else \
                    printf("%d", Value * -1);

#endif