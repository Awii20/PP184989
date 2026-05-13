#include <stdio.h>
#include <stdlib.h>
int isEqual(int a, int b) {
    if (a == b) {
        return 1;
    }
    return 0;
}

int findElement(int tab[], int n, int val, int(*isEqual)(int, int)){
    for(int i=0;i<n;i++){
        if (isEqual(tab[i], val)){
            return i;
        }
    }
    return -1;
}


int main(){
    int tab[] = {12, 4, 6, 33, 67};
    int wynik = findElement(tab, 5, 67, isEqual);
    printf("%d", wynik);
    return 0;
 }
