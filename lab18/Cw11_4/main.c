#include <stdio.h>
#include <stdlib.h>

int cmpStrNew(char *txt1, char *txt2) {
    for (int i = 0; ; i++) {
        if (txt1[i] != txt2[i]) {
            return 0;
        }
        if (txt1[i] == '\0') {
            return 1;
        }
    }
}

int main(){
    char txt1[] = "sigma";
    char txt2[] = "sigma";
    char txt3[] = "aura";
    printf("%d\n", cmpStrNew(txt1, txt2));
    printf("%d\n", cmpStrNew(txt1, txt3));
    printf("%d\n", cmpStrNew(txt3, txt2));
    return 0;
}
