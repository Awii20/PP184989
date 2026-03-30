#include <stdio.h>
#include <stdlib.h>

unsigned calculateFactorialRecursively(unsigned a){
      if(a<=1){
         return 1;
      } else {
        return a*calculateFactorialRecursively(a-1);
      }

}

int main(){
   printf("%u\n", calculateFactorialRecursively(0));
   printf("%u\n", calculateFactorialRecursively(1));
   printf("%u\n", calculateFactorialRecursively(2));
   printf("%u\n", calculateFactorialRecursively(3));
   printf("%u\n", calculateFactorialRecursively(5));
   printf("%u\n", calculateFactorialRecursively(6));
}

