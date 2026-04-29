#include <stdio.h>
#include <stdlib.h>

//B11
int divisibleSum(int a, int b, int d){
    int suma = 0;
    for(int i=a; i<=b; i++){
        if(i%d == 0){
            suma += i;
        }
    }
    return suma;
}

int main(){
    printf("%d\n", divisibleSum(2, 10, 4));
    printf("%d\n", divisibleSum(1, 17, 3));
    printf("%d\n", divisibleSum(1, 15, 5));
}
