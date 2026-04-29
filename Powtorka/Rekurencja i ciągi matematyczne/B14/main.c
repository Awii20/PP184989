#include <stdio.h>
#include <stdlib.h>

int altSeq(int n){
    if(n==0)
        return 3;
    if(n==1)
        return 1;
    return 2*altSeq(n-1) - altSeq(n-2) + n;
}


int main(){
     printf("%d\n", altSeq(2));
     printf("%d\n", altSeq(3));
     printf("%d\n", altSeq(4));

}
