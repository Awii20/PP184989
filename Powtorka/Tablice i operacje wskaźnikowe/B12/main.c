#include <stdio.h>
#include <stdlib.h>

int multiplyBelow(int k, int n, int *arr){
    int iloczyn = 1;
    for(int i=0; i<n; i++){
        if(*(arr + i) < k){
            iloczyn = iloczyn * (*(arr + i));
        }
    }
    return iloczyn;
}


int main(){
    int arr[] = {5, 6, 8, 1, 3};
    int wynik = multiplyBelow(6, 5, arr);
    printf("%d\n", wynik);

    int tab[] = {7, 2, 2, 2, 3};
    int iloczyn = multiplyBelow(4, 5, tab);
    printf("%d\n", iloczyn);
}
