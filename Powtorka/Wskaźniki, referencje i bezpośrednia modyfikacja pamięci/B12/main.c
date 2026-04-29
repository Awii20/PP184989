#include <stdio.h>
#include <stdlib.h>

void swapIfPositive(int *p1, int *p2){
    if((*p1 >=0)& (*p2>=0)){
        int temp = *p2;
        *p2 = *p1;
        *p1 = temp;

    }
}

int main(){
    int a = 4;
    int b = 5;
    int c = -2;
    printf("%d, %d, %d\n", a, b, c );
    swapIfPositive(&a, &b);
    printf("%d, %d, %d\n", a, b, c );
    swapIfPositive(&b, &c);
    printf("%d, %d, %d\n", a, b, c );
}
