#include <stdio.h>
#include <stdlib.h>
int calculateArithmeticSequenceRecursively(int n, int d){
    if(n==1){
        return 1;
    } else {
        return calculateArithmeticSequenceRecursively(n-1, d)+d;
    }
}


int main(){
    printf("%d\n", calculateArithmeticSequenceRecursively(3, 5));
    printf("%d\n", calculateArithmeticSequenceRecursively(6, 3));
    printf("%d\n", calculateArithmeticSequenceRecursively(4, -1));
    printf("%d\n", calculateArithmeticSequenceRecursively(7, 10));
}
