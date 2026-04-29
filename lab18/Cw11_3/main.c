#include <stdio.h>
#include <stdlib.h>

int countVow(char *tablica){
    int licznik = 0;
    for (int i = 0; tablica[i] != '\0'; i++){
        char znak = tablica[i];
        if (znak == 'a' || znak == 'A' ||
            znak == 'e' || znak == 'E' ||
            znak == 'i' || znak == 'I' ||
            znak == 'o' || znak == 'O' ||
            znak == 'u' || znak == 'U' ||
            znak == 'y' || znak == 'Y'){
            licznik++;
        }
    }
    return licznik;
}

int main(){
    char slowo[]= "sprawdzam samogloski";
    printf("%d\n", countVow(slowo));
    return 0;
}
