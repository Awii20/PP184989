#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
    return a+b;
}

int sumVals(int *c, int *d){
    return *c + *d;
}

void addPtr(int *e, int *f, int *g){
    *g = *e + *f;
}

int main(){
    printf("%d\n", sum(4,5));
    printf("%d\n", sum(1,3));
    printf("%d\n", sum(-4,21));

    int x1 = 5, y1 = 16;
    int x2 = 33, y2 = 1;

    printf("%d\n", sumVals(&x1, &y1));
    printf("%d\n", sumVals(&x2, &y2));

    int a = 15;
    int b = 25;
    int wynik = 0;

    addPtr(&a, &b, &wynik);

    printf("Wynik dzialania addPtr dla %d i %d to: %d\n", a, b, wynik);
}
