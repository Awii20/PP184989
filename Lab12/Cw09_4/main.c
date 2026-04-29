#include <stdio.h>
#include <stdlib.h>

double func(double number1, double number2){
    if(number1 > number2)
        return number1 *2 - 15 + number2/3;
    return number2 *2 - 15 + number1/3;
}

double calculateOperation(double(*a)(double, double), double number1,  double number2){
    return a(number1, number2);
}


int main(){
    printf("%lf\n", calculateOperation(func, 15, 24));
}
