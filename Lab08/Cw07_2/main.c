#include <stdio.h>
#include <stdlib.h>


float calculateAbsoluteValue(float x){
    if (x>=0)
        return x;
    return -x;

}

int main(){
    printf("%f\n", calculateAbsoluteValue(4.5));
    printf("%f\n", calculateAbsoluteValue(-5.3));
    printf("%f\n", calculateAbsoluteValue(0));
    return 0;
}
