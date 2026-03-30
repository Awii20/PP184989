#include <stdio.h>
#include <stdlib.h>

int countFunctionCalls(){
    static int wywolanie=0;
    wywolanie++;
    printf("Funkcja zostala wywolana %d razy\n", wywolanie);
}


int main(){
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    return 0;
}
