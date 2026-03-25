#include <stdio.h>
#include <stdlib.h>
int sumSquares(int x){
    int suma = 0;
    for(int i=0; i <=x; i++){
        suma = suma + (i*i);
    }
    return suma;
}



int main(){
    printf("%d\n", sumSquares(4));
    printf("%d\n", sumSquares(5));
    printf("%d\n", sumSquares(6));
    printf("%d\n", sumSquares(7));

}
