#include <stdio.h>
#include <stdlib.h>

int main(){
    int poprzedni=0;
    int obecny=0;
    int nastepny=0;
    int zgodne = 0;
    printf("Wpisz a1:\n");
    scanf("%d", &poprzedni);
    printf("Wpisz a2:\n");
    scanf("%d", &obecny);
    for ( int i=3; i<11; i++){
        printf("Wpisz a%i:\n", i);
        scanf("%d", &nastepny);
        if  ((2 * obecny) - poprzedni < nastepny){
            zgodne++;
        }
        obecny = poprzedni;
        poprzedni = nastepny;
    }
    printf("Zgodnych ze wzorem jest %d", zgodne);
}
