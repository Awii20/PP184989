#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Napisz trzy liczby: ");
    scanf("%d %d %d", &a ,&b ,&c);
    int wynik = ((a - b) * c);
    printf("%d", wynik);
}
