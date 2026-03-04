#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Wpisz dwie liczby: ");
    scanf("%d %d", &a, &b);
    if (a<b){
        printf("Wieksza jest %d", b);
    } else {
        printf("Wieksza jest %d", a);
    }
}
