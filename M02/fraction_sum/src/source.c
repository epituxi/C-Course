# include <stdio.h>
# include "source.h"

double fracsum(int x, int y, int a, int b)
{
    float n = (double) x / (double) y;
    float m = (double) a / (double) b;

    float r = n + m;
    
    return r;
}