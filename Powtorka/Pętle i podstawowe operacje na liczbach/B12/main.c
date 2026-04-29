#include <stdio.h>
#include <stdlib.h>

int countOddInRange(int a, int b){
    int liczba = 0;
    for(int i=a; i <=b; i++){
        if(i%2==1){
            liczba++;
        }
    }
    return liczba;
}
int main(){
    printf("%d\n", countOddInRange(4, 92));
    printf("%d\n", countOddInRange(13, 30));
}
