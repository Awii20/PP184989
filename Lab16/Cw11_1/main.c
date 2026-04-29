#include <stdio.h>
#include <stdlib.h>

int length(char* n){
    int licznik = 0;
    while (n[licznik] != '\0') {
        licznik++;
    }
    return licznik;
}

int main(){
    char *sigma = "sigma";
    printf("%d", length(sigma));
}
