#include <stdio.h>
#include "source.c"

int main(void)
{
    char str[10];
    /* Feel free to modify this code to test with different inputs */
    scanf("%s",str);
    printf("Length of vector (1,2,3): %f\n", vectorlength(1,2,3));
    printf("Length of vector (1,1,1): %f\n", vectorlength(1,1,1));
    printf("Length of vector (1,0,0): %f\n", vectorlength(1,0,0));    
    printf("Length of vector (0.3, 0.3, 0.1): %f\n",
	   vectorlength(0.3, 0.3, 0.1));    
}   
