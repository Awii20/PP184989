#include <stdio.h>
#include <stdlib.h>

int sumNumbers(int n){
    int suma = 0;
    for(int i=1; i <=n; i++){
        suma = suma + i;
    }
    return suma;
}


int main(){
    printf("%d\n", sumNumbers(5));
    printf("%d\n", sumNumbers(25));
    printf("%d\n", sumNumbers(65));
    printf("%d\n", sumNumbers(250));
}
