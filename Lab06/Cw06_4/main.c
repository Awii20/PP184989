#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned a;
    printf("Wpisz liczbe: ");
    scanf("%u", &a);
    int i = 1;
    unsigned silnia = 1;
    for (i=1;i <= a;i++){
        silnia = silnia * i;
    }
    printf("%u silnia to: %u", a, silnia);
}
