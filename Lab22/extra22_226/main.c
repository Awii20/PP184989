#include <stdio.h>
#include <stdlib.h>

void nieparzyste(int n, int m, int **tab) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tab[i][j] % 2 != 0) {
                printf("%d ", tab[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int w = 3;
    int k = 3;
    int **tab = malloc(w * sizeof(int *));
    for (int i = 0; i < w; i++) {
        tab[i] = malloc(k * sizeof(int));
    }
    int wart[] = {1, 2, 3, 4, 6, 6, 7, 8, 7};
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            tab[i][j] = wart[i * k + j];
        }
    }
    nieparzyste(w, k, tab);
    for (int i = 0; i < w; i++) {
        free(tab[i]);
    }
    free(tab);
}
