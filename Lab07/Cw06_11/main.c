#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &a);
    int suma = 0;
    while (a>0){
        int cyfra = a%10;
        printf("%d", cyfra);
        suma += cyfra;
        a = a/10;
    }
    printf("\n%d", suma);
    return 0;
}
