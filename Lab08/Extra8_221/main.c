#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Wpisz liczbe: ");
    scanf("%d", &n);
    printf("Podzielne przez 3 to: ");
    for(int i=n; i<=2*n; i++){
        if (i%3 == 0){
            printf("%d, ", i);
        }
    }
}
