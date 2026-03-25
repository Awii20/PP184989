#include <stdio.h>
#include <stdlib.h>

float calculateSquareRootFloor(float x){
    if (x >= 0)
        return flor(sqrt(x));
    return "Podana liczba jest ujemna";
}


int main()
{
    printf("%f\n", calculateSquareRootFloor(4));
    printf("%f\n", calculateSquareRootFloor(16));
    printf("%f\n", calculateSquareRootFloor(16,535));
    printf("%f\n", calculateSquareRootFloor(74,55));
}
