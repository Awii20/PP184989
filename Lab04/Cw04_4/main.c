#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Wpisz liczbe i miejsce: ");
    scanf("%d %d", &a, &b);
    a = a & ~(1 << b);
    printf("Po wyzerowaniu %d bitu liczba to %d", b, a);
    return 0;
}

