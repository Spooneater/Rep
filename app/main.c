#include <stdio.h>
#include "root.h"
#include "myfunc.h"
#include <stdlib.h>
int main()
{
    printf("Hello World!\n");
    double *temp = sqroot(3,-19,6);
    printf("%f, %f, %f",temp[0],temp[1],temp[2]);
    free(temp);
}
