#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("wypisz trzy liczby: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b){
        if (a < c){
            printf("%d jest najmniejsza", a);
        } else {
            printf("%d jest najmniejsza", c);
        }
    } else {
        if (b < c){
            printf("%d jest najmniejsze", b);
        } else {
            printf("%d jest najmniejsze", c);
        }
    }

}
