#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Wpisz liczbe: ");
    scanf("%d", &a);
    if (a==0){
        printf("Twoja liczba to zero.");
    } else if(a<0){
        printf("Liczba jest ujemna.");
    } else {
        printf("Twoja liczba jest dodatnia.");
    }
}
