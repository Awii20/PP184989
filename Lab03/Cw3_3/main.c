#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Wpisz ocene: ");
    scanf("%d", &a);
    switch (a) {
    case 1:
        printf("Niedostateczny");
        break;
    case 2:
        printf("Dopuszczajacy");
        break;
    case 3:
        printf("Dostateczny");
        break;
    case 4:
        printf("Dobry");
        break;
    case 5:
        printf("Bardzo dobry");
        break;
    default:
        printf("Niepoprawna ocena");
    }
}
