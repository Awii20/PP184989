#include <stdio.h>
#include <stdlib.h>

int countOutside(int a, int b, int n, int *tab){
    int licznik =0;
    if(a>=b)
        return 0;
    for(int i=0; i<n; i++){
        if((*(tab + i)>=a)&&(*(tab + i)<=b)){
            licznik++;
        }
    }
    return licznik;
}


int main(){
    int tab[]= {3,7,22,10,2,18,9};
    int wynik ;
    printf("%d", countOutside(5, 15, 7, tab));
}
