#include <stdio.h>

int main() {
    int rok;

    printf("Podaj swoj rok urodzenia: ");
    scanf("%d", &rok);

    printf("Rok wczesniej byl: %d\n", rok - 1);

    return 0;
}
