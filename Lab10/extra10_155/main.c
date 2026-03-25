#include <stdio.h>
#include <stdlib.h>

int extra155(int a, int b){
    if (a%8 > b%8){
        return 1;
    }
    return 0;
}



int main(){
printf("%d\n", extra155(20, 19));
printf("%d\n", extra155(24, 23));
printf("%d\n", extra155(10,10));
}
