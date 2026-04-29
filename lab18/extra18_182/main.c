#include <stdio.h>
#include <stdlib.h>

int binary(char *napis) {
    int licznik = 0;
    for (int i = 0; napis[i] != '\0'; i++) {
        if (napis[i] == '0' || napis[i] == '1') {
            licznik++;
        }
    }
    return licznik;
}


int main(){
    char slowo[]= "101six210";
    printf("%d", binary(slowo));
}
