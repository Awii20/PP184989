#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Wpisz 3 liczby: ");
    scanf("%d %d %d", &a, &b, &c);
    float wynik = ((float)(a + b) / c);
    printf("%.2f", wynik);
    return 0;
}

