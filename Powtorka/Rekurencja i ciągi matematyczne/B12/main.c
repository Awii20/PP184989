#include <stdio.h>
#include <stdlib.h>

int seqAlt(int n){
    if(n==0)
        return 2;
    if(n==1)
        return 3;
    return seqAlt(n-1)* seqAlt(n-2) + 1;
}


int main(){
    printf("%d\n", seqAlt(2));
    printf("%d\n", seqAlt(3));
    printf("%d\n", seqAlt(4));
}
