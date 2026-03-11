#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Wpisz liczbe: ");
    scanf("%d", &a);
    int suma = 0;
    int i = 1;
    while (i<=a){
        suma += i;
        i++;
    }
    printf("Suma to %d%", suma);
    return 0;
}
