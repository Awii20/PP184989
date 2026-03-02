#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Napisz dwie liczby: ");
    scanf("%d %d", &a, &b);
    int wynik = ((a*a)-(b*b));
    printf("%d", wynik);
}
