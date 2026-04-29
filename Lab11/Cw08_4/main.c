#include <stdio.h>
#include <stdlib.h>

double findMax(const double *num1, const double *num2){
    if (*num1 > *num2){
        return *num1;
    }
     return *num2;
}


int main()
{
    double a=7;
    double b= 64;
    printf("%f\n", findMax(&a, &b));
    return 0;
}
