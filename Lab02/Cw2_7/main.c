#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Napisz liczby do sprawdzenia: ");
    scanf("%d %d", &a, &b);
    int wynik = a / b;
    printf("%d", wynik);
}

