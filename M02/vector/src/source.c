#include <math.h>
#include <stdio.h>

double vectorlength(double x, double y, double z)
{
    double a = (double) pow(x, 2);
    double b = (double) pow(y, 2);
    double c = (double) pow(z, 2);
    
    double vec = sqrt((double) a + (double) b + (double) c);

    return vec;
}  