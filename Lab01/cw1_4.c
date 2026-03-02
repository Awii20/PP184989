#include <stdio.h>

int main() {
    int a, b, c;

    printf("Podaj trzy liczby: ");
    scanf("%d %d %d", &a, &b, &c);

    float srednia = (a + b + c) / 3.0;

    printf("Srednia to: %f\n", srednia);

    return 0;
}
