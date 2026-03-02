#include <stdio.h>

int main() {
    char litera1, litera2;

    printf("Podaj pierwsza litere: ");
    scanf(" %c", &litera1);

    printf("Podaj druga litere: ");
    scanf(" %c", &litera2);

    printf("Odwrotna kolejnosc to: %c, %c\n", litera2, litera1);

    return 0;
}
