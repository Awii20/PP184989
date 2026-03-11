#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Wpisz liczbe: ");
    scanf("%d", &a);
    if (a&1){
        printf("%d jest nieparzysta", a);
    }else {
        printf("%d jest parzysta", a);
    }
    return 0;
}


