#include <stdio.h>
#include <stdlib.h>

int przeciwna(int x){
    return x * (-1);

}

int mniejsza(int x){
    return x-10;
}

int wynik(int (*a)(int), int (*b)(int), int x){
    if((a(x)>0 && b(x)>0) || (a(x)<0 && b(x)<0) || (a(x)==0 && b(x)==0))
        return 1;
    return 0;
}


int main(){
    printf("%d\n", wynik(przeciwna, mniejsza, 6));
    printf("%d\n", wynik(przeciwna, mniejsza, -2));
}
