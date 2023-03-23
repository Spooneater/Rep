#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>
double * sqroot(double a, double b,double c){

    double *p = malloc(sizeof(double) * 3);
    p[0] = 0.0;
    p[1] = 0.0;
    p[2] = 0.0;
    double D = b * b - 4 * a * c;
    if (a == 0.0){
    printf("Not a square function");
	p[0] = -1;
	return p;
    }
    if (D < 0){
	return p;
    }
    if (D == 0.0){
	p[0] = 1;
	p[1] = (-1 * b)/(2 * a);
    return p;
    }
    p[0] = 2;
    p[1] = (-1 * b + sqrt(D)) / ( 2 * a);
    p[2] = (-1 * b - sqrt(D)) / ( 2 * a);

    return p;


}
