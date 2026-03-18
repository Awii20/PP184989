#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a;
    printf("Wpisz liczbe: ");
    scanf("%f", &a);
    float wynik = floor(sqrt(a));
    printf("%f", wynik);
    return 0;
}
