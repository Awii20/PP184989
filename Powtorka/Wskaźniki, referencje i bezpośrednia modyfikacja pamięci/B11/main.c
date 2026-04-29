#include <stdio.h>
#include <stdlib.h>

void swapIfGreater(int *ptr1, int *ptr2 ){
    if (*ptr1 > *ptr2){
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}

int main(){
    int a = 3;
    int b = 5;
    int c = 7;
    swapIfGreater(&a, &b);
    swapIfGreater(&c, &a);
    swapIfGreater(&b, &c);
    printf("%d, %d, %d", a, b, c );
}
