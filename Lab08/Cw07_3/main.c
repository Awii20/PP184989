#include <stdio.h>
#include <stdlib.h>

unsigned calculateFactorial(unsigned x){
    int i=0;
    unsigned iloczyn = 1;
    for(i=0; i+1 <=x; i++){
        iloczyn = iloczyn * (i+1);
    }
    return iloczyn;
}


int main(){
    printf("%u\n", calculateFactorial(4));
    printf("%u\n", calculateFactorial(5));
    printf("%u\n", calculateFactorial(6));
    printf("%u\n", calculateFactorial(7));
}
