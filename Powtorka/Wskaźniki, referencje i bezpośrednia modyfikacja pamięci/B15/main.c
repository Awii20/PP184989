#include <stdio.h>
#include <stdlib.h>
int* minOfThree(int *ptrA, int *ptrB, int *ptrC){
    if(*ptrA <= ptrB)
        if(*ptrA <= *ptrC)
            return ptrA;
    if(*ptrB<= *ptrC)
        return ptrB;
    return ptrC;
}

int main(){
    int a = 4;
    int b = 7;
    int c = 1;
    int *wyzn = minOfThree(&a, &b, &c);
    printf("%d\n", *wyzn);
    wyzn = minOfThree(&b, &b, &c);
    printf("%d\n", *wyzn);
    wyzn = minOfThree(&c, &a, &b);
    printf("%d\n", *wyzn);
}
