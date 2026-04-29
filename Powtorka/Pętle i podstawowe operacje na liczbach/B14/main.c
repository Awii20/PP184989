#include <stdio.h>
#include <stdlib.h>

int digitSum(int n){
    int suma = 0;
    while(n>0){
        suma += n%10;
        n = n/10;
    }
    return suma;
}


int main(){
    printf("%d\n", digitSum(453));
    printf("%d\n", digitSum(2115));
}
