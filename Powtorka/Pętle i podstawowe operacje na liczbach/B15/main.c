#include <stdio.h>
#include <stdlib.h>

int countDivisors(int n){
    int licznik;
    for(int i=1; i<=n; i++){
        if(n%i ==0){
            licznik++;
        }
    }
    return licznik;
}

int main(){
    printf("%d\n", countDivisors(15));
    printf("%d\n", countDivisors(21));
}
