#include <stdio.h>
#include <stdlib.h>
int calculateGeometricSequenceRecursively(int n, int d){
    if(n==1){
        return 1;
    } else {
        return calculateGeometricSequenceRecursively(n-1, d)*d;
    }
}


int main(){
    printf("%d\n", calculateGeometricSequenceRecursively(3, 5));
    printf("%d\n", calculateGeometricSequenceRecursively(6, 3));
    printf("%d\n", calculateGeometricSequenceRecursively(4, -1));
    printf("%d\n", calculateGeometricSequenceRecursively(7, 7));
}
