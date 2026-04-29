#include <stdio.h>
#include <stdlib.h>

void reverseArr(int n, int *arr){
    for(int i=0; i<(n/2);i++){
        int temp = *(arr + i);
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = temp;
    }
}

void printArray(int n, int *tab) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(tab + i));
    }
    printf("\n");
}

int main(){
    int tab[] = {3,8,-1,5,2};
    printArray(5, tab);
    reverseArr(5, tab);
    printArray(5, tab);

}
