#include <stdio.h>
#include <stdlib.h>

int kwadrat(int x){
    return x*x;
}

int calculate(int (*operation)(int), int number){
    return operation(number);
}

int main(){
    printf("%d\n", calculate(kwadrat, 5));
}
