#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("wpisz liczbe:\n");
    scanf("%d", &n);
    float polowa = n/2;
    printf("Podzielne przez: ");
    for (int i=1; polowa > i; i++){
        if(n%i==0){
            printf("%d, ", i);
        }
    }
}
