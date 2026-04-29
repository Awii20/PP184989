#include <stdio.h>
#include <stdlib.h>

int productMultiples(int a, int b, int m){
    int iloczyn = 1;
    for(int i=1;i<=b;i++){
        if((i*m <=b)&(i*m> a)){
            iloczyn = iloczyn * i;
        }
    }
    return iloczyn;
}



int main(){
    printf("%d\n", productMultiples(2, 10, 2));
    printf("%d\n", productMultiples(2, 24, 4));
}
