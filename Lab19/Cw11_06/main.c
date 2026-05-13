#include <stdio.h>
#include <stdlib.h>

char toLowerNew(char tab[]){
    int i =0;
    while(tab[i] != '\0'){
        if(tab[i] >= 'A' && tab[i]<= 'Z'){
            tab[i] = tab[i] + 32;
        }
        i++;
    }
}

int main(){
    char tab[] = "SiGmaAa";
    toLowerNew(tab);
    printf("%s", tab);
}
