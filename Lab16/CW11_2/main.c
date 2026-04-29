#include <stdio.h>
#include <stdlib.h>

int countNums(char slowo[]){
    int licznik = 0;
    int i = 0;
    while(slowo[i] != '\0'){
        if (slowo[i] >= '0' && slowo[i] <= '9'){
            licznik ++;
        }
        i++;
    }
    return licznik;
}


int main(){
    char slowo[] = "213bbb4";
    printf("%d", countNums(slowo));
}
