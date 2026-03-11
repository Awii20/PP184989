#include <stdio.h>

int main() {
    int a = 3;
    int b = 7;

    printf("Przed zamiana: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Po zamianie: a = %d, b = %d\n", a, b);

    return 0;
}
