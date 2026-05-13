#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculateSquareRootFloor(float x){
    if (x >= 0)
        return floor(sqrt(x));
    printf("Podana liczba jest ujemna ");
    return -1;
}


int main()
{
    printf("%f\n", calculateSquareRootFloor(4));
    printf("%f\n", calculateSquareRootFloor(16));
    printf("%f\n", calculateSquareRootFloor(-16.535));
    printf("%f\n", calculateSquareRootFloor(74.55));
}
