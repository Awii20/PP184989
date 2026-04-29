#include <stdio.h>
#include <stdlib.h>

int powSeq(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 3;
    return powSeq(n-1) + 2 * powSeq(n-2) + 1;
}

int main(){
     printf("%d\n", powSeq(2));
     printf("%d\n", powSeq(3));
     printf("%d\n", powSeq(4));
}
