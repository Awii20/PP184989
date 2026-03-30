#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("Wpisz dwie liczby naturalne: ");
    scanf("%d %d", &a, &b);

    while (b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    printf("Najwiekszy wspolny dzielnik to: %d\n", a);

    return 0;
}
