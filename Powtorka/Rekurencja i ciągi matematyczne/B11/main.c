#include <stdio.h>
#include <stdlib.h>

int fiboModi(int n){
    if(n ==0)
        return 1;
    if(n ==1)
        return 2;
    return (fiboModi(n-1)*fiboModi(n-1)) + fiboModi(n-2);
}

int main(){
    printf("%d\n", fiboModi(2));
    printf("%d\n", fiboModi(3));
    printf("%d\n", fiboModi(4));
}
