#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Wpisz liczbe i pozycje do sprawdzenia: ");
    scanf("%d %d", &a, &b);
    if ((a >> b) & 1){
            printf("Pozycja %d jest 1", b);
    }else {
            printf("Pozycja %d jest 0", b);
    }
    return 0;
}
