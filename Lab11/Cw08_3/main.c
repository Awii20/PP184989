#include <stdio.h>
#include <stdlib.h>

void copyInt(int x, int *w){
    *w = x;
}

int main()
{
    int miejsce = 0;
    copyInt(6, &miejsce);
    printf("%d\n", miejsce);
    return 0;
}
