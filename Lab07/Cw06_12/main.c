#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Wpisz dwie liczby naturalne: ");
    scanf("%d %d", &a, &b);
    while (a != b){
        if (a > b){
            a = a - b;
        } else {
            b = b - a;
        }
    }
    printf("Najwiekszy wspolny dzielnik to: %d", a);

    return 0;
}
