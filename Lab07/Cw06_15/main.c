#include <stdio.h>
#include <stdlib.h>

int main(){
    int r;
    printf("Wpisz reszte do wydania:\n");
    scanf("%d", &r);
    int a=0;
    while (r-5>= a*5){
        a++;
    }
    r = r-a*5;
    int b=0;
    while (r-2 >= b*2){
        b++;
    }
    r = r-b*2;
    int c=0;
    if (r==1){
        c=1;
    }
    printf("Prosze wydac monet 5zl %d, monet 2zl %d, monet 1zl %d", a, b, c);
}
