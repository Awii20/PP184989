#include <stdio.h>
#include <stdlib.h>

int triSeq(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    return triSeq(n-1) + triSeq(n-2) + triSeq(n-3);
}


int main(){
     printf("%d\n", triSeq(4));
     printf("%d\n", triSeq(6));
     printf("%d\n", triSeq(7));
}
