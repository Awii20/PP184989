#include <stdio.h>
#include <stdlib.h>

int podwojenie(int x){
    return x*2;
}

int applyFunction(int (*func)(int), int start, int end){
    for(int i = start; i <= end; i++){
        printf("%d\n", func(i));
    }
}

int main(){
    applyFunction(podwojenie, 3, 6);
    applyFunction(podwojenie, -2, 3);
}
