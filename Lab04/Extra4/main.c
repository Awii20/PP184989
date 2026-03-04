#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Napisz wyniki z matematyki: ");
    scanf("%d", &a);
    printf("Napisz wynik z fizyki: ");
    scanf("%d", &b);

    int wynik = a+b;
    if (a < 15  || b < 15){
        printf("Ndst");
        } else {
        if (wynik < 30){
            printf("Ndst");
        } else if (wynik <= 49){
            printf("Dst");
        } else if (wynik <= 69){
            printf("Db");
        } else if (wynik <=90){
            printf("Bdb");
        } else {
            printf("Cel");
        }
    }


}
