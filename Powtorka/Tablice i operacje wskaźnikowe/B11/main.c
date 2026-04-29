#include <stdio.h>
#include <stdlib.h>

int sumAbove(int k, int n, int *arr){
    int licznik = 0;
    for(int i=0; i<n; i++){
        if(*(arr + i) > k){
            licznik += *(arr+i);
        }
    }
    return licznik;
}

int main(){
    int tablica1[] = {4, 12, 3, 15, 8, 25};
    int wynik1 = sumAbove(10, 6, tablica1);
    printf("Suma wiekszych od 10: %d\n", wynik1);

    int tablica2[] = {1, 5, 2, 8, 4};
    int wynik2 = sumAbove(4, 5, tablica2);
    printf("Suma wiekszych od 4: %d\n", wynik2);
}

