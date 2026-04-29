#include <stdio.h>
#include <stdlib.h>

void absAndDouble(int *x){
    if(*x < 0)
        *x = *x *(-1);
    *x = *x * 2;
}

int main(){
    int a = -4;
    int b = 7;
    absAndDouble(&a);
    absAndDouble(&b);
    printf("%d %d", a, b);
}
