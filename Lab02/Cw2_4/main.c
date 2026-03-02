#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Napisz 3 liczby: ");
    scanf("%d %d %d", &a, &b, &c);
    a = abs(a), b = abs(b), c = abs(c);
    double iloczyn = (a * b * c);
    float wynik = cbrt(iloczyn);
    printf("%f", wynik);
}
