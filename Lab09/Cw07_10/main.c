#include <stdio.h>
#include <stdlib.h>
unsigned calculateFibonacciRecursively(unsigned a){
    if (a==0){
        return 0;
    } else if (a == 1 || a== 2){
        return 1;
    } else {
        return calculateFibonacciRecursively(a-1) +calculateFibonacciRecursively(a-2);
            // ci¹g zaczyna siê od 1, 1 a nie od 0,1 ale pomimo tego zadanie raczej wykonane poprawnie
    }
}


int main(){
    printf("%u\n", calculateFibonacciRecursively(0));
    printf("%u\n", calculateFibonacciRecursively(1));
    printf("%u\n", calculateFibonacciRecursively(2));
    printf("%u\n", calculateFibonacciRecursively(5));
    printf("%u\n", calculateFibonacciRecursively(9));
}
